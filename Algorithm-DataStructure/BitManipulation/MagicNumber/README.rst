Find nth Magic Number寻找第n个魔法数字
================================================
魔法数字被定义为5的幂，或者若干5的幂之和。前几个魔法数字为：5，25，30(5 + 25)，125，130(125 + 5)，...

写一个函数，求第n个魔法数字。


思路
------------------------------------
我们把魔法数字拆开写::

    5   = 1 * 5^1
    25  = 1 * 5^2 + 0 * 5^1
    30  = 1 * 5^2 + 1 * 5^1
    125 = 1 * 5^3 + 0 * 5^2 + 0 * 5^1
    130 = 1 * 5^3 + 0 * 5^2 + 1 * 5^1

观察后可以发现，魔法数字可以写成二进制形式::

    5   =>  1   => 1
    25  =>  10  => 2
    30  =>  11  => 3
    125 =>  100 => 4
    130 =>  101 => 5

所以我们可以用普通的整数来生成这些魔法数字。
