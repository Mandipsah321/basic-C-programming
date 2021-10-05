#include<stdio.h>
int main(){
int n;
 int a=0;
 int rem;
printf("Enter the number\n");
scanf("%d", &n);
while (n!=0){
rem=n%10;
n=n/10;
a=a+rem;
}
printf("The sum of the digits of number is %d",a);
return 0;
}

