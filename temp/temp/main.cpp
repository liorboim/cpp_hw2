//
//  main.cpp
//  temp
//
//  Created by lior bomwurzel on 4/24/15.
//  Copyright (c) 2015 lior bomwurzel. All rights reserved.
//

#include <iostream>
#include "Meeting_t.h"

int main(int argc, const char * argv[]) {
    Meeting_t m1=Meeting_t(1.5,1.6,"hello");
    Meeting_t m2=Meeting_t(1.5,1.6,"hello");
    if(m1==m2)
        std::cout << "yes!\n";
    else
        std::cout << "no!\n";
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
