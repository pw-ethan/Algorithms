/*******************************************************************
 *  Copyright (C) 2016 PeanutWine Ethan - 1501680@stu.neu.edu.cn
 *  All rights reserved. 
 *
 *  文件名称: BinarySearch.cpp
 *  简要描述: 
 *
 *  创建日期: 2017年05月11日
 *  作者: pw-ethan
 *  说明: 二分搜索
 *
 *  修改日期: 
 *  作者: 
 *  说明: 
 ******************************************************************/

#include <iostream>
#include <assert.h>

using namespace std;

template<class Type>
int BinarySearch(Type nums[], const Type& x, int n)
{
    int left = 0;
    int right = n - 1;
    while(left <= right){
        int middle = (left + right) / 2;
        if(x == nums[middle]) {
            return middle;
        }
        if(x > nums[middle]) {
            left = middle + 1;
        }
        else {
            right = middle - 1;
        }
    }
    return -1;
}

int main()
{
    int nums[] = {1, 3, 4, 5, 6, 8, 9, 12, 19};
    assert(BinarySearch(nums, 2, 9) == -1);
    assert(BinarySearch(nums, 1, 9) == 0);
    assert(BinarySearch(nums, 5, 9) == 3);
    return 0;
}
