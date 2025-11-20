#include <stdio.h>

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

// typedef rectangle
// {
//     int length;
//     int width;
// };

int main()
{

    info infoBangunan = {{"Adi", 25},
                         {20, 10}};

    printf("%s berumur %d memiliki luas bangunan = %d\n", infoBangunan.pemilik.name, infoBangunan.pemilik.age, infoBangunan.luasBangungan.length * infoBangunan.luasBangungan.width);

    // struct rectangle kotak1 = {
    //     10, 5};

    // struct rectangle kotak1 = {
    //     10, 5};

    // person orang1 = {"Player 1", 20};

    // printf("%d\n", kotak1.length * kotak1.width);
    // printf("%s", orang1.name);

    return 0;
}