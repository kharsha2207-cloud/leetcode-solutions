Link: https://leetcode.com/problems/reverse-linked-list/

### Approach

I used three pointers: previous, current, and next. The next pointer stores the next node, the current node is linked to the previous node, and then the pointers are moved forward.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested a normal linked list and considered edge cases such as an empty list and a single-node list. These edge cases should remain unchanged after reversal.