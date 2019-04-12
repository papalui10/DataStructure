//
//  Controller.hpp
//  DataStructure
//
//  Created by Veliz, Luis on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <iostream>
#include "../Model/Nodes/Node.hpp"
#include "../Model/Nodes/LinearNode.hpp"
#include "../Model/Linear/Array.hpp"
#include "../Controller/FileController.hpp"
#include "FileController.hpp"
#include "../Testers/LinearTester.hpp"

#include "../Model/Nodes/CircularList.hpp"

#include "../Testers/GraphTester.hpp"



using namespace std;

class Controller
{
private:
    void usingNodes();
    void testLinear();
public:
    void start();
    void testFiles();
    void testLinkedList();
    void testLinearTester();
    void testCircularList();
    void testGraphTester();
};



#endif /* Controller_hpp */
