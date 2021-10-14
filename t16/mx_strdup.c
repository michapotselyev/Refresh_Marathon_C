#include <stdlib.h>

int mx_strlen(const char*);

char *mx_strcpy(char*, const char*);

char *mx_strnew(const int);

char *mx_strdup(const char *str)
{
    if (str == NULL) return NULL;
    char *src = mx_strnew(mx_strlen(str));
    mx_strcpy(src, str);
    return src;
}

