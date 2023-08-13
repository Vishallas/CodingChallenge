# 365 Days of Coding Challenge
Welcome to my 365 Days of Coding Challenge repository! 🚀

![Coding Challenge](https://media0.giphy.com/media/Ll22OhMLAlVDb8UQWe/giphy.gif)


# Overview

I've taken on the challenge to code every day for a year to enhance my skills, explore new technologies, and improve my problem-solving abilities. This repository serves as a log of my journey through the coding landscape.

# Table of Contents

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

:link: [leetcode link](https://leetcode.com/problems/two-sum/) 

#### Approach 1: Bruteforce :warning:
I used ***bruteforce*** method in C and Python to check all the elements pair, until the sum of the pairs equals the target value.

[Python Implementation](https://github.com/Vishallas/CodingChallenge/blob/main/leetcode/easy-1-two-sum/python/two_sum_bruteforce.py) <br>
 [C Implementation](https://github.com/Vishallas/CodingChallenge/blob/main/leetcode/easy-1-two-sum/c/two_sum_bruteforce.c)

#### Complexity :-

> Time Complexity: O(n<sup>2</sup>)<br>
> Space Complexity: O(n)

#### Approach 2: Hashtable :key:
I used dictionary ***hash-map*** in Python to store the array element one by one if the difference between the element and target not in the hash-map.

[Python Implementation](https://github.com/Vishallas/CodingChallenge/blob/main/leetcode/easy-1-two-sum/python/two_sum_hashtable.py)

#### Complexity :-
> Time Complexity: O(n)<br>
> Space Complexity: O(n)

### Problem-2: Palindrome number
---
    Given an integer x, return true if the given interger x is a palindrome and false otherwise.

:link: [leetcode link](https://leetcode.com/problems/palindrome-number/) 

#### Approach: Reverse Number :warning:
I used ***reverse number*** approach and then checks the equality between the given number and reversed number.

 [C Implementation](https://github.com/Vishallas/CodingChallenge/blob/main/leetcode/easy-9-palindrome-number/c/palindrome_basic_reversing.c)

#### Complexity :-

> Time Complexity: O(log<sub>10</sub>n)<br>
> Space Complexity: O(1)
