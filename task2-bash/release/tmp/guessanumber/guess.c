#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int compNumber = 0;

void generateRandom()
{
	srand(time(0));
	compNumber = rand()%10;
}

int main()
{
    int guestNumber;
    printf("Welcome to Guess a number!\nEnter your number (0-9):");
    scanf("%d", &guestNumber);
    generateRandom();

    if(compNumber==guestNumber)
    {
        printf("You win!\n");
        return 0;
    }
    else
    {
        printf("You loose!\n");
        return 1;
    }
}