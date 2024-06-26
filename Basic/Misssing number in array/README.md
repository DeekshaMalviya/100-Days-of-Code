# Missing Number in Array

## Problem Statement

Given an array of integers where elements are distinct and sorted in ascending order, find the missing number in the sequence from 1 to n. 

### Example:

![image](https://github.com/DeekshaMalviya/100-Days-of-Code/assets/132806772/248766dc-7446-4c67-967b-15332796e192)

![image](https://github.com/DeekshaMalviya/100-Days-of-Code/assets/132806772/60f7edb4-8bb2-4352-a7d4-60b5fb8a3201)



### Constraints:

- The array will contain at most \( n-1 \) elements, where \( n \) is the maximum number in the sequence.
- Elements are unique and sorted in ascending order.
- The missing number is guaranteed to be within the range of the sequence.

### Approach:

One common approach to solve this problem is to calculate the sum of all numbers from 1 to \( n \) using the formula \( \frac{{n \times (n + 1)}}{2} \), and then subtract the sum of the elements in the array from it. The result will be the missing number.

### Time Complexity:

The time complexity of this approach is \( O(n) \), where \( n \) is the length of the array.

