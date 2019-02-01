//
//  FileController.cpp
//  DataStructure
//
//  Created by Veliz, Luis on 2/1/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "FileController.hpp"

vector<CrimeData> FileController :: readCrimeDataToVector(string filename)
{
    std :: vector<CrimeData> crimeVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at the path.
    if (dataFile.is_open())
    {
        //Keep reading until you are at the end of the file.
        while (!datFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return chracter.
            getline(dataFile, currentCSVLine, '\r');
            //Esclude header row
            if (rowCount !=0)
            {
                //Create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(CurrentSCVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        datFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}