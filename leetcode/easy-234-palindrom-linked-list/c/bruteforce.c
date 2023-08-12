#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/**
 * Definition for singly-linked list.
 **/
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
struct ListNode* reverse(struct ListNode* head){
    struct ListNode* revHead = (struct ListNode*)malloc(sizeof(struct ListNode)), *prev=NULL, *cur=head;
    while(cur!=NULL){
        revHead->next = prev;
        revHead->val = cur->val;
        cur = cur->next;
        prev = revHead;
        revHead=(struct ListNode*)malloc(sizeof(struct ListNode));
    }
    revHead=prev;
    return revHead;
}
bool isPalindrome(struct ListNode* head){
    struct ListNode* rev = reverse(head);
    while (rev!= NULL && head!=NULL){
        if (rev->val != head->val){
            free(rev);
            free(head);
            return false;
        }
        rev=rev->next;
        head=head->next;
    }
    free(rev);
    free(head);
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