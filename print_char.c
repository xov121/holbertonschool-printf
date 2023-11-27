#include "main.h"

/**
 * print_char - Prints a character (%c).
 * @ap: List containing the character to be printed.
 * 
 * Return: Number of characters printed. 1 for success and -1 for error.
 */
int print_char(va_list ap){
    int character = va_arg(ap, int);
    return write(1, &character, 1);
}
