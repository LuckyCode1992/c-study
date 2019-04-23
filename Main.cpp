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

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

/**
 * 数组的长度获取方式
 * @tparam T
 * @param n
 * @return
 */
template<class T>
int getArrayLenth(T &n) {
    return sizeof(n) / sizeof(n[0]);
}

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
//    SavingsAccount sa0(1, 21325302, 0.015);
//    SavingsAccount sa1(1, 58320212, 0.015);
//
//    //几笔账目
//    sa0.deposit(5, 5000);
//    sa1.deposit(25, 10000);
//    sa0.deposit(45, 5500);
//    sa1.withdraw(60, 4000);
//
//    //开户后第90天到了银行的计息日，结算所有账户的年息
//    sa0.settle(90);
//    sa1.settle(90);
//
//    //输出各个账户信息
//    sa0.show();	cout << endl;
//    sa1.show();	cout << endl;


//    int n[3][3];
//    cout << "输入9个整数作为矩阵元素" << endl;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cin >> n[i][j];
//        }
//    }
//    cout << "初始矩阵" << endl;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << n[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    cout << "转换矩阵" << endl;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < i; j++) {
//            swap(n[i][j], n[j][i]);
//        }
//
//    }
//
//    cout << "转换后：" << endl;
//
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << n[i][j] << " ";
//        }
//        cout << endl;
//    }


    int line1[] = {1, 0, 1};//矩阵第一行
    int line2[] = {0, 1, 0, 70};//矩阵第二行
    int line3[] = {0, 0, 1};//矩阵第三行
    string line4[] = {"12", "sdds", "", "55"};//矩阵第三行

    //定义整型指针数组，并初始化
    int *pLine[3] = {line1, line2, line3};

    cout << "Matrix test:" << endl;
    cout << "Matrix test:" << getArrayLenth(line1) << endl;
    cout << "Matrix test:" << getArrayLenth(line4) << endl;

    for (int i = 0; i < getArrayLenth(pLine); i++) {
//        int *tem = pLine[i];
//        cout << " tem:" << tem << endl;
        for (int j = 0; j < 3; j++) {
            cout << pLine[i][j] << " ";
        }
        cout << endl;
    }

    /***************************************指针结束********************************************/
    return 0;
}

