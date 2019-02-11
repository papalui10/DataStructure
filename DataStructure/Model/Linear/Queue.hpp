//
//  Queue.hpp
//  DataStructure
//
//  Created by Veliz, Luis on 2/11/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "LinkedList.hpp"

#include <iostream>
using namespace std;

template <class Type>
class Queue : public LinkedList<Type>
{
    Queue();
    ~Queue();
    
    //Queue methods
    void enqueue(Type data);
    Type dequeue();
    Type peek();
    void clear();
    
    //Overriden LinkedList methods
    void add
}


#endif /* Queue_h */
