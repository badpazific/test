#ifndef DUCK_H
#define DUCK_H

#include <iostream>
using namespace std;

class Duck {
public:
    Duck();
    void quack();   //кряканье
    void swim();    //плаванье
    virtual void display() = 0;     //отображение
};

#endif // DUCK_H
