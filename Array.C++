#include <stdio.h>
#include <string.h>

int main()
{
    int listangka[20];
    char str[20][100];

    // str[1] = 'a';
    scanf("%s", str[0]);
    strcpy(str[0], "Halo World");
    printf("%s\n", str[0]);

    // listangka[0] = 1;
    // printf("%d\n", listangka[0]);
    // listangka[0] = 2;
    // printf("%d", listangka[0]);

    return 0;
}