#include<stdio.h>
int main(){
    int term,a=0,b=1,c,i;
    printf("Enter term at which you need fibonacci value\n");
    scanf("%d",&term);
    for(i=0;i<term-2;i++){
        c=a+b;
        a=b;
        b=c;
    }
    printf("The Fibonacci no at given term is %d",c);
    return 0;
}