#include <stdio.h> //standar input output .header

int main()
{

	int angkabulat = 10;
	float angkakoma = 1.5f;
	char karakter = 'a';
	char string[50] = "Hello";

	scanf("%d", &angkabulat);
	printf("%d\n", angkabulat);

	scanf("%f", &angkakoma);
	printf("%.3f\n", angkakoma);

	getchar();
	scanf("%c", &karakter);
	printf("%c\n", karakter);

	scanf("%[^\n]", &string);
	getchar();
	printf("%s\n", string);
	printf("\nHello World!");

	scanf(""); // berasal dari libari include stdio.h

	return 0;
}