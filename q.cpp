/*******************************************************************
 *  Copyright (C) 2016 PeanutWine Ethan - 1501680@stu.neu.edu.cn
 *  All rights reserved. 
 *
 *  文件名称: q.cpp
 *  简要描述: 整数划分问题
 *
 *  创建日期: 2017年05月11日
 *  作者: pw-ethan
 *  说明: 
 *
 *  修改日期: 
 *  作者: 
 *  说明: 
 ******************************************************************/

#include <iostream>
#include <assert.h>

using namespace std;

int q(int n, int m)
{
    if(n < 1 || m < 1) return 0;
    if(n == 1 || m == 1) return 1;
    if(n < m) return q(n, n);
    if(n == m) return q(n, m - 1) + 1;
    return q(n, m - 1) + q(n - m, m);
}

int main()
{
    assert(q(0, 0) == 0);
    assert(q(1, 1) == 1);
    assert(q(2, 2) == 2);
    assert(q(6, 6) == 11);
    return 0;
}

