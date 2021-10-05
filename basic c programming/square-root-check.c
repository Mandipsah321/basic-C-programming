#include<stdio.h>
#include<math.h>
int n;

int main(){
printf("enter the number\n");
scanf("%d",&n);
float f = sqrt(n);
int k =f;
if(k==f ){
printf("entered number is a perfect square number");

}
else{
printf("entered number is not a perfect square number");
}
return 0;
}
