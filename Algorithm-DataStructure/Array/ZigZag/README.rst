将数组转化为锯齿形(Zig-Zag)
==========================================
给定一个不含重复元素的数组，重新排列其元素，使得元素呈锯齿形排列，即a < b > c < d > e < f的形式。要求时间复杂度O(n)。


naive方法
-------------------------------
将数组排序，除了第一个元素外，将所有相邻元素交换位置。时间复杂度O(nlogn)。


冒泡法
-------------------------------
顺序扫描数组，记录每次我们需要的大小顺序。如果当前元素满足顺序，则什么都不做；如果不满足，则像冒泡排序一样，交换两个元素。
