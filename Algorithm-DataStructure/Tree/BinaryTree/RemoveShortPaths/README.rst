去除长度小于K的从根到叶子结点的路径
==========================================================
给定一个二叉树和一个数字k，在所有从根到叶子结点的路径中，去掉那些长度小于k的。例如::

                    1
                   / \
                  2   3
                 / \   \
                4   5   6
               /       /
              7       8

树中有3条从根到叶子结点的路径：

- 1 => 2 => 4 => 7，长度为4
- 1 => 2 => 5，长度为3
- 1 => 3 => 6 => 8，长度为4

令k=4，有一条路径长度不足4，需要去除。去除之后的树::

                    1
                   / \
                  2   3
                 /     \
                4       6
               /       /
              7       8

需要注意，有2条路径共用1 => 2这段路径。只有2的两个孩子都被删除了，它才能被删除。

解答
----------------------------------------
考虑到结点的2个孩子都被删除后，它才能被删除。所以，我们可以用后序遍历，先处理结点的孩子们，再处理结点本身。
