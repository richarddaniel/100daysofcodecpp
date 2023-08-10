#include "Salesman.h"
#include "Input.h"

int getCities(int &cityCount) {

    std::cout << "How many cities are you traveling to?\n";

    //This loop validates user input, requesting another input if invalid and returning input if valid.
    while (true) {
        if (validateInput(std::cin, cityCount)) {
            return cityCount;
        }
        else {
            std::cout << "Invalid input. Please enter a number.\n";
        }
    } 
}

int calculatePaths(int cityCount) {
    int pathCount{ 1 };
    // This loop multipies the pathCount through each number of cityCount, finding the factorial of the number.
    for (int i{cityCount}; i > 0; i--) {   
        pathCount *= i;                              
    }
    return pathCount;
}