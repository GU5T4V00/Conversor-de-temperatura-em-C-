#include <iostream>

int main() {
    
    double temp1;
    double temp2;
    double temp3;
    char unidade;

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "K = Kelvin\n";
    std::cout << "Qual a sua temperatura base?: ";
    std::cin >> unidade;

    if(unidade == 'F' or unidade == 'f' ){
        std::cout << "Qual a temperatura em Fahrenheit?: ";
        std::cin >> temp1;

        temp2 = (temp1 - 32) /1.8;
        temp3 = (temp1 + 459,67) * 5/9;

        std::cout << "Temos a temperatura de: " << temp1 << " Fahrenheit\n";
        std::cout << "Temos a temperatura de: " << temp2 << " Celsius\n";
        std::cout << "Temos a temperatura de: " << temp3 << " Kelvin";
    }
    else if(unidade == 'C' or unidade == 'c' ){
        std::cout << "Qual a temperatura em Celcius?: ";
        std::cin >> temp2;
        
        temp1 = (1.8 * temp2) + 32;
        temp3 = temp2 + 273,15;

        std::cout << "Temos a temperatura de: " << temp1 << " Fahrenheit\n";
        std::cout << "Temos a temperatura de: " << temp2 << " Celsius\n";
        std::cout << "Temos a temperatura de: " << temp3 << " Kelvin";
    }
    else if(unidade == 'K' or unidade == 'k' ){
        std::cout << "Qual a temperatura em Kelvin?: ";
        std::cin >> temp3;

        temp1 = (temp3 - 273,15) * 1.8 + 32;
        temp2 = temp3 - 273,15;
        
        std::cout << "Temos a temperatura de: " << temp1 << " Fahrenheit\n";
        std::cout << "Temos a temperatura de: " << temp2 << " Celsius\n";
        std::cout << "Temos a temperatura de: " << temp3 << " Kelvin";
    }
    else{
        std::cout << "Insira uma letra correspondente a temperatura!";
    }
}