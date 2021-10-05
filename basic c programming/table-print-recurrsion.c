#include<stdio.h>
void tableprint(int number,int i){
if(i<=10){
printf("%d * %d =%d\n",number,i,number*i);
tableprint(number,++i);
}
}

int main()
{
int num;
printf("Enter a number: ");
scanf("%d",&num);
tableprint(num,1);
return 0;
}
