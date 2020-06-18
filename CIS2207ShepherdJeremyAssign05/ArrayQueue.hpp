//
//  ArrayQueue.hpp
//  CIS2207ShepherdJeremyAssign05
//
//  Created by Jeremy Shepherd on 6/14/20.
//  Copyright © 2020 Jeremy Shepherd. All rights reserved.
//

#ifndef ArrayQueue_hpp
#define ArrayQueue_hpp
#include "QueueInterface.hpp"
#include <stdio.h>

template<class T>
class ArrayQueue : public QueueInterface<T>
{
private:
    static const int DEFAULT_CAPACITY = 50;
    T items[DEFAULT_CAPACITY];
    int front, back, count;
    
public:
    ArrayQueue();
    bool isEmpty() const;
    bool enqueue(const T& newEntry);
    bool dequeue();
    
    T peekFront() const;
};

#endif /* ArrayQueue_hpp */
