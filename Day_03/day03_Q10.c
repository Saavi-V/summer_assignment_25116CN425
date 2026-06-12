#include<stdio.h>
int main(){
    int min,max,num,i;
    printf("Enter range\n\n");
    printf("Enter minimum no\n");
    scanf("%d",&min);
    printf("Enter maximum no\n");
    scanf("%d",&max);
    printf("Prime numbers in given range are\n");
    
    for(num=min; num<=max ; num++){
           for(i=2;i<num;i++){
               if(num%i==0) break;
           }
           if(i==num)
                printf("%d\n",num);
                  
    } 
    return 0;
}