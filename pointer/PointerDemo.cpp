//
// Created by hxl on 2019/4/18.
//

#include "PointerDemo.h"
#include <cstdlib>
#include <iostream>

using namespace std;

void PointerDemo::initPointDemo() {

    /**
     *  *ptr   *用于定义（被赋值）的时候是一个标识，表明该变量是指针
     *          除此之外，*是取值的作用，从对应的内存地址中取出存放的值
     *   & 在赋值给别人时表示，取址，取出内存地址
     *   在被别人赋值的表示，表示引用
     */

    int i;//定义int类型i
    int &k = i;
    cout << " i1 = " << i << endl;
    cout << " k1 = " << k << endl;
    cout << " &k1 = " << &k << endl;
    int *ptr;
    ptr = &i;//取得i的地址赋值给ptr
    cout << " *ptr1 =" << *ptr << endl;
    cout << " ptr1 =" << ptr << endl;
    i = 10;//int类型赋初值
    cout << " i2 = " << i << endl;
    cout << " *ptr2 =" << *ptr << endl;
    cout << " ptr2 =" << ptr << endl;
    cout << " k2 = " << k << endl;
    cout << " &k2 = " << &k << endl;

    /**
     * 指向常量的指针
     * const 指针
     */
    int m = 6;
    //只读指针
    const int *p1;
    p1 = &m;//p1是指向常量的指针

    int n = 9;
    p1 = &n;//正确，p1本身值可以改变  p1是指针，可以指向其他地址
//    *p1 = 1;//编译出错，不能通过p1改变所指的对象，*p1 内存中取出的值，这个值是常量，不能改变

/**
 * 指针类型的常量
 */

    int *const p2 = &m;
//p2 = &n;//错误，p2是指针常量，值不能改变   p2是指针，而这个指针是常量，不可改变
    *p2 = 2;//正确，指针指向的地址不可变，但是，内存空间的值可以改变

}