
#ifndef stack_h
#define stack_h
#include "node.h"
class Stack {
	NodePtr top;
	int size;
public:
    void push(int);
    int pop();
    Stack();
    ~Stack();
};


void Stack::push(int x){
  NodePtr new_node=new NODE(x);
  if(new_node){
            // Left missing for exercises…
    if (new_node) {
        // Insert node at the top of the stack
        new_node->set_next(top);   // new node points to old top
        top = new_node;            // update top to new node
        size++;

   }
}
 
         // Left missing for exercises…
    
}

int Stack::pop(){
        NodePtr t=top;
        if(t!=NULL){
        int value;
        value =t ->get_value();
    // Left missing part for exercises
    top = top ->get_next();
        delete t;
        return value;
	//be careful of the empty stack!!!
    }
    cout <<"Empty stack" <<endl;
    return 0;
    }


    Stack::Stack(){


    //initialize stack
    top = NULL;
    size = 0;
}
Stack::~Stack(){
    //delete all remaning stack (i.e. pop all) 
    cout<<"Clear the stack"<<endl;
       while (top != NULL) {
        pop();    // pop until empty
    }
    
}


#endif
