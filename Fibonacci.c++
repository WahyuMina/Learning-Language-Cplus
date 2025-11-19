#include <stdio.h>

int fibonacci(int i)
{
    if (i == 0)
        return 0;
    if (i == 1)
        return 1;

    return fibonacci(i - 1) + fibonacci(i - 2);

    // if (i == 5)
    //     return;
    // fibonacci(i + 1);
    // printf("%d\n", i);
}

int main()
{
    int f = fibonacci(7);
    printf("%d", f);

    return 0;
}