Link: https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets. Whenever a closing bracket is found, it is compared with the most recently stored opening bracket to check whether they match.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

I tested correctly matched brackets and mismatched brackets. The solution must also handle cases where a closing bracket appears without a corresponding opening bracket.