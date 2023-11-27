#include "main.h"

/**
 * print_string - Prints a string.
 * @ap: List containing string to print.
 * 
 * Return: Number of characters printed.
 */
int print_string(va_list ap){
    char *str;
    int count = 0;

    str = va_arg(ap, char *);
    
    if (str == NULL){
        str = "(null)";
    }
    count = write(1, str, _strlen(str));
    return (count);
}