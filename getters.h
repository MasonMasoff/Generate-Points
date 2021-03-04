//
//  getRange.h
//  GeneratePoints
//
//  Created by Mason Garcia on 3/1/21.
//
#ifndef getters_h
#define getters_h
#endif /* getters_h */

double rangeB;
double rangeT;
// START getRange
double getRange () {
    std::cout << "Range (Bottom): ";
    std::cin >> rangeB;
    std::cout << "Range (Top): ";
    std::cin >> rangeT;
    
    return rangeB;
    return rangeT;
}
// END getRange

// START getAmount
int amountPoints;
int getAmountPoints() {
    std::cout << "How many points: ";
    std::cin >> amountPoints;
    
    return amountPoints;
}
// END getAmount

// START getFileName
std::string fileName;
std::string getFileName() {
    std::cout << "Enter Filename: ";
    std::cin >> fileName;
    return fileName;
}

// END getFileName
