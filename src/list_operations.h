//
// Created by Olha Vasylyshyn on 1/13/2021.
//

#ifndef CPPSTUDY_LIST_OPERATIONS_H
#define CPPSTUDY_LIST_OPERATIONS_H
#include <iostream>
#include "ALLnode.h"

void displayList(ALLnode *head) ;
void displayData(ALLnode *head) ;

ALLnode *deepCopy(ALLnode* head);

ALLnode *setArb(ALLnode* head);
void removeALL(ALLnode *node);
void arbitraryListTask();

#endif //CPPSTUDY_LIST_OPERATIONS_H
