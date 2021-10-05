#include<stdio.h>
int main(){
int r; 
int rupee, paisa;
printf("enter the amount in paisa\n");
scanf("%d", &r);
rupee=r/100;
paisa = r%100;
printf("Your entered amount in rupee is %d and in paisa is %d", rupee, paisa);
return 0;
}
