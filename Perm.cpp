/*******************************************************************
 *  Copyright (C) 2016 PeanutWine Ethan - 1501680@stu.neu.edu.cn
 *  All rights reserved. 
 *
 *  文件名称: Perm.cpp
 *  简要描述: 全排列
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

template<class Type>
inline void Swap(Type& a, Type& b)
{
    Type tmp = a;
    a = b;
    b = tmp;
}

template<class Type>
void Perm(Type list[], int k, int m)
{
    if(k == m){
        for(int i = 0; i < m; ++i){
            cout << list[i];
        }
        cout << endl;
    }
    else{
        for(int i = k; i < m; ++i){
            Swap(list[k], list[i]);
            Perm(list, k + 1, m);
            Swap(list[k], list[i]);
        }
    }
}


int main()
{
    int nums[] = {1, 2, 3, 4, 5};
    Perm(nums, 0, 5);

    return 0;
}
