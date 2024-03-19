Intuition
By Sliding window approach

Approach
original array[] = {4,3,2,6}
F1(original array) = 40 + 31 + 22 + 63

upon 1 rotation = {6,4,3,2}
F2 = 60 + 41 + 32 + 23

What do we observe between F1 AND F2
i) We observe that we multiply each element of original array (except the last one) with one more than the previous time.

Earlier 40 + 31 + 22 + 63
Now 60 + 41 + 32 + 23

How we get from earlier to now
( 40 + 31 + 22 + 36 ) + (4+3+2+6) - 6*4 = now
now = earlier + sum - (last element * n)
where
n = size of array here n = 4
sum = sum of original array elements.

Complexity
Time complexity: O(n)
Space complexity: O(1)
