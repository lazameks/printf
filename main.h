#ifndef MAIN_H
#define MAIN_H
/* Standard C library */
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>

/* Functions Header prototypes*/
int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *s);
int _str_len(char *str);  
#endif
