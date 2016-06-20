//
//  main.cpp
//  All the Data Structures
//
//  Created by Sophia Nguyen on 2016-06-19.
//  Copyright © 2016 Sophia Nguyen. All rights reserved.
//

#include <iostream>
#include "datastructtypes.h"

int main(int argc, const char * argv[]) {
    std::cout << "Testing out my sparkly, new stack\n";
    Stack testStack(5);
    testStack.Push(1);
    testStack.Push(5);
    testStack.Push(3);
    testStack.Push(4);
    
    for (int i = 1; i < testStack.get_Top(); i++) {
        std::cout << testStack.Pop() << endl;
    }
    
    return 0;
}
