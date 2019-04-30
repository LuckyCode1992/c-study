//
// Created by hxl on 2019/4/30.
//

#ifndef C_STUDY_BASECLASS_H
#define C_STUDY_BASECLASS_H

/**
 * 带有纯虚函数的类，就是抽象类
 *
 * 作用：
 * 将有关的数据和行为组织在一个继承层次结构中，保证派生类具有要求的行为
 * 对于暂时无法实现的函数，可以声明为纯虚函数，刘改派生类去实现
 *
 * 抽线类只能作为基类使用
 * 不能定义抽象类的对象
 */
class BaseClass {
    //纯虚函数
    virtual void test() = 0;
};

#endif //C_STUDY_BASECLASS_H
