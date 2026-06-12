#include<stdio.h>
int main(){
    int a,b,max,min,i,hcf;
    printf("Enter first and second number\n");
    scanf("%d%d",&a,&b);
    max = a>b ? a:b ;
    min = a<b ? a:b ;
    for(i=1 ; i<=min ; i++){
           if(min%i ==0 && max%i==0)
           hcf=i;
    }
    printf("HCF is %d",hcf);
    return 0;
}