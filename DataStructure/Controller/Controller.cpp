//
//  Controller.cpp
//  DataStructure
//
//  Created by Veliz, Luis on 1/28/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"


void Controller :: start()
{
    cout << "Welcome to the Data Structures App." << endl;
    testGraphTester();
    //testCircularTester();
    //testLinearTester();
    //testLinkedList();
    //usingNodes();
    //testFiles();
    //testLinear();
}

//void Controller :: testCircularList()
//{
   // CircularList<int>myCl;
   // myCl.add(1);
   // myCl.add(2);
   // myCl.add(3);
   // myCl.add(4);
    
   // myCl.addAtIndex(0,10);
   // myCl.addAtIndex(1, 20);
   // myCl.addAtIndex(2, 30);
    
   // myCl.remove(4);
    
   // for(int i = 0; i < myCl.getSize(); i++)
   // {
       // cout << "Index : " << i << " Element : " << myCl.getFromIndex(i) << endl;
   // }
//}

void Controller :: usingNodes()
{
    LinearNode<int> mine(5);
    LinearNode<string> wordHolder("words can be stored too");
    cout << mine.getData() <<endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced text");
    cout << wordHolder.getData() << endl;
    
}

void Controller :: testFiles()
{
    vector<Music> tunes = FileController :: musicDataToVector("/Users/lvel8903/Documents/C++ Projects/DataStructure/DataStructure/Resources/music.csv");

    for(int index = 234; index <= 255; index++)
    {
        cout<< index <<" : contents are : " << tunes[index]<<endl;
    }
    
}

void Controller :: testLinear()
{
    LinearTester lookieHere;
    lookieHere.testVsSTL();
}

void Controller :: testGraphTester()
{
    GraphTester lookieHere;
    lookieHere.testGraphs();
}


