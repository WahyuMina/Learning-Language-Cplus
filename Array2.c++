#include <stdio.h>
#include <string.h>

int main()
{
    // // ASCII
    // printf("%d\n", 'a');
    // printf("%d\n", 'z');
    // printf("%d\n", 'A');
    // printf("%d\n", 'Z');

    // ------------------------------
    // a                            z
    // 97                          122

    char str[30];

    scanf("%[^\n]", str);
    getchar();

    int panjang = strlen(str);
    for (int i = 0; i < panjang; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] -= 32;
        }
    }
    printf("%s\n", strlwr(str));
    printf("%s", strupr(str));
}