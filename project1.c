#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
int main()
{
    int num, guess, nguesses = 1;
    srand(time(0));
    num = rand()%100 + 1;
    // printf("Hi!\n");
    printf("Hello!\n");
    printf("The number is : %d", num);

    do
    {
        printf("Guess number between 1 to 100 = ");
        scanf("%d", &guess);
        if(guess<num)
        {
           printf("Your number is lodwer\n");
           printf("Your number is jayesh\n");
        }
        else if(guess>num)
        {
            printf("Your number is Higher\n");
        }
        else
        {
              printf("for demo");
            printf("Right! \nYou guessed in %d attempts \n", nguesses);
        }
        nguesses++;

    } while(guess!=num);
    getch();
    return 0;
}
