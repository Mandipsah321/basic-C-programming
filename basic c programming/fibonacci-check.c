#include<stdio.h>
int main(){
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int a=1; 
    int b=1;
    int j=3;
    if (n==0){
            printf("The entered number lies in fibonacci series and the fibonacci term is 1");
            return 0;
             }
    for(int i=1;i<=n;i++){
        
             if (n==1){
            printf("The entered number lies in fibonacci series and the fibonacci terms are 2 and 3\n");
            return 0;
             }
       a=a+b;
       b=a+b;
       
       if (n==a){
            printf("The entered number lies in fibonacci series and the fibonacci term is %d",j+1);
            return 0;
    }
    if (n==b){
            printf("The entered number lies in fibonacci series and the fibonacci term is %d",j+2);
            return 0;
            
}
j=j+2;
}
printf("The entered number doesnot lie in fibonacci series");
return 0;
}
