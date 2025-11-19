#include <stdio.h>

int main()
{
    // Pointer
    int a = 0;
    int *p;
    int **p2;
    p = &a;
    p2 = &p;

    printf("%d\n", &a);
    printf("%d\n", &p);
    printf("%d\n", *p2);

    return 0;
}