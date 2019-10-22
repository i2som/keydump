#include "evdev_read.h"
#include "event2str.h"

#ifdef __cplusplus
extern "C" {
#endif
static char event_buf[256];

int evdev_init(char *dev_name)
{
    int fd;
    fd = open(dev_name, O_RDONLY);
    if (fd < 0){
        return -1;
    }
    return fd;
}

char *evdev_read(int fd)
{
    int rc;
    fd_set read_set;
    struct input_event ev;
    struct timeval timeout = {1, 0};

    FD_ZERO(&read_set);
    FD_SET(fd, &read_set);

    /* Wait for input */
    rc = select(fd + 1, &read_set, NULL, NULL, &timeout);
    if (rc <= 0)
        return NULL;

    if (FD_ISSET(fd, &read_set)) {
        rc = read(fd, &ev, sizeof(ev));
        if (rc < 0) {
            printf("read failed\n");
            return NULL;
        } else if (rc == 0) {
            printf("read zero\n");
            return NULL;
        } else {
            if (rc != sizeof(ev)) {
                printf("read size: %d\n", rc);
                return NULL;
            } else {

                const char *type_str;
                const char *code_str;
                char        type_buf[7];
                char        code_buf[7];

                if (ev.type != EV_KEY)
                    return NULL;

                event2str(&ev, &type_str, &code_str);
                if (type_str == NULL){
                    snprintf(type_buf, sizeof(type_buf), "0x%.2hX", ev.type);
                    type_str = type_buf;
                }
                if (code_str == NULL) {
                    snprintf(code_buf, sizeof(code_buf), "0x%.4hX", ev.code);
                    code_str = code_buf;
                }
                memset(event_buf, 0, sizeof(event_buf));
                sprintf(event_buf, "%s\t%s\t0x%.8X", type_str, code_str, ev.value);

                // printf("Key %i State %i\n", ev.code, ev.value);
            }
        }
    } else{
        return NULL;
    }
    return event_buf;
}

void evdev_close(int fd)
{
    close(fd);
}

#ifdef __cplusplus
}
#endif


