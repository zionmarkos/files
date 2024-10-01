#include <iostream>
#include "deleteRepeats.hpp"

int main() 
{
    // Step 1: Create the test array
    char originalArray[SIZE] = {'a', 'b', 'b', 'c', 'a', 'c', 'a', 'c', 'b', 'c'};
    
    // Step 2: Call deleteRepeats and receive the smart pointer
    std::unique_ptr<char[]> noRepeats = deleteRepeats(originalArray);

    // Step 3: Display the new array
    std::cout << "Array after removing repeats: ";
    for (int i = 0; i < 3; ++i) 
    {  // There are only 3 unique elements
        std::cout << noRepeats[i] << ' ';
    }
    std::cout << std::endl;

    // Step 4: Report the number of repeats removed
    std::cout << "Number of repeats removed: " << (SIZE - 3) << std::endl;

    return 0;
}
