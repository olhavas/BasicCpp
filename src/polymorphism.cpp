//
// Created by Olha Vasylyshyn on 1/21/2021.
//
#include "polymorphism.h"

A::A(){
        this->c ='a';
        std::cout<<"A"<<'\n';
}
A::~A(){
        std::cout<<"~A"<<c<<'\n';
}



B::B(){
        this->c ='b';
        std::cout<<"B"<<'\n';
}
B::~B() {
        std::cout<<"~B"<<c<<'\n';
}

C::C(){
        this->c ='c';
        std::cout<<"C"<<'\n';
}
C::~C() {

        std::cout<<"~C"<<c<<'\n';
}



D::D(){
        this->c = 'd';
        std::cout<<"D"<<'\n';
}
D::~D(){
        std::cout<<"~D"<<c<<'\n';
}


