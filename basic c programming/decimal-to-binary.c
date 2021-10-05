#include<stdio.h>
int decimaltobinary(int n){
int rem=0;
int temp=0;
int i=1;
while(n>0){
rem = n%2;
n=n/2;
temp=temp+rem*i;
i=i*10;
}
return temp;
}
int main(){
int decimal;
printf("Enter the number in decimal\n");
scanf("%d",&decimal);
int binary= decimaltobinary(decimal);
printf("The binary number of %d is %d",decimal,binary);
}

