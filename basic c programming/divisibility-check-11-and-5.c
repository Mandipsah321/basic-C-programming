#include<stdio.h>
int main(){
int n;
printf("Enter the number\n");
scanf("%d", &n);
if (n%5==0 && n%11==0){
printf("The entered number is divisible by both 11 and 5"); 
}
if (n%5==0 && n%11!=0){
printf("The entered number is only divisible by 5 and not by 11");
}
if (n%5!=0 && n%11==0){
printf("The entered number is only divisible by 11 and not by 5");
} 
if (n%5!=0 && n%11!=0){
printf("The entered number is neither divisible by 5 nor by 11");
}
return 0;
}
