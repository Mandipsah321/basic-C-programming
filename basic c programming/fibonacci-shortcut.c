#include<stdio.h>
#include<math.h>
int n,a,b;

int main(){
printf("enter the number\n");
scanf("%d",&n);
a=(5*n*n)+4;
b=(5*n*n)-4;
float c = sqrt(a);
int i=c;
if(i==c){
    printf("entered number lies in fibonacci series");
    return 0;
}
float d = sqrt(b);
int j=d;
if (j==d){
    printf("entered number lies in fibonacci series");
    return 0;
}
printf("entered number doesnot lies in fibonacci series");
return 0;
}
