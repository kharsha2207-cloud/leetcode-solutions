Link:
 https://leetcode.com/problems/longest-common-prefix/

### Approach

I compared characters at the same position across all strings. The comparison stops when a mismatch is found, and the characters before the mismatch form the longest common prefix.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

I tested strings with a common prefix and strings with no common prefix. When there is no common prefix, the result is an empty string.