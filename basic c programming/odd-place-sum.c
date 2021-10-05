#include<stdio.h>
int sumofodd(int a){
int rem;
int result=0;
while(a){
	rem=a%10;;
	if(rem%2==1){
		result=result+rem;
	}
	a=a/100;
	}

return result;
}
int main (){
int n;
int temp=0;
printf("enter the number\n");
scanf("%d",&n);
temp=sumofodd(n);
printf("The sum of odd digits which lie in odd place is %d",temp);
}
