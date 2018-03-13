//
//  main.cpp
//  冒泡排序
//
//  Created by 刘威 on 2018/3/12.
//  Copyright © 2018年 刘威. All rights reserved.
//

#include <iostream>
using namespace std;

void fun(int a[],int length){
    int flag = length - 1;
    while (flag > 0) {
        int m = flag;
        flag = 0;
        for (int j = 0; j < m; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                flag = j;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int a[10] = //{0,1,2,3,4,5,6,7,8,9};
    {9,8,7,6,5,4,3,2,1,0};
    int length = sizeof(a) / sizeof(a[0]);
    fun(a, length);
    for (int i = 0; i < length; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
