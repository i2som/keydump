/*
 * vim:nomodifiable
 * DO NOT EDIT
 * This file is generated automatically by event2str.inc.sh.
 */

static void
event2str(const struct input_event     *e,
          const char                  **ptype_str,
          const char                  **pcode_str)
{
#define MAP(_name) \
    case _name:                 \
        *pcode_str = #_name;    \
        break

    switch (e->type)
    {

        case EV_SYN:

            *ptype_str = "EV_SYN";

            switch (e->code)
            {
                MAP(SYN_REPORT);
                MAP(SYN_CONFIG);
                MAP(SYN_MT_REPORT);
                MAP(SYN_DROPPED);
                default:
                    *pcode_str = NULL;
                    break;
            } /* switch (e->code) */
            break; /* EV_SYN */

        case EV_KEY:

            *ptype_str = "EV_KEY";

            switch (e->code)
            {
                MAP(KEY_RESERVED);
                MAP(KEY_ESC);
                MAP(KEY_1);
                MAP(KEY_2);
                MAP(KEY_3);
                MAP(KEY_4);
                MAP(KEY_5);
                MAP(KEY_6);
                MAP(KEY_7);
                MAP(KEY_8);
                MAP(KEY_9);
                MAP(KEY_0);
                MAP(KEY_MINUS);
                MAP(KEY_EQUAL);
                MAP(KEY_BACKSPACE);
                MAP(KEY_TAB);
                MAP(KEY_Q);
                MAP(KEY_W);
                MAP(KEY_E);
                MAP(KEY_R);
                MAP(KEY_T);
                MAP(KEY_Y);
                MAP(KEY_U);
                MAP(KEY_I);
                MAP(KEY_O);
                MAP(KEY_P);
                MAP(KEY_LEFTBRACE);
                MAP(KEY_RIGHTBRACE);
                MAP(KEY_ENTER);
                MAP(KEY_LEFTCTRL);
                MAP(KEY_A);
                MAP(KEY_S);
                MAP(KEY_D);
                MAP(KEY_F);
                MAP(KEY_G);
                MAP(KEY_H);
                MAP(KEY_J);
                MAP(KEY_K);
                MAP(KEY_L);
                MAP(KEY_SEMICOLON);
                MAP(KEY_APOSTROPHE);
                MAP(KEY_GRAVE);
                MAP(KEY_LEFTSHIFT);
                MAP(KEY_BACKSLASH);
                MAP(KEY_Z);
                MAP(KEY_X);
                MAP(KEY_C);
                MAP(KEY_V);
                MAP(KEY_B);
                MAP(KEY_N);
                MAP(KEY_M);
                MAP(KEY_COMMA);
                MAP(KEY_DOT);
                MAP(KEY_SLASH);
                MAP(KEY_RIGHTSHIFT);
                MAP(KEY_KPASTERISK);
                MAP(KEY_LEFTALT);
                MAP(KEY_SPACE);
                MAP(KEY_CAPSLOCK);
                MAP(KEY_F1);
                MAP(KEY_F2);
                MAP(KEY_F3);
                MAP(KEY_F4);
                MAP(KEY_F5);
                MAP(KEY_F6);
                MAP(KEY_F7);
                MAP(KEY_F8);
                MAP(KEY_F9);
                MAP(KEY_F10);
                MAP(KEY_NUMLOCK);
                MAP(KEY_SCROLLLOCK);
                MAP(KEY_KP7);
                MAP(KEY_KP8);
                MAP(KEY_KP9);
                MAP(KEY_KPMINUS);
                MAP(KEY_KP4);
                MAP(KEY_KP5);
                MAP(KEY_KP6);
                MAP(KEY_KPPLUS);
                MAP(KEY_KP1);
                MAP(KEY_KP2);
                MAP(KEY_KP3);
                MAP(KEY_KP0);
                MAP(KEY_KPDOT);
                MAP(KEY_ZENKAKUHANKAKU);
                MAP(KEY_102ND);
                MAP(KEY_F11);
                MAP(KEY_F12);
                MAP(KEY_RO);
                MAP(KEY_KATAKANA);
                MAP(KEY_HIRAGANA);
                MAP(KEY_HENKAN);
                MAP(KEY_KATAKANAHIRAGANA);
                MAP(KEY_MUHENKAN);
                MAP(KEY_KPJPCOMMA);
                MAP(KEY_KPENTER);
                MAP(KEY_RIGHTCTRL);
                MAP(KEY_KPSLASH);
                MAP(KEY_SYSRQ);
                MAP(KEY_RIGHTALT);
                MAP(KEY_LINEFEED);
                MAP(KEY_HOME);
                MAP(KEY_UP);
                MAP(KEY_PAGEUP);
                MAP(KEY_LEFT);
                MAP(KEY_RIGHT);
                MAP(KEY_END);
                MAP(KEY_DOWN);
                MAP(KEY_PAGEDOWN);
                MAP(KEY_INSERT);
                MAP(KEY_DELETE);
                MAP(KEY_MACRO);
                MAP(KEY_MUTE);
                MAP(KEY_VOLUMEDOWN);
                MAP(KEY_VOLUMEUP);
                MAP(KEY_POWER);
                MAP(KEY_KPEQUAL);
                MAP(KEY_KPPLUSMINUS);
                MAP(KEY_PAUSE);
                MAP(KEY_SCALE);
                MAP(KEY_KPCOMMA);
                MAP(KEY_HANGEUL);
                MAP(KEY_HANJA);
                MAP(KEY_YEN);
                MAP(KEY_LEFTMETA);
                MAP(KEY_RIGHTMETA);
                MAP(KEY_COMPOSE);
                MAP(KEY_STOP);
                MAP(KEY_AGAIN);
                MAP(KEY_PROPS);
                MAP(KEY_UNDO);
                MAP(KEY_FRONT);
                MAP(KEY_COPY);
                MAP(KEY_OPEN);
                MAP(KEY_PASTE);
                MAP(KEY_FIND);
                MAP(KEY_CUT);
                MAP(KEY_HELP);
                MAP(KEY_MENU);
                MAP(KEY_CALC);
                MAP(KEY_SETUP);
                MAP(KEY_SLEEP);
                MAP(KEY_WAKEUP);
                MAP(KEY_FILE);
                MAP(KEY_SENDFILE);
                MAP(KEY_DELETEFILE);
                MAP(KEY_XFER);
                MAP(KEY_PROG1);
                MAP(KEY_PROG2);
                MAP(KEY_WWW);
                MAP(KEY_MSDOS);
                MAP(KEY_COFFEE);
                MAP(KEY_ROTATE_DISPLAY);
                MAP(KEY_CYCLEWINDOWS);
                MAP(KEY_MAIL);
                MAP(KEY_BOOKMARKS);
                MAP(KEY_COMPUTER);
                MAP(KEY_BACK);
                MAP(KEY_FORWARD);
                MAP(KEY_CLOSECD);
                MAP(KEY_EJECTCD);
                MAP(KEY_EJECTCLOSECD);
                MAP(KEY_NEXTSONG);
                MAP(KEY_PLAYPAUSE);
                MAP(KEY_PREVIOUSSONG);
                MAP(KEY_STOPCD);
                MAP(KEY_RECORD);
                MAP(KEY_REWIND);
                MAP(KEY_PHONE);
                MAP(KEY_ISO);
                MAP(KEY_CONFIG);
                MAP(KEY_HOMEPAGE);
                MAP(KEY_REFRESH);
                MAP(KEY_EXIT);
                MAP(KEY_MOVE);
                MAP(KEY_EDIT);
                MAP(KEY_SCROLLUP);
                MAP(KEY_SCROLLDOWN);
                MAP(KEY_KPLEFTPAREN);
                MAP(KEY_KPRIGHTPAREN);
                MAP(KEY_NEW);
                MAP(KEY_REDO);
                MAP(KEY_F13);
                MAP(KEY_F14);
                MAP(KEY_F15);
                MAP(KEY_F16);
                MAP(KEY_F17);
                MAP(KEY_F18);
                MAP(KEY_F19);
                MAP(KEY_F20);
                MAP(KEY_F21);
                MAP(KEY_F22);
                MAP(KEY_F23);
                MAP(KEY_F24);
                MAP(KEY_PLAYCD);
                MAP(KEY_PAUSECD);
                MAP(KEY_PROG3);
                MAP(KEY_PROG4);
                MAP(KEY_DASHBOARD);
                MAP(KEY_SUSPEND);
                MAP(KEY_CLOSE);
                MAP(KEY_PLAY);
                MAP(KEY_FASTFORWARD);
                MAP(KEY_BASSBOOST);
                MAP(KEY_PRINT);
                MAP(KEY_HP);
                MAP(KEY_CAMERA);
                MAP(KEY_SOUND);
                MAP(KEY_QUESTION);
                MAP(KEY_EMAIL);
                MAP(KEY_CHAT);
                MAP(KEY_SEARCH);
                MAP(KEY_CONNECT);
                MAP(KEY_FINANCE);
                MAP(KEY_SPORT);
                MAP(KEY_SHOP);
                MAP(KEY_ALTERASE);
                MAP(KEY_CANCEL);
                MAP(KEY_BRIGHTNESSDOWN);
                MAP(KEY_BRIGHTNESSUP);
                MAP(KEY_MEDIA);
                MAP(KEY_SWITCHVIDEOMODE);
                MAP(KEY_KBDILLUMTOGGLE);
                MAP(KEY_KBDILLUMDOWN);
                MAP(KEY_KBDILLUMUP);
                MAP(KEY_SEND);
                MAP(KEY_REPLY);
                MAP(KEY_FORWARDMAIL);
                MAP(KEY_SAVE);
                MAP(KEY_DOCUMENTS);
                MAP(KEY_BATTERY);
                MAP(KEY_BLUETOOTH);
                MAP(KEY_WLAN);
                MAP(KEY_UWB);
                MAP(KEY_UNKNOWN);
                MAP(KEY_VIDEO_NEXT);
                MAP(KEY_VIDEO_PREV);
                MAP(KEY_BRIGHTNESS_CYCLE);
                MAP(KEY_BRIGHTNESS_AUTO);
                MAP(KEY_DISPLAY_OFF);
                MAP(KEY_WWAN);
                MAP(KEY_RFKILL);
                MAP(KEY_MICMUTE);
                MAP(BTN_MISC);
                MAP(BTN_1);
                MAP(BTN_2);
                MAP(BTN_3);
                MAP(BTN_4);
                MAP(BTN_5);
                MAP(BTN_6);
                MAP(BTN_7);
                MAP(BTN_8);
                MAP(BTN_9);
                MAP(BTN_MOUSE);
                MAP(BTN_RIGHT);
                MAP(BTN_MIDDLE);
                MAP(BTN_SIDE);
                MAP(BTN_EXTRA);
                MAP(BTN_FORWARD);
                MAP(BTN_BACK);
                MAP(BTN_TASK);
                MAP(BTN_JOYSTICK);
                MAP(BTN_THUMB);
                MAP(BTN_THUMB2);
                MAP(BTN_TOP);
                MAP(BTN_TOP2);
                MAP(BTN_PINKIE);
                MAP(BTN_BASE);
                MAP(BTN_BASE2);
                MAP(BTN_BASE3);
                MAP(BTN_BASE4);
                MAP(BTN_BASE5);
                MAP(BTN_BASE6);
                MAP(BTN_DEAD);
                MAP(BTN_GAMEPAD);
                MAP(BTN_EAST);
                MAP(BTN_C);
                MAP(BTN_NORTH);
                MAP(BTN_WEST);
                MAP(BTN_Z);
                MAP(BTN_TL);
                MAP(BTN_TR);
                MAP(BTN_TL2);
                MAP(BTN_TR2);
                MAP(BTN_SELECT);
                MAP(BTN_START);
                MAP(BTN_MODE);
                MAP(BTN_THUMBL);
                MAP(BTN_THUMBR);
                MAP(BTN_DIGI);
                MAP(BTN_TOOL_RUBBER);
                MAP(BTN_TOOL_BRUSH);
                MAP(BTN_TOOL_PENCIL);
                MAP(BTN_TOOL_AIRBRUSH);
                MAP(BTN_TOOL_FINGER);
                MAP(BTN_TOOL_MOUSE);
                MAP(BTN_TOOL_LENS);
                MAP(BTN_TOOL_QUINTTAP);
                MAP(BTN_TOUCH);
                MAP(BTN_STYLUS);
                MAP(BTN_STYLUS2);
                MAP(BTN_TOOL_DOUBLETAP);
                MAP(BTN_TOOL_TRIPLETAP);
                MAP(BTN_TOOL_QUADTAP);
                MAP(BTN_WHEEL);
                MAP(BTN_GEAR_UP);
                MAP(KEY_OK);
                MAP(KEY_SELECT);
                MAP(KEY_GOTO);
                MAP(KEY_CLEAR);
                MAP(KEY_POWER2);
                MAP(KEY_OPTION);
                MAP(KEY_INFO);
                MAP(KEY_TIME);
                MAP(KEY_VENDOR);
                MAP(KEY_ARCHIVE);
                MAP(KEY_PROGRAM);
                MAP(KEY_CHANNEL);
                MAP(KEY_FAVORITES);
                MAP(KEY_EPG);
                MAP(KEY_PVR);
                MAP(KEY_MHP);
                MAP(KEY_LANGUAGE);
                MAP(KEY_TITLE);
                MAP(KEY_SUBTITLE);
                MAP(KEY_ANGLE);
                MAP(KEY_ZOOM);
                MAP(KEY_MODE);
                MAP(KEY_KEYBOARD);
                MAP(KEY_SCREEN);
                MAP(KEY_PC);
                MAP(KEY_TV);
                MAP(KEY_TV2);
                MAP(KEY_VCR);
                MAP(KEY_VCR2);
                MAP(KEY_SAT);
                MAP(KEY_SAT2);
                MAP(KEY_CD);
                MAP(KEY_TAPE);
                MAP(KEY_RADIO);
                MAP(KEY_TUNER);
                MAP(KEY_PLAYER);
                MAP(KEY_TEXT);
                MAP(KEY_DVD);
                MAP(KEY_AUX);
                MAP(KEY_MP3);
                MAP(KEY_AUDIO);
                MAP(KEY_VIDEO);
                MAP(KEY_DIRECTORY);
                MAP(KEY_LIST);
                MAP(KEY_MEMO);
                MAP(KEY_CALENDAR);
                MAP(KEY_RED);
                MAP(KEY_GREEN);
                MAP(KEY_YELLOW);
                MAP(KEY_BLUE);
                MAP(KEY_CHANNELUP);
                MAP(KEY_CHANNELDOWN);
                MAP(KEY_FIRST);
                MAP(KEY_LAST);
                MAP(KEY_AB);
                MAP(KEY_NEXT);
                MAP(KEY_RESTART);
                MAP(KEY_SLOW);
                MAP(KEY_SHUFFLE);
                MAP(KEY_BREAK);
                MAP(KEY_PREVIOUS);
                MAP(KEY_DIGITS);
                MAP(KEY_TEEN);
                MAP(KEY_TWEN);
                MAP(KEY_VIDEOPHONE);
                MAP(KEY_GAMES);
                MAP(KEY_ZOOMIN);
                MAP(KEY_ZOOMOUT);
                MAP(KEY_ZOOMRESET);
                MAP(KEY_WORDPROCESSOR);
                MAP(KEY_EDITOR);
                MAP(KEY_SPREADSHEET);
                MAP(KEY_GRAPHICSEDITOR);
                MAP(KEY_PRESENTATION);
                MAP(KEY_DATABASE);
                MAP(KEY_NEWS);
                MAP(KEY_VOICEMAIL);
                MAP(KEY_ADDRESSBOOK);
                MAP(KEY_MESSENGER);
                MAP(KEY_DISPLAYTOGGLE);
                MAP(KEY_SPELLCHECK);
                MAP(KEY_LOGOFF);
                MAP(KEY_DOLLAR);
                MAP(KEY_EURO);
                MAP(KEY_FRAMEBACK);
                MAP(KEY_FRAMEFORWARD);
                MAP(KEY_CONTEXT_MENU);
                MAP(KEY_MEDIA_REPEAT);
                MAP(KEY_10CHANNELSUP);
                MAP(KEY_10CHANNELSDOWN);
                MAP(KEY_IMAGES);
                MAP(KEY_DEL_EOL);
                MAP(KEY_DEL_EOS);
                MAP(KEY_INS_LINE);
                MAP(KEY_DEL_LINE);
                MAP(KEY_FN);
                MAP(KEY_FN_ESC);
                MAP(KEY_FN_F1);
                MAP(KEY_FN_F2);
                MAP(KEY_FN_F3);
                MAP(KEY_FN_F4);
                MAP(KEY_FN_F5);
                MAP(KEY_FN_F6);
                MAP(KEY_FN_F7);
                MAP(KEY_FN_F8);
                MAP(KEY_FN_F9);
                MAP(KEY_FN_F10);
                MAP(KEY_FN_F11);
                MAP(KEY_FN_F12);
                MAP(KEY_FN_1);
                MAP(KEY_FN_2);
                MAP(KEY_FN_D);
                MAP(KEY_FN_E);
                MAP(KEY_FN_F);
                MAP(KEY_FN_S);
                MAP(KEY_FN_B);
                MAP(KEY_BRL_DOT1);
                MAP(KEY_BRL_DOT2);
                MAP(KEY_BRL_DOT3);
                MAP(KEY_BRL_DOT4);
                MAP(KEY_BRL_DOT5);
                MAP(KEY_BRL_DOT6);
                MAP(KEY_BRL_DOT7);
                MAP(KEY_BRL_DOT8);
                MAP(KEY_BRL_DOT9);
                MAP(KEY_BRL_DOT10);
                MAP(KEY_NUMERIC_0);
                MAP(KEY_NUMERIC_1);
                MAP(KEY_NUMERIC_2);
                MAP(KEY_NUMERIC_3);
                MAP(KEY_NUMERIC_4);
                MAP(KEY_NUMERIC_5);
                MAP(KEY_NUMERIC_6);
                MAP(KEY_NUMERIC_7);
                MAP(KEY_NUMERIC_8);
                MAP(KEY_NUMERIC_9);
                MAP(KEY_NUMERIC_STAR);
                MAP(KEY_NUMERIC_POUND);
                MAP(KEY_NUMERIC_A);
                MAP(KEY_NUMERIC_B);
                MAP(KEY_NUMERIC_C);
                MAP(KEY_NUMERIC_D);
                MAP(KEY_CAMERA_FOCUS);
                MAP(KEY_WPS_BUTTON);
                MAP(KEY_TOUCHPAD_TOGGLE);
                MAP(KEY_TOUCHPAD_ON);
                MAP(KEY_TOUCHPAD_OFF);
                MAP(KEY_CAMERA_ZOOMIN);
                MAP(KEY_CAMERA_ZOOMOUT);
                MAP(KEY_CAMERA_UP);
                MAP(KEY_CAMERA_DOWN);
                MAP(KEY_CAMERA_LEFT);
                MAP(KEY_CAMERA_RIGHT);
                MAP(KEY_ATTENDANT_ON);
                MAP(KEY_ATTENDANT_OFF);
                MAP(KEY_ATTENDANT_TOGGLE);
                MAP(KEY_LIGHTS_TOGGLE);
                MAP(BTN_DPAD_UP);
                MAP(BTN_DPAD_DOWN);
                MAP(BTN_DPAD_LEFT);
                MAP(BTN_DPAD_RIGHT);
                MAP(KEY_ALS_TOGGLE);
                MAP(KEY_BUTTONCONFIG);
                MAP(KEY_TASKMANAGER);
                MAP(KEY_JOURNAL);
                MAP(KEY_CONTROLPANEL);
                MAP(KEY_APPSELECT);
                MAP(KEY_SCREENSAVER);
                MAP(KEY_VOICECOMMAND);
                MAP(KEY_BRIGHTNESS_MIN);
                MAP(KEY_BRIGHTNESS_MAX);
                MAP(KEY_KBDINPUTASSIST_PREV);
                MAP(KEY_KBDINPUTASSIST_NEXT);
                MAP(KEY_KBDINPUTASSIST_PREVGROUP);
                MAP(KEY_KBDINPUTASSIST_NEXTGROUP);
                MAP(KEY_KBDINPUTASSIST_ACCEPT);
                MAP(KEY_KBDINPUTASSIST_CANCEL);
                MAP(BTN_TRIGGER_HAPPY);
                MAP(BTN_TRIGGER_HAPPY2);
                MAP(BTN_TRIGGER_HAPPY3);
                MAP(BTN_TRIGGER_HAPPY4);
                MAP(BTN_TRIGGER_HAPPY5);
                MAP(BTN_TRIGGER_HAPPY6);
                MAP(BTN_TRIGGER_HAPPY7);
                MAP(BTN_TRIGGER_HAPPY8);
                MAP(BTN_TRIGGER_HAPPY9);
                MAP(BTN_TRIGGER_HAPPY10);
                MAP(BTN_TRIGGER_HAPPY11);
                MAP(BTN_TRIGGER_HAPPY12);
                MAP(BTN_TRIGGER_HAPPY13);
                MAP(BTN_TRIGGER_HAPPY14);
                MAP(BTN_TRIGGER_HAPPY15);
                MAP(BTN_TRIGGER_HAPPY16);
                MAP(BTN_TRIGGER_HAPPY17);
                MAP(BTN_TRIGGER_HAPPY18);
                MAP(BTN_TRIGGER_HAPPY19);
                MAP(BTN_TRIGGER_HAPPY20);
                MAP(BTN_TRIGGER_HAPPY21);
                MAP(BTN_TRIGGER_HAPPY22);
                MAP(BTN_TRIGGER_HAPPY23);
                MAP(BTN_TRIGGER_HAPPY24);
                MAP(BTN_TRIGGER_HAPPY25);
                MAP(BTN_TRIGGER_HAPPY26);
                MAP(BTN_TRIGGER_HAPPY27);
                MAP(BTN_TRIGGER_HAPPY28);
                MAP(BTN_TRIGGER_HAPPY29);
                MAP(BTN_TRIGGER_HAPPY30);
                MAP(BTN_TRIGGER_HAPPY31);
                MAP(BTN_TRIGGER_HAPPY32);
                MAP(BTN_TRIGGER_HAPPY33);
                MAP(BTN_TRIGGER_HAPPY34);
                MAP(BTN_TRIGGER_HAPPY35);
                MAP(BTN_TRIGGER_HAPPY36);
                MAP(BTN_TRIGGER_HAPPY37);
                MAP(BTN_TRIGGER_HAPPY38);
                MAP(BTN_TRIGGER_HAPPY39);
                MAP(BTN_TRIGGER_HAPPY40);
                default:
                    *pcode_str = NULL;
                    break;
            } /* switch (e->code) */
            break; /* EV_KEY */

        case EV_REL:

            *ptype_str = "EV_REL";

            switch (e->code)
            {
                MAP(REL_X);
                MAP(REL_Y);
                MAP(REL_Z);
                MAP(REL_RX);
                MAP(REL_RY);
                MAP(REL_RZ);
                MAP(REL_HWHEEL);
                MAP(REL_DIAL);
                MAP(REL_WHEEL);
                MAP(REL_MISC);
                default:
                    *pcode_str = NULL;
                    break;
            } /* switch (e->code) */
            break; /* EV_REL */

        case EV_ABS:

            *ptype_str = "EV_ABS";

            switch (e->code)
            {
                MAP(ABS_X);
                MAP(ABS_Y);
                MAP(ABS_Z);
                MAP(ABS_RX);
                MAP(ABS_RY);
                MAP(ABS_RZ);
                MAP(ABS_THROTTLE);
                MAP(ABS_RUDDER);
                MAP(ABS_WHEEL);
                MAP(ABS_GAS);
                MAP(ABS_BRAKE);
                MAP(ABS_HAT0X);
                MAP(ABS_HAT0Y);
                MAP(ABS_HAT1X);
                MAP(ABS_HAT1Y);
                MAP(ABS_HAT2X);
                MAP(ABS_HAT2Y);
                MAP(ABS_HAT3X);
                MAP(ABS_HAT3Y);
                MAP(ABS_PRESSURE);
                MAP(ABS_DISTANCE);
                MAP(ABS_TILT_X);
                MAP(ABS_TILT_Y);
                MAP(ABS_TOOL_WIDTH);
                MAP(ABS_VOLUME);
                MAP(ABS_MISC);
                MAP(ABS_MT_SLOT);
                MAP(ABS_MT_TOUCH_MAJOR);
                MAP(ABS_MT_TOUCH_MINOR);
                MAP(ABS_MT_WIDTH_MAJOR);
                MAP(ABS_MT_WIDTH_MINOR);
                MAP(ABS_MT_ORIENTATION);
                MAP(ABS_MT_POSITION_X);
                MAP(ABS_MT_POSITION_Y);
                MAP(ABS_MT_TOOL_TYPE);
                MAP(ABS_MT_BLOB_ID);
                MAP(ABS_MT_TRACKING_ID);
                MAP(ABS_MT_PRESSURE);
                MAP(ABS_MT_DISTANCE);
                MAP(ABS_MT_TOOL_X);
                MAP(ABS_MT_TOOL_Y);
                default:
                    *pcode_str = NULL;
                    break;
            } /* switch (e->code) */
            break; /* EV_ABS */

        case EV_MSC:

            *ptype_str = "EV_MSC";

            switch (e->code)
            {
                MAP(MSC_SERIAL);
                MAP(MSC_PULSELED);
                MAP(MSC_GESTURE);
                MAP(MSC_RAW);
                MAP(MSC_SCAN);
                MAP(MSC_TIMESTAMP);
                default:
                    *pcode_str = NULL;
                    break;
            } /* switch (e->code) */
            break; /* EV_MSC */

        case EV_SW:

            *ptype_str = "EV_SW";

            switch (e->code)
            {
                MAP(SW_LID);
                MAP(SW_TABLET_MODE);
                MAP(SW_HEADPHONE_INSERT);
                MAP(SW_RFKILL_ALL);
                MAP(SW_MICROPHONE_INSERT);
                MAP(SW_DOCK);
                MAP(SW_LINEOUT_INSERT);
                MAP(SW_JACK_PHYSICAL_INSERT);
                MAP(SW_VIDEOOUT_INSERT);
                MAP(SW_CAMERA_LENS_COVER);
                MAP(SW_KEYPAD_SLIDE);
                MAP(SW_FRONT_PROXIMITY);
                MAP(SW_ROTATE_LOCK);
                MAP(SW_LINEIN_INSERT);
                MAP(SW_MUTE_DEVICE);
                default:
                    *pcode_str = NULL;
                    break;
            } /* switch (e->code) */
            break; /* EV_SW */

        case EV_LED:

            *ptype_str = "EV_LED";

            switch (e->code)
            {
                MAP(LED_NUML);
                MAP(LED_CAPSL);
                MAP(LED_SCROLLL);
                MAP(LED_COMPOSE);
                MAP(LED_KANA);
                MAP(LED_SLEEP);
                MAP(LED_SUSPEND);
                MAP(LED_MUTE);
                MAP(LED_MISC);
                MAP(LED_MAIL);
                MAP(LED_CHARGING);
                default:
                    *pcode_str = NULL;
                    break;
            } /* switch (e->code) */
            break; /* EV_LED */

        case EV_SND:

            *ptype_str = "EV_SND";

            switch (e->code)
            {
                MAP(SND_CLICK);
                MAP(SND_BELL);
                MAP(SND_TONE);
                default:
                    *pcode_str = NULL;
                    break;
            } /* switch (e->code) */
            break; /* EV_SND */

        case EV_REP:

            *ptype_str = "EV_REP";

            switch (e->code)
            {
                MAP(REP_DELAY);
                MAP(REP_PERIOD);
                default:
                    *pcode_str = NULL;
                    break;
            } /* switch (e->code) */
            break; /* EV_REP */

        case EV_FF:

            *ptype_str = "EV_FF";

            switch (e->code)
            {
                default:
                    *pcode_str = NULL;
                    break;
            } /* switch (e->code) */
            break; /* EV_FF */

        case EV_PWR:

            *ptype_str = "EV_PWR";

            switch (e->code)
            {
                default:
                    *pcode_str = NULL;
                    break;
            } /* switch (e->code) */
            break; /* EV_PWR */

        case EV_FF_STATUS:

            *ptype_str = "EV_FF_STATUS";

            switch (e->code)
            {
                default:
                    *pcode_str = NULL;
                    break;
            } /* switch (e->code) */
            break; /* EV_FF_STATUS */

        default:
            *ptype_str = NULL;
            *pcode_str = NULL;
            break;

    } /* switch (e->type) */

#undef MAP

}
