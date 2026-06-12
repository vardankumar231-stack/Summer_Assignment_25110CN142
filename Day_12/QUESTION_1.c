//Write a program to Write function for palindrome.

#include <stdio.h>

int palindrome(int n) {
    int temp = n, rev = 0;

    while(temp > 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }

    return (rev == n);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(palindrome(n))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}