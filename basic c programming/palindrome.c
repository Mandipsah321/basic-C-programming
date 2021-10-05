##include<stdio.h>
void palindrome(int a){
int rev=0;
int temp=a;
while(a>0){
int rem = a%10;
rev= rev*10+rem;
a =a/10;
}
if (temp==rev){
printf("Entered number is a palindrome");
}
else{
printf("entered number is not a palindrome");
}

}
int main(){
int n;
printf("enter the number\n");
scanf("%d", &n);
palindrome(n);
return 0;
}
