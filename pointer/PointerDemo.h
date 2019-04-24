//
// Created by hxl on 2019/4/18.
//

#ifndef C_STUDY_POINTERDEMO_H
#define C_STUDY_POINTERDEMO_H


/**
 * 指针变量的初始化：
 * 语法形式： 存储类型 数据类型 *指针名 = 初始地址
 *
 * 指针变量的赋值运算：
 * 语法形式： 指针名 = 地址
 */

class PointerDemo {

    /**
     * 指针变量初始化，赋值案例
     */
public:
    void initPointDemo();

    //指针类型的函数
    // 存储类型 数据类型 *函数名()
    int *point1();

    //指向函数的指针
    // 存储类型 数据类型 （*函数指针名）()
    int (*point2)();

};


#endif //C_STUDY_POINTERDEMO_H
