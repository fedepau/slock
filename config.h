/*                     __ _         _        */
/*     ___ ___  _ __  / _(_) __ _  | |__     */
/*    / __/ _ \| '_ \| |_| |/ _` | | '_ \    */
/*   | (_| (_) | | | |  _| | (_| |_| | | |   */
/*    \___\___/|_| |_|_| |_|\__, (_)_| |_|   */
/*                          |___/            */

/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
    [INIT]   = "black",   /* after initialization */
    [INPUT]  = "#005577", /* during input */
    [FAILED] = "#CC3333", /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 30;

/* enable blur */
#define BLUR

/* set blur radius */
static const int blurRadius = 1;

/* enable pixelation */
#define PIXELATION

/* set pixelation radius */
static const int pixelSize = 1;
