#include <iostream>
#include "Tax.hpp"
#include "TaxConstants.hpp"

int main()
 {
    TaxPayer taxpayers[TaxInformation::SIZE];
    taxTaker(taxpayers);
    taxPrint(taxpayers);
    return 0;
}
