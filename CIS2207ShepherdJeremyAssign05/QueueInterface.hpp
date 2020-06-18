//
//  QueueInterface.hpp
//  CIS2207ShepherdJeremyAssign05
//
//  Created by Jeremy Shepherd on 6/14/20.
//  Copyright © 2020 Jeremy Shepherd. All rights reserved.
//

#ifndef QueueInterface_hpp
#define QueueInterface_hpp

#include <stdio.h>

template<class T>
class QueueInterface
{
public:
    virtual bool isEmpty() const = 0;
    
    virtual bool enqueue(const T& newEntry) = 0;
    
    virtual bool dequeue() = 0;
    
    virtual T peekFront() const = 0;
    
    virtual ~QueueInterface() {}
};

#endif /* QueueInterface_hpp */
