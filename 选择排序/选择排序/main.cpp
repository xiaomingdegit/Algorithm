//
//  main.cpp
//  选择排序
//
//  Created by 刘威 on 2018/3/12.
//  Copyright © 2018年 刘威. All rights reserved.
//

#include <iostream>
using namespace std;

void selectSort(int a[],int length){
    for (int i = 0; i < length - 1; i++) {
        int minNum = a[i];
        int index = i;
        for (int j = i + 1; j < length; j++) {
            if (minNum > a[i]) {
                minNum = a[i];
                index = i;
            }
        }
        swap(a[i], a[index]);
    }
}

int main(int argc, const char * argv[]) {
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    //{1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(a) / sizeof(a[0]);
    selectSort(a, length);
    for (int i = 0; i < length; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
