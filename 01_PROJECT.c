#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    // generates number between 1to 100.
    //   printf("The number is %d\n",number);
    do
    {
        printf("Guess The number between 1 to 100 is : ");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Wow! , You guessed the number in only %d attempts\n", nguess);
        }
        nguess++;
    } while (guess != number);

    return 0;
}