#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isAnagram(char s[], char t[]){
    int i=0;
    int counter[26];
    for(;i<26;i++){
        counter[i]=0;
    }
    for(i = 0;s[i]!='\0';i++){
        counter[(int)s[i]-(int)'a']+=1;
    }
    for(i =0;t[i]!='\0';i++){
        counter[(int)t[i]-(int)'a']-=1;
    }
    for(i=0;i<26;i++){
        if(counter[i]!=0)
            return false;
    }
    return true;
}

int main(){
    char s[] = {'a','n','a','g','r','a','m','\0'};
    char t[] = {'n','a','g','a','r','a','m','\0'};
    if(isAnagram(s,t))
        printf("Anagram");
    else  
        printf("Not an Anagram");
}