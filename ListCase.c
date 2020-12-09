#include <stdio.h>
#include <stdlib.h>

/**
案例分析与实现
稀疏多项式的运算
A(x)=7+3x+9x(8)+5x(17)
B(x)=8x+22x(7)-9x(8)
1. 创建A,B两个链表，空表C
2. 获取A,B表长
3. 遍历表长度大的链表得到结点elem_A(B)，查找B(A)中是否存在幂数和elem_A(B)相同的值
4. 如果存在合并系数后插入表C
5. 如果不存在插入表C
*/