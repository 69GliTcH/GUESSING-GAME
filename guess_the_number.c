#include <stdio.h>
#include <stdlib.h> //to generate random number
#include <time.h>
int main()
{
    int num, guess, num_guess = 1, n, a;
    printf("WELCOME TO THE NUMBER GUESSING GAME\n\n"); //MADE BY SAKSHAM VERMA

    printf("Choose Difficulty\n");

    printf("1) EASY   : GUESS A NUMBER BETWEEN 1 AND 10\n\n");

    printf("2) MEDIUM : GUESS A NUMBER BETWEEN 1 AND 50\n\n");

    printf("3) HARD   : GUESS A NUMBER BETWEEN 1 AND 100\n\n");

    printf("Choose difficulty by entering 1, 2 or 3\n");
    scanf("%d", &a);
    if(a==1){
        n=10;
        }
        else if(a==2){
            n=50;
        }
        else if(a==3){
            n=100;
        }
        else{
            printf("!! INVALID INPUT !!");
        }

    srand(time(0));
    num = rand() % n + 1; //generates random num between 1 and n
                          // the loop shall be running until you guess the exact num
    printf("Guess a number between 1 and %d\n", n);
    
    do
    {
        scanf("%d", &guess);
        if (num > guess)
        {
            printf("Guess a higher number please :\n");
        }
        else if (guess > num)
        {
            printf("Guess a lower number please :\n");
        }
        else
        {
            printf("CORRECT\nThe number was %d\nYou guessed it in %d attempts.\n", num, num_guess);
        }
        num_guess++;
    } while (guess != num);

    return 0;
}