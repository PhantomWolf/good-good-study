17. Letter Combinations of a Phone Number 
=======================================================
Given a digit string, return all possible letter combinations that the number could represent.

A mapping of digit to letters (just like on the telephone buttons) is given below::

    1           2(abc)      3(def)
    4(ghi)      5(jkl)      6(mno)
    7(pqrs)     8(tuv)      9(wxyz)
    *           0           #

Input:Digit string "23"
Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].

Note:
    Although the above answer is in lexicographical order, your answer could be in any order you want. 

分析
--------------------------
将所有可能的分支画出来，会得到一棵三叉树。例如对于输入"23"::

                    ROOT
                 /    |    \
                a     b     c
              / | \ / | \ / | \
              d e f d e f d e f

对树进行深度优先遍历，就可以得到所有可能的字符串组合
