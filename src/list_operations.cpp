//
// Created by Olha Vasylyshyn on 1/13/2021.
//


#include "list_operations.h"


using namespace std;
void displayList(ALLnode *head) {
    ALLnode *list = head;

    while (list){
        cout<<list->value<<"->";
        list = list->next;


    }
    cout<<"null\n";

}
void displayData(ALLnode *head) {
    ALLnode *list = head;
    while(list) {
        cout << list-> value ;
        cout << " -> "<<  list-> arbitrary->value << "\n";
        list = list-> next;
    }

}

ALLnode *deepCopy(ALLnode* head){
    ALLnode* copy = new ALLnode(head->value);
    copy->arbitrary = head->arbitrary;
    copy->next = head->next;

    return copy;
}

ALLnode *setArb(ALLnode* head){
    ALLnode* list = head;
    ALLnode* copylist = list;

    while(list->next){
        list->arbitrary = list->next->next;

        if(list->next->next== nullptr){
            list->arbitrary= list->next;
        }
        list= list->next;
    }
    if(list->next == nullptr){
        list->arbitrary= head;

    }
    list = head;
    return list;
}

void removeALL(ALLnode *node){
    ALLnode *next;
    while(node!= nullptr) {
        next = node->next;
        delete node;
        node = next;

    }
}

void arbitraryListTask(){
    int size = 4;

    ALLnode *head = new ALLnode(10);
    head->next = new ALLnode(5);
    ALLnode* tail = head->next;
    tail->next =new ALLnode(50);
    tail = tail->next;
    tail->next = new ALLnode(28);

    head = setArb(head);


    displayList(head);
    displayData(head);
    cout<<"_______\n";
    ALLnode* list = deepCopy(head);
    displayList(list);
    displayData(list);
//some problems in remove.
    removeALL(head);
}
