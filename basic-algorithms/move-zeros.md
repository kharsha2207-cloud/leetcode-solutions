Link:
 https://leetcode.com/problems/move-zeroes/

### Approach

I moved all non-zero elements toward the beginning of the array while maintaining their original order. The remaining positions at the end are filled with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested a typical array containing zeroes and an edge case where all elements are zero. The relative order of non-zero elements should remain unchanged.