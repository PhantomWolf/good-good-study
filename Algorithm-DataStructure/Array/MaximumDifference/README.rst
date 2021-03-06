最大的差
=====================================
给定一个长度为n的数组，求出任意两个元素的差中的最大值，要求较大的数出现在较小数的后边。

例如::

    [2, 3, 10, 6, 4, 8, 1]

差最大的两个元素是2与10，结果为8。


方法1
---------------------------
顺序扫描数组，设置变量curr_min，跟踪之前扫描过的元素中最小的一个；设置变量curr_diff，表示当前元素减去curr_min的值；设置变量max_diff，跟踪当前遇到过的curr_diff中的最大值。搞定。时间复杂度O(n)


方法2
---------------------------
计算所有相邻元素的差(用右边的数去减左边的)，存入辅助数组diff[]，其长度为n-1。也就是说，如果给定的数组为::

    [a, b, c, d]

那么diff[]就是::

    [b-a, c-b, d-c]

可知diff[0] + diff[1] = c - a。任意两个元素的差，都可以表示为diff[]的某个子数组中所有元素的和。问题转化为，找处diff[]中一个子数组，使其元素总和为所有子数组中最大的，返回这个最大值，即subarray sum问题。时间复杂度O(n)。

算法还可以进一步优化。观察subarray_sum.c:maximum_difference1可以发现，diff[]中的元素生成后，被顺序访问，且只访问一次。我们根本就不需要一个diff[]数组，把两个循环合并，每次计算本次循环所需的diff值即可。
