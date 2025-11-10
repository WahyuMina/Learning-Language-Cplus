#include <stdio.h>

int main()
{
    // SELECTION
    /*
        1.If, Else If, Else
        2.Switch Case
        3.Ternary If
    */

    // int angka = 4;
    // Kalau angka 0 maka print "nol", kalau angka ganil print "ganjil"
    // Kalau angka genap maka print "genap"
    // if (angka == 0)
    // {
    //     printf("nol");
    // }
    // else if (angka%2 == 1)
    // {
    //     printf("ganjil");
    // }
    // else
    // {
    //     printf("genap");
    // }

    int angka = 3;
    // Kondisi ? benar : salah
    printf("%s", (angka < 2 ? "Lebih kecil dari 2" : angka > 2 ? "Lebih besar dari 2"
                                                               : "2"));
    // SWITCH
    // int angka = 3;
    // switch (angka)
    // {
    // case 0:
    //     printf("nol");
    //     break;
    // case 1: // Angka == 1
    //     printf("satu");
    //     break;
    // case 5:
    //     printf("lima");
    //     break;
    // default:
    //     printf("selain nol satu dan lima");
    // }

    return 0;
}