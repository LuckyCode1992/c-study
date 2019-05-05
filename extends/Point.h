//
// Created by hxl on 2019/5/5.
//

#ifndef C_STUDY_POINT_H
#define C_STUDY_POINT_H

#include <iostream>

using namespace std;

class Point {
    int _x, _y;
public:
    Point(int x = 0, int y = 0) : _x(x), _y(y) {}

    Point &operator++();

    Point operator++(int);

    Point &operator--();

    Point operator--(int);

    friend ostream& operator << (ostream& o, Point& p);

};

/**
 *  前置++ ，++i，再C++里面定义最后返回的是被++的对象的引用
 *  所以++i可以作为左值，即：++i=3
 * @return
 */
Point &Point::operator++() {
    _x++;
    _y++;
    return *this;
}

/**
 * 后置++，I++，在C++里面定义是，最后返回的是被++的对象的值
 *
 * @return
 */
Point Point::operator++(int) {
    Point temp = *this;
    ++*this;
    return temp;
}

Point &Point::operator--() {
    _x--;
    _y--;
    return *this;
}

Point Point::operator--(int) {
    Point temp = *this;
    --*this;
    return temp;
}


#endif //C_STUDY_POINT_H
