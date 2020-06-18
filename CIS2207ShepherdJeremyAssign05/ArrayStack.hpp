//
//  ArrayStack.hpp
//  CIS2207ShepherdJeremyAssign05
//
//  Created by Jeremy Shepherd on 6/14/20.
//  Copyright © 2020 Jeremy Shepherd. All rights reserved.
//

#ifndef ArrayStack_hpp
#define ArrayStack_hpp
#include "StackInterface.hpp"

#include <stdio.h>

template<class T>
class ArrayStack : public StackInterface<T>
{
private:
    static const int DEFAULT_CAPACITY = 50;
    T items[DEFAULT_CAPACITY];
    int top;
public:
    ArrayStack();
    
    bool isEmpty() const;
    bool push(const T& newEntry);
    bool pop();
    T peek() const;
    
};

#endif /* ArrayStack_hpp */
