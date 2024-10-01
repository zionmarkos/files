#include "deleteRepeats.hpp"
#include <iostream>
#include <memory>

std::unique_ptr<char[]> deleteRepeats(char originalArray[])
 {
    int uniqueCount = 0;

    // Step 1: Identify how many unique elements there are
    for (int i = 0; i < SIZE; ++i) 
    {
        bool isUnique = true;
        for (int j = 0; j < i; ++j) 
        {
            if (originalArray[i] == originalArray[j]) 
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
         {
            ++uniqueCount;
        }
    }

    // Step 2: Allocate a new dynamic array using a unique pointer
    std::unique_ptr<char[]> newArray(new char[uniqueCount]);

    // Step 3: Copy the unique elements to the new array
    int index = 0;
    for (int i = 0; i < SIZE; ++i)
     {
        bool isUnique = true;
        for (int j = 0; j < i; ++j)
         {
            if (originalArray[i] == originalArray[j]) 
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique) 
        {
            newArray[index++] = originalArray[i];
        }
    }

    return newArray;  // Return the unique pointer
}
