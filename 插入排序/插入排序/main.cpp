//
//  main.cpp
//  插入排序
//
//  Created by 刘威 on 2018/3/12.
//  Copyright © 2018年 刘威. All rights reserved.
//

#include <iostream>
using namespace std;

void fun(int a[], int length){
    for (int i = 1; i < length; i++) {
        for (int j = i - 1; j >=0 ; j--) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
            }else{
                break;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    int length = sizeof(a) / sizeof(a[0]);
    fun(a, length);
    for (int i = 0; i < length; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
