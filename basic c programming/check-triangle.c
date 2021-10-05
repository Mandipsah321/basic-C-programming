#include<stdio.h>
void checktriangle(int i, int j, int k){
if(i+j>=k && j+k>=i && k+i>=j){
printf("The triangle of such side is possible" );
}
else {
printf("The triangle of such side is not possible");
}
}

int main(){
int a,b,c;
printf("enter the length of first side\n");
scanf("%d",&a);
printf("enter the length of second side\n");
scanf("%d",&b);
printf("enter the length of third side\n");
scanf("%d",&c);
checktriangle(a,b,c);
return 0;
}
