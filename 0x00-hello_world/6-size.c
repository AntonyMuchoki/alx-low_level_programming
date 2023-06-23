#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
/**
 * -A programme that prints different types of data types and their sizes
 *  Return: 0 (success)
 */
int main(void)
{
char a;
int i;
long int l;
long long int d;
float f;
printf("size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(l));
printf("size of long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
