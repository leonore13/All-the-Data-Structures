//
//  stackdriver.cpp
//  Stacks
//
//  Created by Sophia Nguyen on 2016-06-21.
//  Copyright © 2016 Sophia Nguyen. All rights reserved.
//

#include <iostream>
#include "stacks.hpp"

int main(int argc, const char * argv[]) {
    std::cout << "Testing out my sparkly, new stack...\n";
    Stack testStack(5);
    
    testStack.Push(1);
    testStack.Push(5);
    testStack.Push(3);
    testStack.Push(4);
    int* testArray = testStack.get_Arr();
    
    for (int i = 3; i >= 0; i--) {
        std::cout << testArray[i] << endl;
    }
    
    return 0;
}