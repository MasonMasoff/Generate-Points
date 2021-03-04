//
//  main.cpp
//  GeneratePoints
//
//  Created by Mason Garcia on 3/1/21.
//
#include <random>
#include <iostream>
#include <fstream>

#include "getters.h"

using namespace std;

int main () {
    random_device rd;
    default_random_engine generator(rd()); // rd() provides a random seed
    
    // Prompts users for doubles or ints
    int selection;
    cout << "Doubles (0), or Ints (1): ";
    cin >> selection;
    
    if (selection == 0) {
        cout << "You've selected Doubles" << endl;
        getRange();
        
        uniform_real_distribution<double> distribution(rangeB,rangeT);
        
        getAmountPoints();
        getFileName();
        
        ofstream myfile;
        myfile.open (fileName);
        for (int i = 0; i < amountPoints; i++) {
            double x = distribution(generator);
            double y = distribution(generator);
            myfile << x << " " << y << endl;
        }
        myfile.close();
    } else if (selection == 1) {
        cout << "You've selected Integers" << endl;
        getRange();
        
        uniform_int_distribution<int> distribution(rangeB, rangeT);
        
        getAmountPoints();
        getFileName();
        
        ofstream myfile;
        myfile.open (fileName);
        for (int i = 0; i < amountPoints; i++) {
            double x = distribution(generator);
            double y = distribution(generator);
            myfile << x << " " << y << endl;
        }
        myfile.close();
    }
    
    cout << "\nFile can be found in same folder as executable";
    cout << "\n\t\n";
    return 0;
}

