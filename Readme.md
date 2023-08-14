# 365 Days of Coding Challenge
Welcome to my 365 Days of Coding Challenge repository! 🚀

![Coding Challenge](https://media0.giphy.com/media/Ll22OhMLAlVDb8UQWe/giphy.gif)


# Overview

I've taken on the challenge to code every day for a year to enhance my skills, explore new technologies, and improve my problem-solving abilities. This repository serves as a log of my journey through the coding landscape.

# Table of Weeks

- [Week 1](#week-1)

## Week 1
### Problems 

1. [Two Sum](#problem-1-two-sum)
2. [Palindrome](#problem-2-palindrome-number)
3. [Contains Duplicate](#problem-two-sum)
4. [Palindrome linked list](#problem-two-sum)
5. [Valid anagram](#problem-two-sum)
6. [Max Elegance K-Length Subsequence](#problem-two-sum)


### Problem-1: Two Sum
---
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.


<div style="display: flex; justify-content: space-between;">
  <a href="https://leetcode.com/problems/two-sum/">Link :link:</a>
  <a href="#week-1">Return to Top :arrow_up:</a>
</div>

#### Approach: Brute Force 🛠️
I this approach I used ***Brute force*** method. I checks every combination of numbers and comparing with the target number.

* [Python Implementation](https://github.com/Vishallas/CodingChallenge/blob/main/leetcode/easy-1-two-sum/python/two_sum_bruteforce.py) <br>
 * [C Implementation](https://github.com/Vishallas/CodingChallenge/blob/main/leetcode/easy-1-two-sum/c/two_sum_bruteforce.c)

#### Complexity :-

> Time Complexity: O(n<sup>2</sup>)<br>
> Space Complexity: O(n)

#### Approach: Hash Map 🗺️
In this approach, I used a ***hash map***. I used the dictionary to store array elements such that the absence of the difference between a current element and the target as the key and the index of the element as value. If the presence of element is found in hash map, then the element's value in hash map and element index is returned. 

[Python Implementation](https://github.com/Vishallas/CodingChallenge/blob/main/leetcode/easy-1-two-sum/python/two_sum_hashtable.py)

#### Complexity :-
> Time Complexity: O(n)<br>
> Space Complexity: O(n)

### Problem-2: Palindrome number
---
Given an integer x, return true if the given interger x is a palindrome and false otherwise.

<div style="display: flex; justify-content: space-between;">
  <a href="https://leetcode.com/problems/palindrome-number/">Link :link:</a>
  <a href="#week-1">Return to Top :arrow_up:</a>
</div>

#### Approach: Reversed Number Technique 🔄

In this approach, I used the ***reversed number technique***. I reversed the digits of the given number and subsequently checked for equality between the original number and its reversed counterpart.

 [C Implementation](https://github.com/Vishallas/CodingChallenge/blob/main/leetcode/easy-9-palindrome-number/c/palindrome_basic_reversing.c)

#### Complexity :-

> Time Complexity: O(log<sub>10</sub>n)<br>
> Space Complexity: O(1)

### Problem-3: Contains Duplicate
---
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.


<div style="display: flex; justify-content: space-between;">
  <a href="https://leetcode.com/problems/contains-duplicate/">Link :link:</a>
  <a href="#week-1">Return to Top :arrow_up:</a>
</div>

#### Approach: Hashset 📌

In this approach, I used a ***hash set*** to  store characters from the string. By comparing the length of the hash set to the length of the given string, I determined whether all characters are unique. 

[Python Implementation](https://github.com/Vishallas/CodingChallenge/blob/main/leetcode/easy-217-contains-duplicate/python/contains_duplicate_sorting.py) <br>

#### Complexity :-
> Time Complexity: O(n)<br>
> Space Complexity: O(n)

### Problem-4: Palindrome Linked List
---
Given the head of a singly linked list, return true if it is a palindrome or false otherwise.


<div style="display: flex; justify-content: space-between;">
  <a href="https://leetcode.com/problems/palindrome-linked-list/">Link :link:</a>
  <a href="#week-1">Return to Top :arrow_up:</a>
</div>

#### Approach: Brute Force 🛠️

In this approach, I used the ***brute force*** method. I created a new linked list in reverse order of the given list, and then compared each element between the reversed list and the original list.

* [Python Implementation](https://github.com/Vishallas/CodingChallenge/blob/main/leetcode/easy-234-palindrome-linked-list/python/palindrome_link_list_bruteforce.py) <br>
 * [C Implementation](https://github.com/Vishallas/CodingChallenge/blob/main/leetcode/easy-234-palindrome-linked-list/c/palindrome_link_list_bruteforce.c)

#### Complexity :-

> Time Complexity: O(n)<br>
> Space Complexity: O(n)

#### Approach: divide and conquer 🎯
In this approach, I used divide and conquer strategy. I used this method by reversing half of the given linked list from the mid-point and then comparing the values of the node.

* [Python Implementation](https://github.com/Vishallas/CodingChallenge/blob/main/leetcode/easy-234-palindrome-linked-list/python/palindrome_link_list_half.py)
 * [C Implementation](https://github.com/Vishallas/CodingChallenge/blob/main/leetcode/easy-234-palindrome-linked-list/c/palindrome_link_list_half.c)

#### Complexity :-
> Time Complexity: O(n)<br>
> Space Complexity: O(1)

### Problem-5: Valid Anagram
---
Given two strings s and t, return true if t is an anagram of s, and false otherwise.


<div style="display: flex; justify-content: space-between;">
  <a href="https://leetcode.com/problems/valid-anagram/">Link :link:</a>
  <a href="#week-1">Return to Top :arrow_up:</a>
</div>

#### Approach: Sorting 🛠️

In this approach, I used the ***sorting*** function. I sorted a given given strings and and compared the sorted list and original.

[Python Implementation](https://github.com/Vishallas/CodingChallenge/blob/main/leetcode/easy-242-valid-anagram/python/valid_anagrom_sort.py)

#### Complexity :-

> Time Complexity: O(n log n)<br>
> Space Complexity: O(n)

#### Approach: Character Frequency 🎯
In this approach, I used Character Frequency Array strategy. In the array of size 26, the first string's character occurance will be incremented and the second string's occurance will be decremented. Then comparing array's element to zero. 

* [Python Implementation](https://github.com/Vishallas/CodingChallenge/blob/main/leetcode/easy-242-valid-anagram/python/valid_anagram_single_arr.py)
 * [C Implementation](https://github.com/Vishallas/CodingChallenge/blob/main/leetcode/easy-242-valid-anagram/c/valid_anagram_single_array.c)

#### Complexity :-
> Time Complexity: O(n)<br>
> Space Complexity: O(1)