#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    int i;
    int computer,user;
    printf("0 for stone,1 for paper , 2 for sissor \n");

    printf("Enter your choice \n");
    scanf("%d",&user);
    
    srand(time(0));
    int number=rand()%2+1;
    if (number<0)
    {
        computer = 0;
    }
    else if (number<1)
    {
        computer = 1;
    }
    else
    {
        computer = 2;
    }

    if (user == computer)
    {
        printf("Draw match! \n");
    }
    else if(user == 0 && computer == 2 || user == 1 && computer == 0 || user == 2 && computer == 1)
    {
        printf("I am win %d\n",user);
    }
    else{
        printf("Computer win %d ! \n",computer);

    }
    printf("Computer chose %d \n",computer);
return 0;
}