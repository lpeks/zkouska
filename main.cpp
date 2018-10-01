#include <iostream>

int main() {
    std::cout << "Vyber operaci: " << std::endl;
    char znamenko;
    std::cin >> znamenko;
    std::cout << "Zadej prvni cislo: " << std::endl;
    int cislo1;
    std::cin >> cislo1;
    int cislo2;
    std::cout << "Zadej druhe cislo: " << std::endl;
    std::cin >> cislo2;
    double vysledek;
    switch (znamenko){
        case '+':
            vysledek = cislo1 + cislo2;
            break;
        case '-':
            vysledek = cislo1 - cislo2;
            break;
        case '*':
            vysledek = cislo1 * cislo2;
            break;
        case '/':
            vysledek = (cislo1*1.0) / cislo2;
            break;
        case '%':
            vysledek = cislo1 % cislo2;
            break;
        default:
            std::cout << "Spatne zadany operant\n";
    }
    std::cout << znamenko << cislo1 << cislo2 <<std::endl;
    std::cout << "Vysledek: " << vysledek;

    return 0;
}