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
    usingNodes();
    testFiles();
    testLinear();
}

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


