# Anagram-Groups
https://progcont.hu/progcont/100251/exercises.html?pid=200049
World-renowned Prof. A. N. Agram's current research deals with large anagram groups. He has just found a new application for his theory on the distribution of characters in English language texts. Given such a text, you are to find the largest anagram groups.

A text is a sequence of words. A word w is an anagram of a word v if and only if there is some permutation p of character positions that takes w to v. Then, w and v are in the same anagram group. The size of an anagram group is the number of words in that group. Find the 5 largest anagram groups.

Input Specification
The input contains words composed of lowercase alphabetic characters (one word in each line). It is terminated by end-of-file (EOF).

Output Specification
Output the 5 largest anagram groups. If there are less than 5 groups, output them all. Sort the groups by decreasing size. Break ties lexicographically by the lexicographically smallest element. For each group output, print its size and its member words (separate each word using a space). Sort the member words lexicographically and print equal words only once. See the sample output below for exact formatting.
