#include<stdio.h>
int main(){
    char i,j,ch;
    printf("Enter max alphabet for base of triangle\n");
    scanf(" %c",&ch);
    for(i='A';i<=ch;i++){
        for(j='A';j<=i;j++){
            printf("%c\t",j);
        }
        printf("\n");
    }
    return 0;
}