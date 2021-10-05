#include<stdio.h>
void armstrong(int a){
    int j=0;
    printf("The number which lies from 1 to 1000 and is armstrong are\n ");
for(int i = a; i<=1000; i++){
int cube=0;
int rem =0;
int p=i;
while(p>0){
rem=p%10;
cube= (rem*rem*rem)+cube;
p=p/10;
}
if (i==cube){
printf(" %d\n", i );
j=j+1;
}
}
if (j==0){
    printf("such number doesnot exist");
}
}
int main(){
armstrong(1);
}
