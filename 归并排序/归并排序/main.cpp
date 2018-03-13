//
//  main.cpp
//  归并排序
//
//  Created by 刘威 on 2018/3/12.
//  Copyright © 2018年 刘威. All rights reserved.
//

#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r){
    int help[r - l + 1];
    int i = 0;
    int p1 = l;
    int p2 = m + 1;
    while (p1 <= m && p2 <= r) {
        if (a[p1] < a[p2]) {
            help[i++] = a[p1++];
        }else{
            help[i++] = a[p2++];
        }
    }
    while (p1 <= m) {
        help[i++] = a[p1++];
    }
    while (p2 <= r) {
        help[i++] = a[p2++];
    }
    for (i = 0; i < r - l + 1; i++) {
        a[l+i] = help[i];
    }
}

void mergeSort(int a[], int l, int r){
    if (l == r) {
        return;
    }
    int middle = l + ((r - l) >> 1);
    mergeSort(a, l, middle);
    mergeSort(a, middle + 1, r);
    merge(a, l, middle, r);
}

void mergeSort(int a[], int length){
    mergeSort(a, 0, length - 1);
}

int main(int argc, const char * argv[]) {
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    int length = sizeof(a) / sizeof(a[0]);
    mergeSort(a, length);
    for (int i = 0; i < length; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
