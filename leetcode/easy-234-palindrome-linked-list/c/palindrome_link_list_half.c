#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

void display(struct ListNode* prev){
    while(prev!=NULL){
        printf("%d ",prev->val);
        prev=prev->next;
    }
    printf("\n");
}

struct ListNode* splitAndRev(struct ListNode* head){
    struct ListNode *cur=head, *next=head, *prev=NULL;
    while(next!=NULL && next->next!=NULL){
        cur = cur->next;
        next = next->next->next;
    }
    while(cur!=NULL){
        next=cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}
bool isPalindrome(struct ListNode* head){
    struct ListNode* mid = splitAndRev(head);
    while(mid!= NULL && head!=NULL){
        if(mid->val!=head->val){
            return false;
        }
        mid=mid->next;
        head=head->next;
    }
    return true;
}

void createLl(struct ListNode* head){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        scanf("%d",&head->val);
        head->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        head = head->next;
    }
    scanf("%d",&head->val);
}

int main(){
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    createLl(head);
    if(isPalindrome(head))
        printf("True");
    else    
        printf("False");
}