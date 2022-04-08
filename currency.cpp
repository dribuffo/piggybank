#include <iostream>

int main() {
    //variables
    double peso, reais, soles, usd;

    // Input from the user in the terminal
    // stored as variables for Peso, Reais, Soles
    std::cout << "Enter number of Colombian Pesos: ";
    std::cin >> peso;

    std::cout << "Enter number of Brazilian Reais: ";
    std::cin >> reais;

    std::cout << "Enter number of Peruvian Soles: ";
    std::cin >> soles;
    

    // convert to USD
    double peso_to_usd = peso * 0.05;
    double reais_to_usd = reais * 0.21;
    double soles_to_usd = soles * 0.27;
    
    // add them up to find out how much USD we have:
    usd = peso_to_usd + reais_to_usd + soles_to_usd;

    //output to terminal the value of our piggybank
    std::cout << "US Dollars = $" << usd << "\n";


    // return 0 for success
    return 0;
}