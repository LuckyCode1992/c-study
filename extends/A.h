//
// Created by hxl on 2019/4/29.
//
#include <iostream>
#include <cstdlib>

using namespace std;
#ifndef C_STUDY_A_H
#define C_STUDY_A_H

class A {
    //virtual 表示虚函数 告诉编译器，不要在编译阶段静态绑定，要运行阶段 动态绑定
public:
    virtual void display() {
        cout << "A : display" << endl;
    }

    virtual void test() final;

    virtual void test2() &&;
};

#endif //C_STUDY_A_H
