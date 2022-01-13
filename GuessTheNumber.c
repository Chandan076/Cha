#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
int number,guess,nguesses=1;
srand(time(0));
number = rand()%100 + 1;
//printf("%d\n",number);
do{
printf("Guess the number between 1-100\n");
scanf("%d",&guess);
if(guess<number)
{
printf("Enter larger number please\n");
}
else if(guess>number)
{
printf("Enter smaller number please\n");
}
else
{
printf("The number of attempts is %d\n",nguesses);
}
nguesses++;
}while(guess!=number);
return 0;
}