#include "main.h"

/**
 * _printf - Custom implementation of the C library function printf.
 * @format: The format string that contains the text to be written to stdout.
 *          It may contain embedded format specifiers that are replaced by
 *          the values specified in subsequest additional arguments.
 *
 * Return: Numbers of characters printed (excluding the NULL byte at the end
 *         of the string
 * or -1 if there is an error.
 */
int _printf(const char *format, ...)
{
int i, j;
int char_count = 0;
va_list ap;
print_type argument[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_int},
{"i", print_int},
{NULL, NULL}
};
va_start(ap, format);
if (!format || (format[0] == '%' && !format[1]))
return (-1);
for (i = 0; format && format[i]; i++)
{
if (format[i] != '%') {
char_count += _putchar(format[i]);
continue;
}
for (j = 0; argument[j].specifier; j++)
{
if (format[i + 1] == '\0') {
char_count += _putchar('%');
break;
}
if (*argument[j].specifier == format[i + 1])
{
char_count += argument[j].f(ap);
i++;
break;
}
}
if (!argument[j].specifier && format[i + 1] != '\0')
{
char_count += _putchar('%');
char_count += _putchar(format[i + 1]);
i++;
}
}
va_end(ap);
return (char_count);
}