#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; //nincs alulvonás a N_ELEMENTS-ben
    std::cout << "1-100 ertekek duplazasa" << std::endl; // nincs pontosvessző a sor végén, " " << std::endl;
    for (int i = 0; i < N_ELEMENTS; i++) // nincs feltétel a for ciklusban
    {
        b[i] = i * 2;
    }
    for (int i = 0; i < N_ELEMENTS; i++) // nincs feltétel a for ciklusban
    {
        std::cout << "Ertek:" << b[i] << std::endl; // nincs pontosvessző a sor végén, " " << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; // nem inicializáltuk az atlag változót
    for (int i = 0; i < N_ELEMENTS; i++) // nincs pontosvessző a for ciklusban
    {
        atlag += b[i]; // nincs pontosvessző a sor végén
    }
    atlag /= N_ELEMENTS; 
    std::cout << "Atlag: " << atlag << std::endl; 

    return 0;
}
