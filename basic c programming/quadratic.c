#include<stdio.h>
#include<math.h>
int main(){
int a,b,c;
double d;
float e,f;

printf("enter the coefficient of x^2\n");
scanf("%d",&a);
printf("enter the coefficient of x\n");
scanf("%d",&b);
printf("enter the constant value\n");
scanf("%d",&c);
d= (b*b -4*a*c);
if(d<0){
    printf("Roots are complex number.\n");
    return 0;
}
e = ( -b + sqrt(d)) / (2* a);
f = ( -b - sqrt(d)) / (2* a);
if (e==f){
printf("the given equation is a  perfect square equation and it's required value of  is %f",e);
}
else{
printf("The required value of x are %f and %f",e,f);
}
return 0;
}
