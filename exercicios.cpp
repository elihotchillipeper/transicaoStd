#include <iostream>
using namespace std;

int exe01(){

    //Escreva um programa que solicite o nome do usuário e imprima uma mensagem de boas-vindas.
    
    string nome;

    cout << "Digite seu nome de usuário: ";
    cin >> nome;

    cout << "Seja bem-vino(a) " << nome << "!" << std::endl;

    return 0;
}

int exe02(){
    
    //Crie um programa que peça dois números e imprima a soma, subtração, multiplicação e divisão.

    int n1, n2;

    cout << "Digite o 1° número: ";
    cin >> n1;

    cout << "Digite o 2° número: ";
    cin >> n2;

    cout << "Resultado: " << n1 + n2 << std::endl;

    return 0; 
}


int exe03(){

    //Modifique o programa anterior para imprimir os resultados formatados com duas casas decimais.

    double n1, n2;

    cout << "Digite o 1° número: ";
    cin >> n1;

    cout << "Digite o 2° número: ";
    cin >> n2;

    cout << "Resultado: " << n1 + n2 << std::endl;

    return 0; 
}


int main(){
    //exe01();
    //exe02();
    exe03();
}