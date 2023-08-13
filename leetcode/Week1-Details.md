# Week 1 Coding Challenge Details

## Problem

During the first week of my 365 Days of Coding Challenge, I tackled a fascinating problem: "Reverse a String."

## Approach

I decided to approach this problem using a two-pointer technique. By having one pointer at the start of the string and another at the end, I iterated through the string, swapping characters to achieve the reversal.

### Code Snippet

```python
def reverse_string(s):
    left, right = 0, len(s) - 1
    while left < right:
        s[left], s[right] = s[right], s[left]
        left += 1
        right -= 1

my_string = list("Hello, World!")
reverse_string(my_string)
print("".join(my_string))  # Output: "!dlroW ,olleH"
