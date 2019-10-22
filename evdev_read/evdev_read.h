#ifndef  __EVDEV_READ_H_
#define __EVDEV_READ_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <assert.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>
#include <linux/input.h>

#ifdef __cplusplus
extern "C" {
#endif

int evdev_init(char *dev_name);
char *evdev_read(int fd);
void evdev_close(int fd);

#ifdef __cplusplus
}
#endif
#endif

