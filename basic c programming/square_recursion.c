#include<stdio.h>

int square(int n,int i){
if(i<=2){
i++;
return n*square(n,i);
}
return 1;
}

void main(){
int num;
printf("Enter the number\n");
scanf("%d",&num);
int result=square(num,1);
printf("The square of number is %d",result);
}
