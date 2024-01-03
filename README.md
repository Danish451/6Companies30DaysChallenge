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

## Q2. Following A Number Pattern
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

# Day 2
## Q3. Run Length Encoding

### Approach: 
Use a count variable and iterate over the string. Increment the count variable till two adjacent character is same. As soon as they differ append the character and their count to the ans string and reset the count to 1

#### T.C: O(n)
#### S.C: O(1)

## Q4.High-Access Employees

### Approach
We store the time of each emplyoee in a map.
Key will be employee and value will be vector containing their access time.
Now sort the value (vector) of each key of map.
If difference of 2nd index and 0th index < 100 then it will include in the final ans

#### T.C: O(n) + O(nlogn) = O(nlog n)
#### S.C O(n)

# Day 3
## Q4. Combination Sum III

### Approach


## Q5. Letter Combinations of a Phone Number

### Approach
