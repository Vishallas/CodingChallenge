from typing import *

# Definition for singly-linked list.

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        r_head=prv=nxt=None
        cur=head
        while(cur!=None):
            r_head = ListNode(cur.val)
            r_head.next=prv
            prv=r_head
            cur=cur.next
        
        while(r_head!=None and head!=None):
            if(r_head.val != head.val):
                return False
            r_head=r_head.next
            head=head.next
        return True