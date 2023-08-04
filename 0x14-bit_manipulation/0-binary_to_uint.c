#include "main.h"
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
if (b == NULL)
{
return (0);
}
unsigned int result = 0;
while (*b)
{
if (*b == '0')
{
result = (result << 1);
}
else if (*b == '1')
{
result = (result << 1) | 1;
}
else
{
return (0);
}
b++;
}
return (result);
const char *binary_string = "1101";
unsigned int decimal_number = binary_to_uint(binary_string);
printf("Binary: %s\nDecimal: %u\n", binary_string, decimal_number);
return (0);
}
