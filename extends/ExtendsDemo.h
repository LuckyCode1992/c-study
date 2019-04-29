//
// Created by hxl on 2019/4/29.
//
#include <iostream>
#include <cstdlib>

using namespace std;

#ifndef C_STUDY_EXTENDSDEMO_H
#define C_STUDY_EXTENDSDEMO_H


#include "B.h"

class ExtendsDemo : public B{
public:
    void display() {
        cout << "ExtendsDemo : display" << endl;
    }
};


#endif //C_STUDY_EXTENDSDEMO_H
