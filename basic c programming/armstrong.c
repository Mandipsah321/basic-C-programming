#include<stdio.h>
int armstrong(int n){
int cube=0;
while (n>0){
int rem = n%10;
cube= cube + (rem*rem*rem);
n=n/10;
}
return cube;
}
int main(){
int number;
printf("enter the number\n");
scanf("%d", &number);
int temp= number;
int arm = armstrong(number);
if(temp==arm){
printf("entered number is an armstrong");
}
else{
printf("entered number is not an armstrong");
}
}
