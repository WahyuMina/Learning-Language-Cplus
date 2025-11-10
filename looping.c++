#include <stdio.h>

int main()
{
    // Repetition / Looping
    // for, while, do while
    // break, continue

    // for (int i = 1; i <= 10; i++) // i += 2)
    // {
    //     if (i == 5)
    //         break; // berhenti
    //     continue;  // lanjut
    //     printf("%d\n", i);
    // }
    printf("While:\n");
    int j = 1;
    while (j <= 10) // while = Mengecek
    {
        printf("%d\n", j++);

        printf("dO while:\n");
        int k = 11;
        do // Jalanain dulu
        {
            printf("%d\n", k++);
        } while (k <= 10);
    }
