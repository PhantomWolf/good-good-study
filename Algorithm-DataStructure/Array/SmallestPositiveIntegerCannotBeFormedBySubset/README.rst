Minimum number that cannot be formed by any subset of an array
============================================================================
给定一个只含有正整数增序排序的数组，找出最小的一个正整数，使得它不能被写为该数组的任意子集的元素的和。要求时间复杂度O(n)。

例如对于数组{1, 3, 6, 10, 11, 15}，结果应为2；对于{1, 1, 1, 1}，结果为5；对于{1, 2, 3, 4, 5, 6}，结果为22。


思路
----------------------------------
对于数组{arr[0], arr[1], arr[2], ..., arr[i], arr[i+1], ...}，什么样的数无法写成数组中元素的和呢？满足以下条件的数k无法被写为数组中元素的和::

    arr[0] + arr[1] + ... + arr[i] < k < arr[i+1]

这种情况下，即使将arr[0..i]的所有元素都加起来，也不如k大，元素不能重复使用，所以k无法写成arr[0..i]的元素和；arr[i+1]及其以后的数比k大，k也无法写成arr[i+1]及其以后元素的和。综上，k无法写成arr[]的任意子集中有元素的和的形式。问题就是要我们找最小的k。

可知，当arr[i+1] > 1 + (arr[0] + arr[1] + ... + arr[i])时，1 + (arr[0] + arr[1] + ... + arr[i])就是满足条件的最小的k。
