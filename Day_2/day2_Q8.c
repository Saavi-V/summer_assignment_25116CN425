#include<stdio.h>
int main(){  
    int num,num1,rem,sum=0;
    printf("Enter any number\n");
    scanf("%d",&num);
    num1=num;
    while(num>0){
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
    }
    if(num1==sum) printf("Number entered (%d) is a palindrome",num1);
    else printf("Number entered (%d) is not a palindrome",num1);
    return 0;
}