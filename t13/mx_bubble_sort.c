int mx_strcmp(const char*, const char*);

int mx_bubble_sort(char **arr, int size)
{
    int swap = 0;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 1; j < size; j++)
        {
            if (mx_strcmp(arr[i], arr[j]) > 0)
            {
                char *buff = arr[j];
                arr[j] = arr[i];
                arr[i] = buff;
                swap++;
            }
        }
    }
    return swap;
}

