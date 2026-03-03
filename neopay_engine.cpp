#include <string>
#include <iostream>

int main()
{
    double PHPeso;
    double US_Dollar;
    int PHP_Balance = 50000;
    const double EXCHANGE_RATE = 0.018;
    const double SERVICE_FEE = 75.00;
    
    std::cout << "============================================" << std::endl;
    std::cout << "\tNeo-Pay: Borderless E-Wallet" << std::endl;
    std::cout << "============================================" << std::endl;
    std::cout << "Current User Balance:\t\t" << PHP_Balance << std::endl;
    std::cout << "Service Fee:\t\t\t" << SERVICE_FEE << std::endl;
    std::cout << "Exchange Rate:\t\t\t" << EXCHANGE_RATE << std::endl;
    
    std::cout << "============================================" << std::endl;
    std::cout << "Enter PHP Amount:\t\t" ;
    std::cin >> PHPeso;
    PHP_Balance =  PHP_Balance - PHPeso;
    
    bool isApprovedStatus = PHPeso < PHP_Balance;
    std::cout << "Status (1=YES, 0=NO):\t\t" << isApprovedStatus << std::endl;
   
    
    US_Dollar = SERVICE_FEE + (EXCHANGE_RATE * PHPeso);
    std::cout << "============================================" << std::endl;
    std::cout << "Total Balance Left:\t\t" << PHP_Balance << std::endl;
    std::cout << "Total Amount Transferred:\t" << US_Dollar << std::endl;
    
    return 0;
}