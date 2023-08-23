#ifndef MAIN_H
#define MAIN_H
/* Standard C library */
#include <stddef.h>
#include <unistd.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>

/* Functions Header prototypes*/
void conversion_handler(const char *format, va_list args, int *char_count);
int _printf(const char *format, ...);
void print_character(char c, int *char_count);
void print_string(const char *s, int *char_count);
void print_integer(int num, int *char_count);
#endif
