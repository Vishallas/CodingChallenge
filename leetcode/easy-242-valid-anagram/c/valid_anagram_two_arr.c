#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool isAnagram(char s[], char t[]){
    int i=0,j=0;
    int counter1[26],counter2[26];
    for(;i<26;i++){
        counter1[i]=0;
    }
    for(;j<26;j++)
        counter2[j]=0;
    for(i = 0;s[i]!='\0';i++){
        counter1[(int)s[i]-(int)'a']+=1;
    }
    for(j=0;t[j]!='\0';j++){
        counter2[(int)t[j]-(int)'a']+=1;
    }
    for(i=0;i<26;i++){
        if(counter1[i]!=counter2[i])
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