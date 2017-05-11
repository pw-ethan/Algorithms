/*******************************************************************
 *  Copyright (C) 2016 PeanutWine Ethan - 1501680@stu.neu.edu.cn
 *  All rights reserved. 
 *
 *  文件名称: Hanoi.cpp
 *  简要描述: Hanoi塔问题
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

using namespace std;

void move(int a, int b)
{
    cout << a << " -> " << b << endl;
}

void hanoi(int n, int a, int b, int c)
{
    if(n > 0){
        hanoi(n - 1, a, c, b);
        move(a, b);
        hanoi(n - 1, c, b, a);
    }
}

int main()
{
    hanoi(5, 1, 2, 3);
    return 0;
}
