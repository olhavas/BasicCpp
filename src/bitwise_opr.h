//
// Created by Olha Vasylyshyn on 1/14/2021.
//

#ifndef CPPSTUDY_BITWISE_OPR_H
#define CPPSTUDY_BITWISE_OPR_H
#include <iostream>
using namespace std;
namespace bitwise{
    template<typename T> T ownAbs(T number){
        if(number<0)   return ~(number -1);
        return number;
    }
    template<typename T> T toNeg(T number){
        if(number>0)   return ~(number) + 1;
        return number;
    }
    void binary(unsigned int num);
    void binaryNoMask(unsigned int num);
    void ownSwapAr(int *ar, short n);
}


#endif //CPPSTUDY_BITWISE_OPR_H
