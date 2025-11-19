#include <stdio.h>

int main()
{
    // Repetition / Looping
    // for, while, do while
    // break, continue

    // Repetition / Looping
    // for
    // for (int i = 1; i <= 10; i++) // i += 2)
    // {
    //     if (i == 5)
    //         break; // berhenti
    //     continue;  // lanjut
    //     printf("%d\n", i);
    // }
    // while
    // printf("While:\n");
    // int j = 1;
    // while (j <= 10) // while = Mengecek
    // {
    //     printf("%d\n", j++);

    // do while
    //     printf("dO while:\n");
    //     int k = 11;
    //     do // Jalanain dulu
    //     {
    //         printf("%d\n", k++);
    //     } while (k <= 10);
    // }

    // Nested loop
    int size = 10;
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
            {
                printf("*");
            }
            else
            {
                printf("");
            }
        }
        printf("\n");
    }
    return 0;
}