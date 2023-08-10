/*
Travelling Salesman Problem
A salesman has a number of cities to visit. He want to calculate the total number of possible paths he could take,
visiting each city once before returning home. 
Return the total number of possible paths a salesman can travel, given n cities.

If we have cities A, B and C, possible paths would be :

A->B->C
A->C->B
B->A->C
B->C->A
C->B->A
C->A->B
... which gives us 6 as the possible number of paths.

Examples
paths(4) ➞ 24

paths(1) ➞ 1

paths(9) ➞ 362880
*/

#include "Input.h"
#include "Salesman.h"

int main()
{

    int cityCount{ 0 };
    int possiblePaths{ 0 };

    std::cout << "Hello, Salesman!\n";
    getCities(cityCount);
    std::cout << "The total number of possible paths is: " << calculatePaths(cityCount);

    return 0;

}
