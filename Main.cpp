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

int main() {
    cout << "hello" << endl;

    /***************************************���鿪ʼ********************************************/
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
    /***************************************�������********************************************/

    /***************************************ָ�뿪ʼ********************************************/
//    PointerDemo pointerDemo;
//    pointerDemo.initPointDemo();

    //���������˻�
//    SavingsAccount sa0(1, 21325302, 0.015);
//    SavingsAccount sa1(1, 58320212, 0.015);
//
//    //������Ŀ
//    sa0.deposit(5, 5000);
//    sa1.deposit(25, 10000);
//    sa0.deposit(45, 5500);
//    sa1.withdraw(60, 4000);
//
//    //�������90�쵽�����еļ�Ϣ�գ����������˻�����Ϣ
//    sa0.settle(90);
//    sa1.settle(90);
//
//    //��������˻���Ϣ
//    sa0.show();	cout << endl;
//    sa1.show();	cout << endl;
    int n[3][3];
    cout << "����9��������Ϊ����Ԫ��" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> n[i][j];
        }
    }
    cout << "��ʼ����" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << n[i][j] << " ";
        }
        cout << endl;
    }

    cout << "ת������" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            swap(n[i][j], n[j][i]);
        }

    }

    cout << "ת����" << endl;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << n[i][j] << " ";
        }
        cout << endl;
    }
    /***************************************ָ�����********************************************/
    return 0;
}

