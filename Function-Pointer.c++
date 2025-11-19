#include <stdio.h>

// Function
void printHelloWorld()
{
    printf("Hello World");
}
// Function
int getNumber()
{
    //.....
    return 5;
}

// Function
int sum(int *first, int *second)
{
    *first = 4;
    // printf("Alamat = %d\n", first);
    int total = *first + *second;
    return total;
}

int main()
{
    // Pointer
    // int a = 0;
    // int *p;
    // int **p2;
    // p = &a;
    // p2 = &p;

    // printf("%d\n", &a);
    // printf("%d\n", &p);
    // printf("%d\n", *p2);

    // Passing by value
    // Passing by reference

    // printHelloWorld();
    int a = getNumber();
    printf("%d\n", a);
    int first = 5;
    int second = 3;
    int hasilsum1 = (first + second);
    // int hasilsum = sum(getNumber(), 5);
    int hasilsum = sum(&first, &second);
    printf("%d\n", hasilsum1);
    printf("%d", hasilsum);
    printf("%d", first);

    return 0;
}