#include <stdio.h>

int main()
{
    // Filebase
    // r -> read
    // w -> write
    // a -> append
    // r+ -> read, write
    // w+ -> read, write
    // a+ -> append, read
    // read, write, append

    // open, process, close

    char txt[200];
    FILE *fp;

    fp = fopen("data.txt", "a+");

    fprintf(fp, "123");
    rewind(fp);
    fprintf(fp, "%[^\n]", txt);
    printf("%s", txt);

    // untuk digunakan sebuah file data.txt bisa diakses karena tanpa fclose tidak bisa buka file txtnya.
    fclose(fp);

    return 0;
}