#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main()
{
    int num, guess, nguesses = 1;
    srand(time(0));
    num = rand()%100 + 1;
  //  printf("The number is %d", num);
    do
    {
        printf("Guess number between 1 to 100 = ");
        scanf("%d", &guess);
        if(guess<num)
        {
            printf("Your number is lower\n");
        }
        else if(guess>num)
        {
            printf("Your number is Higher\n");
        }
        else
        {
            printf("Right! \nYou guessed in %d attempts \n", nguesses);
        }
        nguesses++;

    } while(guess!=num);
    getch();
    return 0;
}
