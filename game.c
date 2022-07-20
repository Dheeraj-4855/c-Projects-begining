#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game(char comp,char you){

    // return 1 if you win else -1 on your lose and 0 on draw
    // 9 cases
    // rr pp ss
    // comp you
    // rp  pr
    // cr rc
    // cp ps

// draw condition
    if (you==comp)
    {
        return 0;
    }
    if(you=='r' && comp=='p'){
        return -1;
    }
    else if (you=='p' && comp=='r')
    {
        return 1;
    }
    if (you=='c' && comp=='r')  
    {
        return -1;
    }
    else if(you=='r' && comp=='c'){
        return 1;
    }
    if (you=='c' && comp=='p')
    {
        return 1;
    }
    else if(you=='p' && comp=='c')
    { 
        return -1;
    }
    
}
int main()
{
    char comp,you;
    // comp='r';
    srand(time(0));
    int number = rand() % 100 + 1;
    // generates number between 1to 100.
    //   printf("The number is %d\n",number);
    if (number<33)
    {
        comp='r';
    }
    else if (number>33 && number<66)
    {
        comp='s';
    }
    else{
        comp='p';
    }
    
    

    printf("Choose your weapon out of :r=(rock), p=(paper), s=(scisor)\n");
    scanf("%c",&you);
    printf("You choose %c and computer choose %c\n",you, comp);
    int result=game(you,comp);
    
    
    if (result==1)
    {
        printf("You win!!");
    }
    else if (result==0)
    {
        printf("Match draw!!");
    }
    else
    {
        printf("You loose!!");
    }
 return 0;
}
