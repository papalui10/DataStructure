//
//  CircularList.hpp
//  DataStructure
//
//  Created by Veliz, Luis on 2/21/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef CircularList_hpp
#define CircularList_hpp

#include "../Nodes/DoubleNode.hpp"

template <class Type>
{
private:
    DoubleNode<Type> * front;
    DoubleNode<Type> * end;
    int size;
    
    DoubleNode<Type> * findNode(int index);
public:
    CircularList();
    ~CircularList();
    
    //List methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type remove(int index);
    Type setAtIndex(int index, Type item);
    Type getFromIndex(int index);
    int getSize() const;
};

template <class Type>
CircularList<Type> :: CircularList()
{
    front = nullptr;
    end = nullptr;
    this->size = 0;
}

//destructor
template <class Type>
CircularList<Type> :: ~CircularList()
{
    DoubleNode<Type> * current = front;
    while(this->front != nullptr && this->front != front->getNext())
    {
        front = front->getNext();
        delete current;
        current = front;
    }
    delete front;
}

template <class Type>
DoubleNode<Type> * CircularList<Type> :: findNode(int index)
{
    assert (index >= 0 && index < this->size);
    DoubleNode<Type> * nodeToFind;
    
    if (index < this->size / 2)
    {
        nodeToFind = this->front;
        for (int position = 0; position < index; position++)
        {
            nodeToFind = nodeToFind->getNext();
        }
    }
    else
    {
        nodeToFind = this->end;
        for (int position = this->size - 1; position > index; position--)
        {
            nodeToFind = nodeToFind->getPrevious();
        }
    }
    
    return nodeToFind;
}

template <class Type>
void CircularList<Type> :: add(Type item)
{
    DoubleNode<Type> * addedNode;
    if (this->size == 0)
    {
        addedNode = new DoubleNode<Type>(item);
        this->front = addedNode;
        this->end = addedNode;
        this->end -> setNext(addedNode);
    }
    else
    {
        addedNode = new DoubleNode<Type>(item, this->end, this->front);
        this->end->setNext(addedNode);
    }
    this->front->setPrevious(addedNode);
    this->end = addedNode;
    this->size++;
}

template <class Type>
void CircularList<Type> :: addAtIndex(int index, Type item)
{
    assert (index >= 0 && index <= this->size);
    
    DoubleNode<Type> * next;
    DoubleNode<Type> * previous;
    DoubleNode<Type> * addMe;
    
    if (index < this->size)
    {
        next = findNode(index);
        previous = next->getPrevious();
    }
    else if (index == this->size)
    {
        next = this->front;
        previous = this->end;
    }
    
    addMe = new DoubleNode<Type>(item, previous, next);
    
    if(index == 0)
    {
        this->front = addMe;
    }
    else if(index == this->size)
    {
        this->end = addMe;
    }
    
    previous->setNext(addMe);
    next->setPrevious(addMe);
    this->size++;
}

template <class Type>
Type CircularListy<Type> :: getFromIndex(int index)
{
    assert (index >= 0 && index < this->size);
    DoubleNode<Type> * holder = findNode(index);
    return holder->getData();
}

template <class Type>
Type CircularList<Type> :: removed(int index)
{
    assert (index >= 0 && index < this->size);
    
    DoubleNode<Type> * removed = findNode(index);
    DoubleNode<Type> * removedPrevious = removed->getPrevious();
    DoubleNode<Type> * removedNext = removed->getNext();
    
    if (index == 0)
    {
        this->front = removedNext;
        this->end->setNext(removedNext);
    }
    
    removedPrevious->setNext(removedNext);
    removedNext->setPrevious(removedPrevious);
    
    Type value = removed->getData();
    this->size--;
    delete removed;
    return value;
}

template <class Type>
Type CircularList<Type> :: setAtIndex(int index, Type item)
{
    assert(index >=0 && index < size);
    DoubleNode<Type> * replacedValue = findNode(index);
    Type replaced = replacedValue->getData();
    return replaced;
}

template <class Type>
int CircularList<Type> :: getSize() const
{
    return this->size;
}
#endif /* CircularList_h */
