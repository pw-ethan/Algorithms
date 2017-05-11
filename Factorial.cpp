/*******************************************************************
 *  Copyright (C) 2016 PeanutWine Ethan - 1501680@stu.neu.edu.cn
 *  All rights reserved. 
 *
 *  文件名称: Factorial.cpp
 *  简要描述: 阶乘n！
 *
 *       | 1        n = 0
 *  n! = |
 *       | n(n-1)!  n > 0
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

int factorial(int n)
{
    if(n == 0) return 1;
    return n * factorial(n - 1);
}



int main()
{
    assert(factorial(0) == 1);
    assert(factorial(5) == 120);
    return 0;
}
