#include<stdio.h>
int main(){
int n, rem, sum;
printf("Enter the number\n");
scanf("%d",&n);
rem= n%10;
while(n>=10){
n=n/10;
}
sum=rem+n;
printf("the sum of first and last digit number is %d",sum);
}
