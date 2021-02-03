//
// Created by Olha Vasylyshyn on 1/21/2021.
//

#include "interv_q.h"



void strcpy(char* dest, const char* src) {
    for(;*src != '\0'; src++){

        *dest = *src;
        //std::cout<<*dest<<' '<<*src<<'\n';
        dest++;
    }
    *dest = '\0';
}

Interv::Interv(){

}



int mainfunc()
{
    char arr[] = "costam";
    char dest[6];
    strcpy(dest, arr);
    std::cout<<dest;
    int val =5, val2 =6;
    const int war=10;

/*
 * Pointer to Constant Data
 *
 * const type* variable;
 * OR
 * type const * variable;
 * Wskaźnik do danych const nie pozwala na modyfikację danych przez wskaźnik.
 * Deklaracja danych const wymaga jedynie, aby const poprzedzało *,
 * więc każda z dwóch poniższych deklaracji jest poprawna.
 */

    const int* a;
    int const * c;
/*
 * Pointers with Const Memory Address
 *
 * type * const variable = some memory address;
 *
 * Wskaźniki o stałym adresie pamięci są deklarowane przez dołączenie znaku
 * const po znaku *. Ponieważ adres jest stały, wskaźnik musi mieć
 * natychmiast przypisaną wartość.
 */
    int* const b = &val;
    c = &val2;
    a = &val2;
    c =&war;
    *b = 10;


/*
 * Const Data with a Const Pointer
 *
 * const type * const variable = some memory address;
 * or
 * type const * const variable = some memory address;
 */

/*
 * Const reference
 *
 * const int& rData = variable;
 *
 * int const &rData = variable;
 *
 * as alias to variable
 */


//pimpl,crtp
//
    return 0;
}
