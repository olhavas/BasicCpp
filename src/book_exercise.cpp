//
// Created by Olha Vasylyshyn on 1/13/2021.
//

#include "book_exercise.h"

void revalue(double r, double ar[], int n) {
    for (int i = 0; i < n; i++) {
        ar[i]*=r;
    }
}
void revalueCheck(){
    double array [3] = {1.f,2.f,3.f};
    int size = 3;
    revalue(5.0,array,size);
    const double * pt;
    for (pt = array; pt!= array+3; pt++) {
        cout<<*pt<< ' ';
    }



}
