#include <iostream>
#include <cstring>
using namespace std;

#include "stack.h"

int main(int argc, char **argv) {

    for(int i = 1; i < argc; i++) {

        Stack s;            // stack for each argument
        bool ok = true;
        
        for(int j = 0; j < strlen(argv[i]); j++) {
            char c = argv[i][j];

            // opening bracket
            if(c == '[' || c == '{') {
                s.push(c);
            }
            // closing bracket
            else if(c == ']' || c == '}') {

                char open = s.pop();

                if(open == 0) { 
                    ok = false;
                    break;
                }

                if( (open == '[' && c != ']') ||
                    (open == '{' && c != '}') ) {
                    ok = false;
                    break;
                }
            }
        }

        if(!s.isEmpty()) ok = false;

        if(ok)
            cout << "argv " << i << " correct\n";
        else
            cout << "argv " << i << " incorrect\n";
    }

    return 0;
}
