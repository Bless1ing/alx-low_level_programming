#include "main.h"
/**
 * set_bit - sets a bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8 || n == NULL)
{
return (-1);
}
unsigned long int mask = 1UL << index;
*n |= mask;
return (1);
}
{
unsigned long int number = 65;
unsigned int bit_index = 2;
int result = set_bit(&number, bit_index);
if (result == 1)
{
printf("Bit at index %u has been set to 1: %lu\n", bit_index, number);
}
else
{
printf("Error: Unable to set the bit at index %u.\n", bit_index);
}
return (0);
}
