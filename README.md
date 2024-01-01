# Day 1

## Q1. Find Missing And Repeating
### Brute Force: 
Store the element into an another array. If count of any index is zero then that element is Missing and if count of any index element is 2 then that element is Repeating.
#### T.C: O(N)
#### S.C: O(N)

### Optimised Approach
Firstly encode the elements present in the array with the formula:  
arr[arr[i] % (n+1) - 1] += n+1.
Then iterate over array, if arr[i] > 2*(n+1) then (i+1)th element is Repeating and if arr[i] < n+1 then (i+1)th element is Missing.
#### T.C: O(N)
#### S.C: O(1)

## Q2 Following A Number Pattern
### Brute Force:
Use a stack to push the elements. If I comes then pop that element and append to ans. After that run a loop till stack not empty.
and pop the remaining element and append it to answer
#### T.C: O(n)
#### S.C O(n)

### Optimised Approach:
Use two pointer to keep track till s[i] == s[j] && s[i] == 'D'.
After that reverse the element from i to j and that's it.
#### T.C: O(n)
#### S.C: O(1)