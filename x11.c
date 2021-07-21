#include <stdio.h>

typedef struct _Display {
	int i;
} Display;

Display *XOpenDisplay(char *display_name);
int XCloseDisplay(Display *display_name);
int XQueryKeymap(Display *display, char *keys_return);


Display *XOpenDisplay(char *display_name)
{
	return NULL;
}

int XCloseDisplay(Display *display_name)
{
	return 0;
}

int XQueryKeymap(Display *display, char *keys_return)
{
	return 0;
}
