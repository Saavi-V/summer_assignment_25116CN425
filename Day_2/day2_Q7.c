#include<stdio.h>
int main(){  
    int num,rem,prod=1;
    printf("Enter any number\n");
    scanf("%d",&num);
    while(num>0){
        rem=num%10;
        prod=prod*rem;
        num=num/10;
    }
    printf("Product of digits of a number %d",prod);
    return 0;
}