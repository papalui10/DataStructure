//
//  LinkedList.h
//  DataStructure
//
//  Created by Veliz, Luis on 2/7/19.
//  Copyright © 2019 CTEC. All rights reserved.
//


#include "List.hpp"

using namespace std; //Used for keyword access. Use this to make sure pointers are pointing to the right things.

#ifndef LinkedList_hpp
#define LinkedList_hpp

template <class Type>
class LinkedList : public List<Type>
{
protected:
    
    LinearNode<Type> * front;
    LinearNode<Type> * end;
    
public:
    //Constructors
    LinkedList();
    //Destructor
    virtual ~LinkedList(); // Virtual so it can be overriden.
    //Helper methods
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    //Structure Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
    //Type setAtIndex(int index, Type item);
    //bool contains(Type item);

    template <class Type>
    LinkedList<Type> :: Linkedlist()
    {
        this->front = nullptr;
        this->end = nullptr;
        this->size = 0;
    }
    
    template <class Type>
    LinkedList<Type> :: ~LinkedList()
    {
        LinearNode<Type> * destroyStructure = front;
        while (front != nullptr)
        {
            front = destroyStructure->getNextNode();
            delete destroyStructure;
            destroyStructure = front;
        }
    }
    
    template <class Type>
    void Linked List<Type> :: add(Type item)
    {
        LinearNode<Type> * newData = new LinearNode<Type>(item);
        
        if(this->size == 0)
        {
            this->front = newData;
        }
        else
        {
            this->end->setNextNode(newData);
        }
        
        this->end = newData;
        
        this->size += 1;
    }
    
    template <class Type>
    void LinkedList<Type> :: addAtIndex(int index, Type item)
    {
        assert(index >= 0 && index <= this->size);
        if(index == this->size)
        {
            add(item);
        }
        else
        {
            LienarNode<Type> * toBeAdded = new LinearNode<Type>(item);
            if (index == 0)
            {
                toBeAdded->setNextNode(front);
                front = toBeAdded;
            }
            else
            {
                LinearNode<Type> * previous = nullptr;
                LinearNode<Type> * current = front;
                for (int position = 0; position < index; position++ )
                {
                    previous = current;
                    current = current->getNextNode();
                }
                previous->setNextNode(toBeAdded);
                toBeAdded->setNextNode(current);
            }
            this->size++;
        }
    }
};


#endif /* LinkedList_hpp */
