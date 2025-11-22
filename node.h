#ifndef NODE_H
#define NODE_H

class NODE{
    char data;
    NODE *nextPtr;
public:
    NODE(char x){ data=x; nextPtr=NULL;}
    ~NODE(){}   // No cout!!

    char get_value(){ return data; }
    NODE* get_next(){ return nextPtr; }
    void set_next(NODE *n){ nextPtr = n; }
};

typedef NODE* NodePtr;
#endif
