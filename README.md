# Leetcode-30DayChallenge
This repository will contain my solutions for the Leetcode - 30 Day Challenge

---

***Day 1*** :Given a non-empty array of integers, every element appears twice except for one. Find that single one.
Note : 
Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
Input : [2,2,1]
Output : 1

Input : [4,1,2,1,2]
Output : 4

Input : [1,1,2,2,3,3,9]
Output : 9


[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayChallenge/blob/master/Day1.c)

---


***Day 2*** :Write an algorithm to determine if a number n is "happy"
A happy number is  a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of it's digits, and repeat the process until the number equals 1(Where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers and process ends in 4 are not happy numbers.

Return true if n is a happy number, and false if not.

Input : 19

Output : True

Explanaton : 1<sup>2</sup>+9<sup>2</sup>=82

8<sup>2</sup>+2<sup>2</sup>=68

6<sup>2</sup>+8<sup>2</sup>=100

1<sup>2</sup>+0<sup>2</sup>+0<sup>2</sup>=1


[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayChallenge/blob/master/Day2.c)

---

***Day 3*** :Given an integer array, find the contiguous subarray(containing at least one number) which has the largest sum and return its sum
Input : [-2,1,-3,4,-1,2,1,-5,4]
Output : 6
Explanation : [4,-1,2,1] has the largest sum=6

[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayChallenge/blob/master/Day3.c)

---

***Day 4*** :Given an array, write a function to move all 0's to the end of it while maintaining the relativve order of the non-zero elements

Input : [0,1,0,3,12]
Output : [1,3,12,0,0]

[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayChallenge/blob/master/Day4.c)

---

***Day 9*** :Given two strings S and T,return if they are equal when both are typed into empty text editors. # means a backspace character.

Note that after backspacing an empty text, the text will continue empty.

Input : S="ab#c" , T="ab#c"
Output : True
Explanation : Both S and T become "ac"

Input : S="ab##" , T="c#d#"
Output : True
Explanation : Both S and T become ""

Input : S= "a##c", T="#a#c"
Output : True
Explanation : Both S and T become "c"

Input : S="######", T="ab#c"
Output: False
Explanation : S becomes empty while T becomes "ac"

Input S="a#c", T="b"
Output : False
Explanation : S becomes "c" while T becomes "b".

Note : S and T only contains lowercase letters and '#' character. 

[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayChallenge/blob/master/Day9.c)

---

***Day 15*** :Given an array nums of n integers where n>1, return an array output such that output[i] is equal to the product of all the elements of nums except nums[i].

Input : [1,2,3,4]
Output : [24,12,8,6]

Constraint : It's guaranteed that the product of the elements of any prefix or suffix of the array(including the whole array)fits in a 32 bit integer. You should solve this with constant space complexity(The output array does not count as extra space).

[Solution](https://github.com/Ratheshprabakar/Leetcode-30DayChallenge/blob/master/Day15.c)

---






```
Feel free to make PR :)
```
