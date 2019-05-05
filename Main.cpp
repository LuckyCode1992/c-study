//
// Created by hxl on 2019/4/17.
//
#include <iostream>
#include <cstdlib>
#include <time.h>
#include<vector>
#include "array/ArrayDemo.h"
#include "pointer/PointerDemo.h"
#include "comprehensive_case/SavingsAccount.h"
#include "extends/A.h"
#include "extends/B.h"
#include "extends/ExtendsDemo.h"
#include "extends/Point.h"

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

//��ʵ��x�ֳ��������ֺ�С�����֣��β�intpart,fracpart��ָ��
void splitFloat(float x, int *intpart, float *fracpart) {
    *intpart = static_cast<int>(x);
    *fracpart = x - *intpart;
}

/**
 * ����ĳ��Ȼ�ȡ��ʽ
 * @tparam T
 * @param n
 * @return
 */
template<class T>
int getArrayLenth(T &n) {
    return sizeof(n) / sizeof(n[0]);
}


/**
 * ָ������ָ��
 * @param a
 * @param b
 * @param func
 * @return
 */
int compute(int a, int b, int(*func)(int, int)) {
    return func(a, b);
}

int max(int a, int b) {
    return ((a > b) ? a : b);
}

int min(int a, int b) {
    return a > b ? b : a;
}

int sum(int a, int b) {
    return a + b;
}

int average(const vector<int> &arr) {
    int ave = 0;
    int sum = 0;
    for (int i = 0; i < arr.size(); ++i) {
        sum += arr[i];
    }
    ave = sum / arr.size();
    return ave;
}

void display(A *p) {
    p->display();
}

void display(A p) {
    p.display();
}

ostream &operator<<(ostream &o, Point &p) {
    o << "(" << p._x << "," << p._y << ")";
    return o;
}

/**
 * ģ��
 * @return
 */
template<class T>
T abs(T x) {
    return x < 0 ? -x : x;
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


//    int n[3][3];
//    cout << "����9��������Ϊ����Ԫ��" << endl;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cin >> n[i][j];
//        }
//    }
//    cout << "��ʼ����" << endl;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << n[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    cout << "ת������" << endl;
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < i; j++) {
//            swap(n[i][j], n[j][i]);
//        }
//
//    }
//
//    cout << "ת����" << endl;
//
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << n[i][j] << " ";
//        }
//        cout << endl;
//    }


//    int line1[] = {1, 0, 1};//�����һ��
//    int line2[] = {0, 1, 0, 70};//����ڶ���
//    int line3[] = {0, 0, 1};//���������
//    string line4[] = {"12", "sdds", "", "55"};//���������
//
//    //��������ָ�����飬����ʼ��
//    int *pLine[3] = {line1, line2, line3};
//
//    cout << "Matrix test:" << endl;
//    cout << "Matrix test:" << getArrayLenth(line1) << endl;
//    cout << "Matrix test:" << getArrayLenth(line4) << endl;
//
//    for (int i = 0; i < getArrayLenth(pLine); i++) {
////        int *tem = pLine[i];
////        cout << " tem:" << tem << endl;
//        for (int j = 0; j < 3; j++) {
//            cout << pLine[i][j] << " ";
//        }
//        cout << endl;
//    }


//    for (int i = 0; i < 3; ++i) {
//        float x, f;
//        int n;
//        cin >> x;
//        splitFloat(x, &n, &f);
//        cout << "Integer Part = " << n << " Fraction Part = " << f << endl;
//    }

//    cout << "max = " << compute(4, 6, &max) << endl;
//    cout << "min = " << compute(4, 6, &min) << endl;
//    cout << "sum = " << compute(4, 6, &sum) << endl;

//    int m1[] = {2, 4, 6};
//    int *p1 = m1;
//    cout << "p = " << p1 << endl;
//    cout << "*p++ = " << *p1++ << endl;
//    cout << "p = " << p1 << endl;
//
//
//    int m2[] = {2, 4, 6};
//    int *p2 = m2;
//    cout << "p = " << p2 << endl;
//    cout << "*(p++) = " << *(p2++) << endl;
//    cout << "p = " << p2 << endl;
//
//
//    int m3[] = {2, 4, 6};
//    int *p3 = m3;
//    cout << "p = " << p3 << endl;
//    cout << "(*p)++ = " << (*p3)++ << endl;
//    cout << "p = " << p3 << endl;
//
//    int m4[] = {2, 4, 6};
//    int *p4 = m4;
//    cout << "p = " << p4 << endl;
//    cout << "*++p = " << *++p4 << endl;
//    cout << "p = " << p4 << endl;
//
//
//    int m5[] = {2, 4, 6};
//    int *p5 = m5;
//    cout << "p = " << p5 << endl;
//    cout << "*(++p) = " << *(++p5) << endl;
//    cout << "p = " << p5 << endl;
//
//
//    int m6[] = {2, 4, 6};
//    int *p6 = m6;
//    cout << "p = " << p6 << endl;
//    cout << "++*p = " << ++*p6 << endl;
//    cout << "p = " << p6 << endl;
//
//
//    int m7[] = {2, 4, 6};
//    int *p7 = m7;
//    cout << "p = " << p7 << endl;
//    cout << "++(*p) = " << ++(*p7) << endl;
//    cout << "p = " << p7 << endl;



//��̬�����ڴ���ͷ�
//    PointerDemo *p = new PointerDemo();
//��ʲôʲô����

//ɾ������ ���Զ�������������
//    delete p;
//����ָ��
// unique_ptr:  ��������ָ�빲����Դ�������ñ�׼���е�move����ת��ָ��

//shared_ptr�� ���ָ�빲����Դ

//weak_ptr: ���Ը���shared_ptr �����乹������ͷŶ���Դ������Ӱ��

//vector
//    int n = 1;
//    cin >> n;
//    vector<int> arr(n);
//    for (int i = 0; i < n; ++i) {
//        cin >> arr[i];
//    }
//    int ave = average(arr);
//    cout << "ave = " << ave;
    /***************************************ָ�����********************************************/

/****************************************�̳У�����************************************/

//    A a;
//    B b;
//    ExtendsDemo extendsDemo;
//
//    a.display();
//    b.display();
//    extendsDemo.display();
//
//    display(&a);
//    display(&b);
//    display(&extendsDemo);
//
//    display(a);
//    display(b);
//    display(extendsDemo);

    Point p(1, 2);
    cout << p << endl;
    Point po = p++;
    cout << po << endl;
    cout << ++p << endl;
    Point p2 = p--;
    cout << p2 << endl;
    cout << --p << endl;
    cout << p << endl;


    return 0;
}

