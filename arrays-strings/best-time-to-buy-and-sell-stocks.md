Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I kept track of the minimum price seen so far and calculated the profit for each later price. The maximum profit found during the traversal is returned.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested a typical price sequence and a single-price edge case. If there is no opportunity to make a profit, the answer is 0.