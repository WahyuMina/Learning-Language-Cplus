#include <stdio.h>
#include <conio.h>

int main()
{
    char map[][6] = {
        "*****",
        "*****",
        "*****",
        "*****",
        "*****",
    };

    int playerX = 0,
        playerY = 0;
    char player = 'P';
    char input;

    while (true)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (playerX == j && playerY == i)
                {
                    printf("%c", player);
                }
                else
                {
                    printf("*");
                }
            }
            printf("\n");
        }
        scanf("%c", &input);
        getchar();
        // w -> atas
        // a -> kiri
        // s -> bawah
        // d -> kanan
        switch (input)
        {
        case 'w':
            playerY -= 1;
            break;
        case 'a':
            playerX -= 1;
            break;
        case 's':
            playerY += 1;
            break;
        case 'd':
            playerX += 1;
            break;
        }
    }
}
