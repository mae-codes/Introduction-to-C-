#include <iostream>
#include <string>

int main() {
    double weight, height, bmi;
    std::string status = "BMI Calculated Successfully!";

    std::cout << "===================================" << std::endl;
    std::cout << "     Health-Check BMI Precision      " << std::endl;
    std::cout << "===================================" << std::endl;

    std::cout << "Enter weight in kg:\t";
    std::cin >> weight;

    std::cout << "Enter height in meters:\t";
    std::cin >> height;


    if (height <= 0) {
        std::cout << "Error:\tHeight must be greater than zero." << std::endl;
    }
    else {
    
        bmi = weight / (height * height);

        std::cout << "-----------------------------------" << std::endl;
        std::cout << status << std::endl;
        std::cout << "Your BMI:\t" << bmi << std::endl;
    }

    return 0;
}