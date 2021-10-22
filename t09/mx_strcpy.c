char *mx_strcpy(char *dst, const char *src)
{
    int s = 0;
    for (; src[s] != '\0'; s++);

    if (s <= 0)
    {
        return dst;
    }

    for(int i = 0; src[i] != '\0'; i++)
    {
        dst[i] = src[i];
        dst[i + 1] = '\0';
    }

    return dst;
}

