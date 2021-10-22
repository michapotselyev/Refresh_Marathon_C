#include <unistd.h>

void mx_printchar(char);

void mx_print_alphabet(void)
{
    int tmp = 65;
    int ch = 1;

    while (tmp <= 90)
    {
        if (ch == 1)
        {
            mx_printchar(tmp);
            tmp++;
            ch = 2;
        }
        else
        {
            mx_printchar(tmp + 32);
            tmp++;
            ch = 1;
        }
    }

    write(1, "\n", 1);
}

