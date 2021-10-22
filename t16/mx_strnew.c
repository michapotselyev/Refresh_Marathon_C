#include <stdlib.h>

char *mx_strnew(const int size)
{
    if (size < 0)
    {
        return NULL;
    }

    char *str;
    
    if (size == 0)
    {
        str = (char *)malloc(17);
    }

    else
    {
        str = (char *)malloc(size + 1);
    }
    

    for (int i = 0; i < size; i++)
    {
        str[i] = '\0';
    }

    return str;
}

