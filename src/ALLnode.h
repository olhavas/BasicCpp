//
// Created by Heniek Jaszczurka on 1/13/2021.
//

#ifndef CPPSTUDY_ALLNODE_H
#define CPPSTUDY_ALLNODE_H


class ALLnode {
private:
public:
    int value;
    ALLnode* next;
    ALLnode* arbitrary;
    ALLnode (){
        this->value = 0;
        this->next = nullptr;
        this->arbitrary = nullptr;
    }

    ALLnode (int val){
        this->value = val;
        this->next = nullptr;
        this->arbitrary = nullptr;
    }
    ~ALLnode(){
        delete this;
    }

};


#endif //CPPSTUDY_ALLNODE_H
