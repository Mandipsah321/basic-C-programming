#include<stdio.h>
int happy(int a){
int rem=0;
int temp;
int sum=0;
while(a>0){
rem =a%10;
sum= sum +(rem*rem);
a=a/10;
}
if (sum>9){
temp=happy(sum);
}
if(sum<10){
return sum;
}
}
int main(){
int n;
int result;
printf("Enter any number\n");
scanf("%d",&n);
result=happy(n);
if (result==1){
printf("The entered number is a happy number");
}
else{
printf("The entered number is not a happy number");
}
return 0;
}
