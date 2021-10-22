char *mx_strnew(const int);

int mx_strlen(const char*);

char *mx_strcpy(char*, const char*);

char *mx_strdup(const char *str)
{
    int size = mx_strlen(str);
    char *src = mx_strnew(size);
    mx_strcpy(src, str);
    return src;
}

