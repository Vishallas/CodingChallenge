from typing import *

# Definition for singly-linked list.

class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        # Find the middle node
        slow=tmp=head
        while(tmp!=None and tmp.next!=None):
            slow=slow.next
            tmp=tmp.next.next
        
        # Reversing half of the list
        prev=None
        while(slow!=None):
            tmp=slow.next
            slow.next=prev
            prev=slow
            slow=tmp

        # Checking the both half are equal or not
        while(prev!=None and head!=None):
            if prev.val != head.val:
                return False
            prev=prev.next
            head=head.next
        return True
        