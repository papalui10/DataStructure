//
//  BinaryTreeTester.hpp
//  DataStructure
//
//  Created by Veliz, Luis on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef BinaryTreeTester_h
#define BinaryTreeTester_h

#include "../Model/Nodes/BinaryTreeNode.hpp"
#include "../Model/NonLinear/BinarySearchTree.hpp"


class BinaryTreeTester
{
private:
    BinaryTreeNode<int> testNode;
    BinarySearchTree<int> testTree;
public:
    void treeStuff();
};


#endif /* BinaryTreeTester_h */
