#include "main.h"

/**
 * print_int - Prints an integer (%d and %i).
 * @ap: List containing integer/digit to print.
 * 
 * Return: Number of characters printed.
 */
int print_int (va_list ap){
    int n = va_arg(ap, int);
    int count = 0;

    if (n < 0){
        _putchar('-');
        count++;

        if (n == INT_MIN) {
        _putchar('2');
        n = 147483648;
        count += 2;
    }
    else {
        n = -n;
    }
    }
    if (n == 0){
        _putchar('0');
        count++;
    }
    else {
        int num_digits = 0;
        int i;
        int temp = n;
        char digits[10];
        while (temp != 0)
        {
            temp /= 10;
            num_digits++;
        }

        for (i = num_digits - 1; i >= 0; i--){
            digits[i] = n % 10 + '0';
            n /= 10;
        }

        for (i = 0; i < num_digits; i++){
            _putchar(digits[i]);
            count++;
        }
    }
    return (count);
}