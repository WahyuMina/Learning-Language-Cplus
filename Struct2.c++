#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct rectangle
{
    int length;
    int width;
};

struct person
{
    char name[200];
    int age;
};

struct info
{
    person pemilik;
    rectangle luasBangungan;
};

info infoBangungan[100];
int banyakBangunan = 0;

info tambahBangunan()
{
    char name[200];
    int age, length, width;

    printf("Input Nama Pemilik : ");
    scanf("%s", name);
    getchar();

    printf("Input Umur Pemilik : ");
    scanf("%d", &age);
    getchar();

    printf("Input Lebar Bangunan : ");
    scanf("%d", &width);
    getchar();

    printf("Input Panjang Bangunan : ");
    scanf("%d", &length);
    getchar();

    info infoBaru = {{"", age}, {length, width}};
    strcpy(infoBaru.pemilik.name, name);

    return infoBaru;
}

void lihatBangunan()
{
    for (int i = 0; i < banyakBangunan; i++)
    {
        info bangunan = infoBangungan[i];
        printf("%s berumur %d memiliki luas bangunan %d\n", bangunan.pemilik.name, bangunan.pemilik.age, bangunan.luasBangungan.length * bangunan.luasBangungan.width);
    }
}

// typedef rectangle
// {
//     int length;
//     int width;
// };

int main()
{
    int input = 0;
    do
    {
        system("cls");
        printf("1. Tambah Bangunan\n");
        printf("2. Lihat Bangunan\n");
        printf("3. Exit\n");
        scanf("%d", &input);
        getchar();
        switch (input)
        {
        case 1:
            infoBangungan[banyakBangunan++] = tambahBangunan();
            break;
        case 2:
            lihatBangunan();
            getchar();
            break;
        };
    } while (input != 3);

    return 0;
}