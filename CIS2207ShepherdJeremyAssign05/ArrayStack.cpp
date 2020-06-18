//
//  ArrayStack.cpp
//  CIS2207ShepherdJeremyAssign05
//
//  Created by Jeremy Shepherd on 6/14/20.
//  Copyright © 2020 Jeremy Shepherd. All rights reserved.
//

#include "ArrayStack.hpp"

template<class T>
ArrayStack<T>::ArrayStack() : top(-1)
{
    
}

template<class T>
bool ArrayStack<T>::isEmpty() const
{
    return top < 0;
}

template<class T>
bool ArrayStack<T>::push(const T& newEntry)
{
    bool result = false;
    if (top < DEFAULT_CAPACITY - 1)
    {
        top++;
        items[top] = newEntry;
        result = true;
    }
    return result;
}

template<class T>
bool ArrayStack<T>::pop()
{
    bool result = false;
    if (!isEmpty())
    {
        top--;
        result = true;
    }
    return result;
}

template<class T>
T ArrayStack<T>::peek() const
{
    if (!isEmpty())
    {
        return items[top];
    }
    return NULL;
}
