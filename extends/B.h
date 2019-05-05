//
// Created by hxl on 2019/4/29.
//
#include <iostream>
#include <cstdlib>
#include "A.h"

using namespace std;
#ifndef C_STUDY_B_H
#define C_STUDY_B_H

class B : public A {
public:
    void display() {
        cout << "B : display" << endl;
    }

//    void test();
    void test2() && override{

    }
};

#endif //C_STUDY_B_H
