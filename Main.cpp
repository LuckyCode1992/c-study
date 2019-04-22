//
// Created by hxl on 2019/4/17.
//
#include <iostream>
#include <cstdlib>
#include <time.h>
#include "array/ArrayDemo.h"
#include "pointer/PointerDemo.h"
#include "comprehensive_case/SavingsAccount.h"

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
//    PointerDemo pointerDemo;
//    pointerDemo.initPointDemo();

    //建立几个账户
    SavingsAccount sa0(1, 21325302, 0.015);
    SavingsAccount sa1(1, 58320212, 0.015);

    //几笔账目
    sa0.deposit(5, 5000);
    sa1.deposit(25, 10000);
    sa0.deposit(45, 5500);
    sa1.withdraw(60, 4000);

    //开户后第90天到了银行的计息日，结算所有账户的年息
    sa0.settle(90);
    sa1.settle(90);

    //输出各个账户信息
    sa0.show();	cout << endl;
    sa1.show();	cout << endl;
    /***************************************指针结束********************************************/
    return 0;
}

