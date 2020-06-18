//
//  ArrayQueue.cpp
//  CIS2207ShepherdJeremyAssign05
//
//  Created by Jeremy Shepherd on 6/14/20.
//  Copyright © 2020 Jeremy Shepherd. All rights reserved.
//

#include "ArrayQueue.hpp"

template<class T>
ArrayQueue<T>::ArrayQueue()
:front(0), back(DEFAULT_CAPACITY - 1), count(0) {}

template<class T>
bool ArrayQueue<T>::isEmpty() const
{
    return count == 0;
}

template<class T>
bool ArrayQueue<T>::enqueue(const T& newEntry)
{
    bool result = false;
    if (count < DEFAULT_CAPACITY)
    {
        back = (back + 1) % DEFAULT_CAPACITY;
        items[back] = newEntry;
        count++;
        result = true;
    }
    
    return result;
}

template<class T>
bool ArrayQueue<T>::dequeue()
{
    bool result = false;
    if (!isEmpty())
    {
        front = (front + 1) % DEFAULT_CAPACITY;
        count--;
        result = true;
    }
    
    return result;
}

template<class T>
T ArrayQueue<T>::peekFront() const
{
    if (!isEmpty())
    {
        return items[front];
    }
    return NULL;
}
