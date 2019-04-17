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

