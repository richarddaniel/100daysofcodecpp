#include "Input.h"

//This function validates user input, ensuring the expected response type is entered.
//It intakes an input stream and a variable of the data type we're trying to recieve.
bool validateInput(std::istream& stream, int& a) { 
    
    stream >> a;

    //It checks if the input stream is able to succesfully set the variable to the requested type.
    if (stream.good()) {
        return true;
    }
    else if (stream.fail()) {                                             // If it's unable to do so, 
        stream.clear();                                                   // it clears the input stream,
        stream.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // and clears the error message,
        return false;                                                     // before returning false.
    }

    // If not cleared, the error can sometimes persist if another input stream of the same type is used right after this is called.

    return false;
}