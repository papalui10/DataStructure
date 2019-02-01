//
//  FileController.hpp
//  DataStructure
//
//  Created by Veliz, Luis on 2/1/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef FileController_hpp
#define FileController_hpp

#include "../Data/CrimData.hpp"
#include <stdio.h>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class FileController
{
public:
    static vector<CrimeData> readCrimeDataToVectore(string filename);
};

#endif /* FileController_hpp */
