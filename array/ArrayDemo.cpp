//
// Created by hxl on 2019/4/17.
//

#include "ArrayDemo.h"
#include <cstdlib>
#include <iostream>

using namespace std;

ArrayDemo::ArrayDemo() {

}

ArrayDemo::ArrayDemo(int i) {

}

ArrayDemo::~ArrayDemo() {

}

void ArrayDemo::printArray() {
    for (int i = 0; i < 10; i++) {
        a[i] = i * 2 + 1;
        b[9 - i] = a[i] + 1;
    }
    for (int i = 0; i < 10; i++) {
        cout << "a[" << i << "]=" << a[i] << " ";
        cout << "b[" << i << "]=" << b[i] << endl;
    }
}

void ArrayDemo::feibonaqie(int i) {
    if (i < 2) {
        cout << "请输入大于2的值" << endl;
        return;
    }
    if (i > 1000) {
        cout << "请输入小于1000的值" << endl;
    }

    const int m = 1000;

    int f[m] = {1, 1};
    for (int n = 2; n < i; n++) {
        f[n] = f[n - 2] + f[n - 1];
    }
    for (int n = 0; n < i; n++) {
        if (n % 5 == 0) {
            cout << endl;
        }
        cout.width(12);
        cout << f[n];
    }
}

void ArrayDemo::rowSum(int a[][4], int nRow) {
    for (int i = 0; i < nRow; i++) {
        for (int j = 1; j < 4; j++) {
            a[i][0] += a[i][j];
        }
    }
}

