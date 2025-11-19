#include <stdio.h>

int main()
{
    int matrix[3][3];
    int barispertama = 0;
    int bariskedua = 0;
    int barisketiga = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        barispertama += matrix[0][i];
    }

    printf("\nHasil tambah baris pertama : %d", barispertama);

    for (int i = 0; i < 3; i++)
    {
        bariskedua += matrix[1][i];
    }

    printf("\nHasil tambah baris kedua : %d", bariskedua);

    for (int i = 0; i < 3; i++)
    {
        barisketiga += matrix[2][i];
    }

    printf("\nHasil tambah baris kedua : %d", barisketiga);

    return 0;
}