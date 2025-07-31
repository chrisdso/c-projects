#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){
      int random, guess;
      int no_of_guess=0;
      srand(time(NULL));
        printf("Welcome to the game of guessing!\n");
     random = rand() % 100 + 1;
        
        do{
      printf("\nPlease enter your guess number(0-100):");
      scanf("%d",&guess);
      no_of_guess++;

      if(guess<random){
        printf("Guess a larger number.\n");
      }else if(guess>random){
        printf("Guess a smaller nummber.\n");
      }else{
        printf("Congratulations!! You have successfully guessed the number in %d attempts.\n", no_of_guess);
      }
        }while(guess != random);
     
        printf("Bye Bye! Thanks for playing\n");
        printf("Developed by:Chris Dsouza\n");
        return 0;
    }