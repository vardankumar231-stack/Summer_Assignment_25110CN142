//Write a program to print multiplication table of a given number

#include<stdio.h>
int main(){
    int i,n;

    printf("enter the no");
    scanf("%d",&n);
    
     printf("the multiplication table is\n");

    for(i=1;i<=10;i++){
   
    printf(" %d*%d=%d\n",n,i,n*i);
    
    
}
    return 0;
}