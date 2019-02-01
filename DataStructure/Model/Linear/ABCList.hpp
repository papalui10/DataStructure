//
//  List.hpp
//  DataStructure
//
//  Created by Veliz, Luis on 2/1/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef ABCList_hpp
#define ABCList_hpp

#include <assert.h>
#include "../../Nodes/LinearNode.hpp"

using namespace std;

template <class type>
{
protected:
    int size;
public:
    //Structure
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) =;
    //Helper
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFrone() = 0;
    virtual LInearNode<Type> * getEnd() =0;`
};


#endif /* ABCList_h */
