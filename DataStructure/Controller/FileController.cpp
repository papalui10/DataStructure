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
        while (!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return chracter.
            getline(dataFile, currentCSVLine, '\r');
            //Esclude header row
            if (rowCount !=0)
            {
                //Create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimeVector.push_back(row);
                }
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimeVector;
}

vector<Music> FileController :: musicDataToVector(string filename)
{
    vector<Music> musicVector;
    string currentCSVLine;
    int rowCount = 0;
    
    ifstream dataFile(filename);
    
    //If the file exists at that path.
    if(dataFile.is_open())
    {
        //Keep reading until you are at the end of the file.
        while(!dataFile.eof())
        {
            getline(dataFile, currentCSVLine, '\n');
            //Grab each line from the CSV seperated by the carriage return character.
            if(rowCount != 0)
            {
                
                //create a crimedata instance from the line. Exclude a blank line(usually if oepened seperately)
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicVector.push_back(row);
                }
                
            }
            rowCount++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    return musicVector;
    
}

LinkedList<CrimeData> FileController :: readDataToList(string filename)
{
    LinkedList<CrimeData> crimes;
    
    string currentCSVLine;
    int rowCout = 0;
    
    ifstream dataFile(fileName);
    
    //If the file exists at that path.
    if(dataFile.is_open())
    {
        //Keep reading until you are at the end of the file.
        while (!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character.
            getline(dataFile, currentCSVLine, '\r');
            //Exclude header row
            if(rowCout != 0)
            {
                //Create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                if(currentCSVLine.length() != 0)
                {
                    CrimeData row(currentCSVLine);
                    crimes.add(row);
                }
            }
            rowCout++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return crimes;
}

LinkedList<Music> FileController :: readDataToList(string filename)
{
    LinkedList<Music> musicList;
    
    string currentCSVLine;
    int rowCout = 0;
    
    ifstream dataFile(fileName);
    
    //If the file exists at that path.
    if(dataFile.is_open())
    {
        //Keep reading until you are at the end of the file.
        while (!dataFile.eof())
        {
            //Grab each line from the CSV separated by the carriage return character.
            getline(dataFile, currentCSVLine, '\r');
            //Exclude header row
            if(rowCout != 0)
            {
                //Create a CrimeData instance from the line. Exclude a blank line (usually if opened separately)
                if(currentCSVLine.length() != 0)
                {
                    Music row(currentCSVLine);
                    musicList.add(row);
                }
            }
            rowCout++;
        }
        dataFile.close();
    }
    else
    {
        cerr << "NO FILE" << endl;
    }
    
    return musicList;
}
