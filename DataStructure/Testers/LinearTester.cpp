//
//  LinearTester.cpp
//  DataStructure
//
//  Created by Veliz, Luis on 2/13/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "LinearTester.hpp"


void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/lvel8903/Documents/C++ Projects/DataStructure/DataStructure/Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/lvel8903/Documents/C++ Projects/DataStructure/DataStructure/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A different of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    
    musicSTL.startTimer();
    vector<Music> tunes = FileController :: musicDataToVector("/Users/lvel8903/Documents/C++ Projects/DataStructure/DataStructure/Resources/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/lvel8903/Documents/C++ Projects/DataStructure/DataStructure/Resources/music.csv");
    musicOOP.stopTimer();
    
    cout << "This is the STL Read time: " << endl;
    musicSTL.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
    
    int randomIndex = rand() % moreCrimes.getSize();
    
    crimeTimerSTL.startTimer();
    crimes[randomIndex];
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.stopTimer();
    moreCrimes.getFromIndex(randomIndex);
    crimeTimerOOP.stopTimer();
    
    cout << "This is the STL random retrieval: " << endl;
    crimeTimerSTL.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    randomIndex = rand() % musicList.getSize();
    
    musicSTL.startTimer();
    tunes[randomIndex];
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    musicList.getFromIndex(randomIndex);
    musicOOP.stopTimer();
    
    cout << "This is the STL random retrieval: " << endl;
    musicSTL.displayInformation();
    cout << "This is the OOP Node random retrieval: " << endl;
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " miscroseconds" << endl;
}

void LinearTester :: testVsStack()
{
    Timer crimeTimerStack, crimeTimerOOP, musicStack, musicOOP;
    
    crimeTimerStack.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("/Users/lvel8903/Documents/C++ Projects/DataStructure/DataStructure/Resources/crime.csv");
    crimeTimerStack.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("/Users/lvel8903/Documents/C++ Projects/DataStructure/DataStructure/Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    cout << "This is the Stack Read time: " << endl;
    crimeTimerStack.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    crimeTimerOOP.displayInformation();
    cout << "A different of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerStack.getTimeInMicroseconds() << " microseconds" << endl;
    
    
    musicStack.startTimer();
    vector<Music> tunes = FileController :: musicDataToVector("/Users/lvel8903/Documents/C++ Projects/DataStructure/DataStructure/Resources/music.csv");
    musicStack.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("/Users/lvel8903/Documents/C++ Projects/DataStructure/DataStructure/Resources/music.csv");
    musicOOP.stopTimer();
    
    cout << "This is the Stack Read time: " << endl;
    musicStack.displayInformation();
    cout << "This is the OOP Node Read time: " << endl;
    musicOOP.displayInformation();
    cout << "A different of: " << crimeTimerOOP.getTimeInMicroseconds() - musicStack.getTimeInMicroseconds() << " microseconds" << endl;
}


