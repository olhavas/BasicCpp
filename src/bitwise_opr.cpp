//
// Created by Olha Vasylyshyn on 1/14/2021.
//

#include "bitwise_opr.h"


void bitwise::ownSwapAr( int *ar, short n) {
    for(int i = 0 ; i < n/2; i++){


        //cout<<i<<" "<<n-i-1<<'\n';
        ar[i] ^=ar[n-i-1];
        ar[n-i-1] ^= ar[i];
        ar[i] ^=ar[n-i-1];
        //cout<<ar[i]<<" "<< ar[n-i-1]<<'\n';
    }

}

void bitwise::binary(unsigned int num) {
    unsigned int mask=32768; //1000000000000000
    while(mask > 0){
        cout<<!((num & mask)==0);

        mask =mask>>1;
    }
    cout<<'\n';
}
void bitwise::binaryNoMask(unsigned int num) {
    const short mask = 16;

    int bin [mask] ={0};
    int i = 0;
    while(num!= 0){
        bin[i]=(num & 1);
        num =num>>1;
        i++;
    }
    ownSwapAr(bin, mask);
    for(int j = 0; j < mask; j++)
        cout<<bin[j];
    cout<<'\n';
}


