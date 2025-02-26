#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
   int random,guess;
   int count=0;
   srand(time(NULL));
    printf("Welcome to the Game of Guessing\n");
    random=rand() % 100 + 1;
    
    do
    {
        printf("Please Enter your Guess between(1 to 100):");
        scanf("%d",&guess);
        count++;

        if(guess<random){
            printf("Guess a Larger number..\n");
        }
        else if(guess>random && guess<=100){
            printf("Guess a Smaller number..\n");
        }
        else if(guess>100){
            printf("You have enter the number which is out of range (1 to 100)\n");
            
        }
        else{
            printf("Congratulation!!! You have Successfully Guessed the number in %d attempt.\n",count);
            printf("Developed by - Raunak Godiyal");

        }
    } while (guess!=random);
}