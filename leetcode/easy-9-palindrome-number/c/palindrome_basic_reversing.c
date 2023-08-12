#include<stdio.h>

int isPalindrome(int x){
    int dup = x;
    int rev = 0;
    while(dup>0){
        rev = rev*10 + dup%10;
        printf("%d\n",rev);
        dup /= 10;
    } 
    printf("%d\n",rev);
    if(rev == x)
        return 1;
    else
        return 0;
}

int main(){
    if(isPalindrome(-121))
        printf("True");
    else    
        printf("False");
}