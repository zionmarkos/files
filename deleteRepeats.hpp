#ifndef DELETEREPEATS_HPP
#define DELETEREPEATS_HPP

#include <memory>  // For smart pointers

// Unnamed namespace for the constant SIZE
namespace
 {
    const int SIZE = 10;
}

// Function declaration
std::unique_ptr<char[]> deleteRepeats(char originalArray[]);

#endif // DELETEREPEATS_HPP
