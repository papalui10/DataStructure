//
//  Node.hpp
//  DataStructure
//
//  Created by Veliz, Luis on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Node_h
#define Node_h
//alwyas #include as early and basic as possible.
#include <assert.h>

template <class Type>
class Node
{
private:
    Type data;
public:
    Node();
    Node(Type data);
    Type getData();
    void setData(Type data);
};

//template definitions

template <class Type>
Node<Type> :: Node()
{}

template <class Type>
Node<Type> :: Node(Type data)
{
    this->data = data;
}

template <class Type>
Type Node<Type> :: getData()
{
    return data;
}

template <class Type>
void Node<Type> :: setData(Type data)
{
    this->data = data;
}

#endif /* Node_h */
