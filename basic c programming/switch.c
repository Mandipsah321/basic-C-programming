#include<stdio.h>
int main(){
int n;
int x;

int a=1;
while(a)
{
printf("Enter 0 to exit or any number to find its corresponding day: ");
scanf("%d\n",&n);
switch(n){
	case 0:
	{
	a=0;	
	break;
	}
	case 1:
	{
		printf("The day is sunday\n");
		break;
	}
	case 2 :
	{
		printf("The day is monday\n");
		break;
	}
	case 3 :
	{	
		printf("The day is Tuesday\n");
		break;
	}
	case 4:
	{
		printf("The day is wednesday\n");
		break;
	}
	case 5:
	{
		printf("The day is Thrusday\n");
		break;
	}
	case 6:
	{
		printf("The day is Friday\n");
		break;
	}
	case 7:
	{
		printf("The day is saturday\n");
		break;
	}
	default:
	{
		printf("entered value doesnot match\n");
		break;
	}
}
}
return 0;
}
