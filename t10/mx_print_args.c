void mx_printstr(const char*);

void mx_printchar(char);

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }
}

