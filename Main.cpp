//
// Created by hxl on 2019/4/17.
//
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "array/ArrayDemo.h"
#include "pointer/PointerDemo.h"

using namespace std;

int main() {
    cout << "hello" << endl;

    /***************************************数组开始********************************************/
//    ArrayDemo *arrayDemo = new ArrayDemo();
//    arrayDemo->printArray();
//    ArrayDemo arrayDemo(0);
//    arrayDemo.printArray();


//    ArrayDemo arrayDemo;
//    arrayDemo.printArray();
//    arrayDemo.feibonaqie(20);


//    int table[3][4] = {{1, 2, 3, 4},
//                       {3, 3, 3, 3},
//                       {6, 6, 6, 6}};
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 4; j++) {
//            cout << table[i][j] << "   ";
//        }
//        cout << endl;
//    }
//    arrayDemo.rowSum(table, 3);
//    for (int i = 0; i < 3; i++) {
//        cout << "Sum of row:" << i << " is " << table[i][0] << endl;
//    }
    /***************************************数组完结********************************************/

    /***************************************指针开始********************************************/
    PointerDemo pointerDemo;
    pointerDemo.initPointDemo();


    /***************************************指针结束********************************************/
    return 0;
}

