Link:
 https://leetcode.com/problems/binary-search/

### Approach

I used two pointers representing the left and right boundaries of the search range. The middle element is checked and the search range is reduced by half after every comparison.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

The input array must be sorted for binary search to work correctly. I tested a case where the target exists and a case where the target is not present.