#include <iostream>
#include <iomanip>
#include "Tax.hpp"
#include "TaxConstants.hpp"
bool isValidRate(float rate)
{
    return rate >= 0.01f && rate <= 9.9f;
}
bool isValidIncome(float income)
{
    return income > 0;
}
void taxTaker(TaxPayer taxpayers[])
{
    int numPayers;
    std::cout << "Please enter the annual income and tax rate for up to " 
              << TaxInformation::SIZE << " tax payers:\n";
    std::cin >> numPayers;
    if(numPayers > TaxInformation::SIZE) {
        numPayers = TaxInformation::SIZE;  
    }
    for (int i = 0; i < numPayers; i++) 
    {
        std::cout << "Enter this year's income for tax payer #" << (i+1) << ": ";
        std::cin >> taxpayers[i].income;
        while (!isValidIncome(taxpayers[i].income)) 
        {
            std::cout << "Invalid income. Please enter a positive amount: ";
            std::cin >> taxpayers[i].income;
        }
        std::cout << "Enter the tax rate for tax payer #" << (i+1) << ": ";
        std::cin >> taxpayers[i].taxRate;
        while (!isValidRate(taxpayers[i].taxRate)) 
        {
            std::cout << "Invalid rate. Please enter a rate between 0.01 and 9.9: ";
            std::cin >> taxpayers[i].taxRate;
        }
        taxpayers[i].taxes = taxpayers[i].income * (taxpayers[i].taxRate / 100.0f);
    }
}
void taxPrint(const TaxPayer taxpayers[]) 
{
    std::cout << "\nTax due for this year:\n";
    for (int i = 0; i < TaxInformation::SIZE; i++) 
    {
        if (taxpayers[i].income > 0) 
        {  
            std::cout << "Tax payer #" << (i + 1) << ": $" 
                      << std::fixed << std::setprecision(2) << taxpayers[i].taxes << "\n";
        }
    }
}
