#include "main.h"

/**
 * main- print all alphabet in lowercase in newline
 *  print_alphabet -prints alphabet
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
