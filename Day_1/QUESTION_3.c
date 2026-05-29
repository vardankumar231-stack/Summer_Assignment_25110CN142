//write a program to find factorial of a number

#include<stdio.h>
int main(){
    int i,n,fact=1;

    printf("enter the no");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        fact=fact*i;

    }

        printf("the factorial is %d",fact);
    

    return 0;
}