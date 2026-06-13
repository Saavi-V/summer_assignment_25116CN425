#include<stdio.h>
int main(){
    int i,j;
    char ch;
    printf("Enter max alphabet(A-Z) term for base of triangle\n");
    scanf(" %c",&ch);
    for(i='A';i<=ch;i++){
        for(j='A';j<=i;j++){
            printf("%c",i);
        }
        printf("\n");
    }
    return 0;
}