Link: 
https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency array to count the occurrences of each character in both strings. If the character frequencies match, the two strings are anagrams.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested a typical anagram and a case where the strings are not anagrams. Different string lengths cannot be anagrams.