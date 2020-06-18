//
//  StackInterface.hpp
//  CIS2207ShepherdJeremyAssign05
//
//  Created by Jeremy Shepherd on 6/14/20.
//  Copyright © 2020 Jeremy Shepherd. All rights reserved.
//

#ifndef StackInterface_hpp
#define StackInterface_hpp

#include <stdio.h>
template<class T>
class StackInterface
{
public:
    virtual bool isEmpty() const = 0;
    
    virtual bool push(const T& newEntry) = 0;
    
    virtual bool pop() = 0;
    
    virtual T peek() const = 0;
    
    virtual ~StackInterface() {}
};

#endif /* StackInterface_hpp */
