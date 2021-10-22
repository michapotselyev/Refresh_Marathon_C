int mx_factorial_iter(int n)
{
    if (n < 0 || n > 12)
    {
        return 0;
    }

    if (n == 0)
    {
        return 1;
    }

    long long factr = 1;
    int i = 1;
    while (i <= n)
    {
        factr *= i;
        i++;
    }

    return factr;
}

