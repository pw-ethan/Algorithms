/*******************************************************************
 *  Copyright (C) 2016 PeanutWine Ethan - 1501680@stu.neu.edu.cn
 *  All rights reserved. 
 *
 *  文件名称: Fibonacci.cpp
 *  简要描述: Fibonacci数列：1,1,2,3,5,8,13,21,34,55,...
 *
 *           | 1                        n = 0
 *  fib(n) = | 1                        n = 1
 *           | fib(n - 1) + fib(n - 2)  n > 1
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

int fibonacci(int n)
{
    if(n <= 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int main()
{
    assert(fibonacci(0) == 1);
    assert(fibonacci(1) == 1);
    assert(fibonacci(5) == 8);
    assert(fibonacci(9) == 55);
    return 0;
}


