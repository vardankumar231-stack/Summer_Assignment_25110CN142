// write a program to reverse a no

#include<stdio.h>
int main(){
    int n,i=0,remainder;

    printf("enter the number");
    scanf("%d",&n);

   if(n==0){
    printf("0");
    }
   else{
    while(n!=0){
        remainder= n % 10;
        i=i * 10 + remainder;
        n=n / 10;
		}
    printf("the reverse of no is %d ",i);

   } 
return 0;
}