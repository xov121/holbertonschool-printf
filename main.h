#ifndef MAIN_H
#define MAIN_H

#ifndef NULL
#define NULL ((void *)0)
#endif //NULL

#include <limits.h> // For INT_MIN macro in print_int
#include <stdarg.h> // For va
#include <unistd.h> // For write
#include <stdio.h> // For printf

int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
int print_char(va_list ap);
int print_string(va_list ap);
int print_percent(va_list ap);
int print_int(va_list ap);


#endif //MAIN_H
