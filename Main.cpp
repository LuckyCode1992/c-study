//
// Created by hxl on 2019/4/17.
//
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "array/ArrayDemo.h"

using namespace std;

int main() {
    cout << "hello" << endl;
//    ArrayDemo *arrayDemo = new ArrayDemo();
//    arrayDemo->printArray();
//    ArrayDemo arrayDemo(0);
//    arrayDemo.printArray();


    ArrayDemo arrayDemo;
//    arrayDemo.printArray();
    arrayDemo.feibonaqie(20);

    return 0;
}

