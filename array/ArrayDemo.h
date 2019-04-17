//
// Created by hxl on 2019/4/17.
//
using namespace std;

/**
 *  数组是具有一定顺序关系的若干相同类型变量的集合，
 *  组成数组的变量称为该数组的元素。
 */
class ArrayDemo {
public:
    ArrayDemo();

    ArrayDemo(int i);
    ~ArrayDemo();

    int a[10];
    int b[10];
    int c[5][3];

    void printArray();
};

