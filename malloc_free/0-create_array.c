#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
    if (size == 0)
        return NULL;

    char *array = (char *)malloc((size + 1) * sizeof(char)); // +1 for the '\0'
    if (array == NULL)
        return NULL;

    for (unsigned int i = 0; i < size; i++)
    {
        array[i] = c;
    }
    array[size] = '\0'; // Null-terminate the string

    return array;
}
