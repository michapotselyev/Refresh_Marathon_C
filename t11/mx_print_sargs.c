int mx_strcmp(const char*, const char*);

void mx_printstr(const char*);

void mx_printchar(char);

int main(int argc, char *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        for (int j = 1; j < argc; j++)
        {
            if (mx_strcmp(argv[j], argv[i]) > 0)
            {
                char *buff = argv[j];
                argv[j] = argv[i];
                argv[i] = buff;
            }
        }
    }

    for(int i = 1; i < argc; i++)
    {
        mx_printstr(argv[i]);
        mx_printchar('\n');
    }

    return 0;
}

