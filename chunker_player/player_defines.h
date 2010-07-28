#ifndef _CHUNKER_PLAYER_DEFINES_H
#define _CHUNKER_PLAYER_DEFINES_H

#define PLAYER_FAIL_RETURN -1
#define PLAYER_OK_RETURN 0

#define MAX_CHANNELS_NUM 255

#define SDL_AUDIO_BUFFER_SIZE 1024

#define MAX_TOLLERANCE 40
#define AUDIO	1
#define VIDEO	2
#define QUEUE_MAX_SIZE 3000
#define LOSS_HISTORY_MAX_SIZE 100

#define FULLSCREEN_ICON_FILE "icons/fullscreen32.png"
#define NOFULLSCREEN_ICON_FILE "icons/nofullscreen32.png"
#define FULLSCREEN_HOVER_ICON_FILE "icons/fullscreen32.png"
#define NOFULLSCREEN_HOVER_ICON_FILE "icons/nofullscreen32.png"

#define CHANNEL_UP_ICON_FILE "icons/up_16.png"
#define CHANNEL_DOWN_ICON_FILE "icons/down_16.png"

#define DEFAULT_CHANNEL_EXEC_PATH "../OfferStreamer/"
#define DEFAULT_CHANNEL_EXEC_NAME "offerstreamer-ml-monl-http"
#define DEFAULT_CONF_FILENAME "channels.conf"

#define DEFAULT_WIDTH 704
#define DEFAULT_HEIGHT 576
#define DEFAULT_RATIO 1.22

#define BUTTONS_LAYER_OFFSET 10
#define BUTTONS_CONTAINER_HEIGHT 40
#define BUTTONS_CONTAINER_WIDTH 100

#define FULLSCREEN_BUTTON_INDEX 0
#define NO_FULLSCREEN_BUTTON_INDEX 1
#define CHANNEL_UP_BUTTON_INDEX 2
#define CHANNEL_DOWN_BUTTON_INDEX 3

#define NBUTTONS 4
#define MAIN_FONT_FILE "mainfont.ttf"
#define MAIN_FONT_SIZE 18

#define STATS_FONT_FILE "mainfont.ttf"
#define STATS_FONT_SIZE 14
#define STATS_BOX_HEIGHT 20

#define RESTORE_SCREEN_ON_ZAPPING

// #define DEBUG_AUDIO
// #define DEBUG_VIDEO
// #define DEBUG_QUEUE
// #define DEBUG_SOURCE
// #define DEBUG_STATS
//#define DEBUG_AUDIO_BUFFER
// #define DEBUG_CHUNKER

#endif // _CHUNKER_PLAYER_DEFINES_H
