#ifndef MAIN_H
#define MAIN_H

#ifndef NULL
#define NULL ((void *)0)
#endif

#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct print_type - A structure mapping a format specifier to its handling function.
 * @specifier: The format specifier (e.g., "c", "s", "%").
 * @f: Pointer to the function that handles the specifier.
 */
typedef struct print_type {
char *specifier;
int (*f)(va_list);
} print_type;

int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);
int print_int(va_list ap);

#endif
