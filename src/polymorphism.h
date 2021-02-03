//
// Created by Olha Vasylyshyn on 1/21/2021.
//

#ifndef CPPSTUDY_POLYMORPHISM_H
#define CPPSTUDY_POLYMORPHISM_H
#include <iostream>

class A{
public:
    char c;
    A();
    virtual ~A();
};

class B : virtual public A{
public:
    B();
    virtual ~B();
};

class C : virtual public A{
public:
    C();
    virtual ~C();
};

class D : public B, C {
public:
        D();
        virtual ~D();
};

#endif //CPPSTUDY_POLYMORPHISM_H
