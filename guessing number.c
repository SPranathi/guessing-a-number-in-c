/**
Guessing Game
guessing a number between 0 and 20 in five tries
**/
#include<stdio.h>
#include<stdlib.h>
void main(){
    int randomnumber,guess,nguess;
    time_t t;
    srand(t);
    
    randomnumber = rand()%21; 
    printf("This is a guessing game \n I have chosen a number between 0 and 20 which you must guess\n");
    
    
    for (nguess=5;nguess>0;nguess--){
      printf("\nYou have %d tr%s left.",nguess,(nguess==1)?"y":"ies");    
      printf("\n Enter a guess:");
      scanf("%d",&guess);
      if (guess==randomnumber){
          printf("\ncongragulations.You guessed it!.\n");
          return;
      }
      else if(guess<0 || guess>20){
           printf("I said the number is between 0 and 20.\n ");
      }
      else if (guess>randomnumber){
          printf("sorry,%d is  wrong. My number is less than that .\n",guess);
      }
      else if (guess<randomnumber){
          printf("sorry,%d is  wrong. My number is greater than that .\n",guess);
      }
     
      
    }

   printf("You have had five tries and failed .The number was %d\n",randomnumber); 
}  
