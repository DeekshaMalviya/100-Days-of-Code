# Equilibrium Point

Given an array arr of n non-negative numbers. The task is to find the first equilibrium point in an array. The equilibrium point in an array is an index (or position) such that the sum of all elements before that index is the same as the sum of elements after it.
Note: Return equilibrium point in 1-based indexing. Return -1 if no such point exists. 

Example 1:
Input: n = 5, arr[] = {1,3,5,2,2}
Output: 3 
Explanation: The equilibrium point is at position 3 as the sum of elements before it (1+3) = sum of elements after it (2+2). 

Example 2:
Input: n = 1, arr[] = {1}
Output: 1
Explanation: Since there's only one element hence it's only the equilibrium point.
