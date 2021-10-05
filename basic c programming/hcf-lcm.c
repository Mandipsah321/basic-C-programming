#include<stdio.h>
int hcflcm(int a , int b){
int hcf;
for(int i=a; i>=1;i--){
if(a%i==0  && b%i==0){
hcf=i;
return hcf;
}
}

}
int main(){
int p,q;
int result;
int lcm;
printf("enter the first number\n");
scanf("%d",&p);
printf("enter the second number\n");
scanf("%d",&q);
result =hcflcm(p,q);
lcm=(p*q)/result;
printf("The hcf of entered number is %d\n",result);
printf("The lcm of entered number is %d",lcm);
}
