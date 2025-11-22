#ifndef STACK_H
#define STACK_H

#include "node.h"

class Stack {
    NodePtr top;

public:
    Stack() { top = NULL; }
    ~Stack() { while(top != NULL) pop(); }

    void push(char x){
        NodePtr n = new NODE(x);
        n->set_next(top);
        top = n;
    }

    char pop(){
        if(top == NULL) return 0;

        NodePtr t = top;
        char v = t->get_value();
        top = top->get_next();
        delete t;
        return v;
    }

    bool isEmpty() { return top == NULL; }
};

#endif
