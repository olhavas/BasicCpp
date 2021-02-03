//
// Created by Olha Vasylyshyn on 1/14/2021.
//
#include <iostream>
#include "normal.h"
#include "bitwise_opr.h"


    void normal::binary(unsigned int num) {
        const short mask = 16;
        int bin[mask] = {0}, n = num;
        int i = 0;
        while (n > 0) {
            bin[i] = n % 2;
            n = n / 2;
            i++;
        }
        bitwise::ownSwapAr(bin, mask);
        cout << '\n';
        for (int j = 0; j < mask; j++)
            cout << bin[j];
        cout << '\n';


    }

void normal::fibonacci(int n) {
    int i, tab[n];
    tab[0]=0;
    tab[1]=1;

    for (i=2;i<n;i++){
        tab[i]=tab[i-1]+tab[i-2];
    }

    for(auto j : tab){
        cout<<j<<' ';

    }
    cout<<'\n';
}

int normal::fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1)+fib(n-2);
}
