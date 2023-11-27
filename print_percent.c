#include "main.h"

/**
 * print_percent - Prints a percent sign (%%).
 * @ap: List containing the arguments (unused in this case).
 * 
 * Return: Number of characters printed, 1 for success.
 */
int print_percent(va_list ap){
    (void)ap;
    return (_putchar('%'));
}