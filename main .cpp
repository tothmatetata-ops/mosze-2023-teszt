#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //nincs alulvonás a N_ELEMENTS-ben
    std::cout << '1-100 ertekek duplazasa' // nincs pontosvessző a sor végén, " " << std::endl;
    for (int i = 0;) // nincs feltétel a for ciklusban
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // nincs feltétel a for ciklusban
    {
        std::cout << "Ertek:" // nincs pontosvessző a sor végén, " " << b[i] << std::endl;
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++) // nincs pontosvessző a for ciklusban
    {
        atlag += b[i] // nincs pontosvessző a sor végén
    }
    atlag /= N_ELEMENTS; 
    std::cout << "Atlag: " << atlag << std::endl; 
    return 0;
}
