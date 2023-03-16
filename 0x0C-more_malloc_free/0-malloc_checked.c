#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - memory allocation
  * @b: size allocation
  *
  * Return: Nothing.
  */
void *malloc_checked(unsigned int b)
{
	void *ch = malloc(b);

	if (ch == NULL)
		exit(98);

	return (ch);}
#include <stdlib.h>
#include "main.h"
/**
* *malloc_checked - allocates memory using malloc
* @b: number of bytes to allocate
*
* Return: a pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
