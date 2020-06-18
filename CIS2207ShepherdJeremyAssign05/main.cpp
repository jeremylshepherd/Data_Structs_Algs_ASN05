//
//  main.cpp
//  CIS2207ShepherdJeremyAssign05
//
//  Created by Jeremy Shepherd on 6/12/20.
//  Copyright © 2020 Jeremy Shepherd. All rights reserved.
//

#include <iostream>
#include "ArrayQueue.hpp"
#include "ArrayQueue.cpp"
#include "ArrayStack.hpp"
#include "ArrayStack.cpp"
#include <cstring>

using namespace std;

bool isPalindrome(string);

int main(int argc, const char * argv[]) {

    string first = "wow", second = "nope", third = "racecar";
    
    cout << (isPalindrome(first) ? "true" : "false") << endl;
    cout << (isPalindrome(second) ? "true" : "false") << endl;
    cout << (isPalindrome(third) ? "true" : "false") << endl;
    
    return 0;
}

bool isPalindrome(string str)
{
    ArrayQueue<char> aQueue;
    ArrayStack<char> aStack;
    
    for (int i = 0; i < str.length(); i++)
    {
        char next = str[i];
        aQueue.enqueue(next);
        aStack.push(next);
    }
    
    bool characterAreEqual = true;
    while (!aQueue.isEmpty() && characterAreEqual)
    {
        char queueFront = aQueue.peekFront();
        char stackTop = aStack.peek();
        
        if (queueFront == stackTop)
        {
            aQueue.dequeue();
            aStack.pop();
        }
        else
            characterAreEqual = false;
    }
    return characterAreEqual;
}

