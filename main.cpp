#include <iostream>

int resulFinalMais (int numerador, int denominador, int numerador2, int denominador2, int &resultado, int &resultado2){
    resultado = (numerador * denominador2) + (denominador * numerador2);
    resultado2 = denominador * denominador2;
    return resultado % resultado2;
} 
int resulFinalMenos (int numerador, int denominador, int numerador2, int denominador2, int &resultado, int &resultado2){
    resultado = (numerador * denominador2) - (denominador * numerador2);
    resultado2 = denominador * denominador2;
    return resultado % resultado2;
} 
int resulFinalVezes (int numerador, int denominador, int numerador2, int denominador2, int &resultado, int &resultado2){
    resultado = (numerador * denominador2) * (denominador * numerador2);
    resultado2 = denominador * denominador2;
    return resultado % resultado2;
} 
int resulFinalDividir (int numerador, int denominador, int numerador2, int denominador2, int &resultado, int &resultado2){
    resultado = (numerador * denominador2) % (denominador * numerador2);
    resultado2 = denominador * denominador2;
    return resultado % resultado2;
} 

using namespace std;
int main(){
    //numero no qual vai ser dividido
    int numerador, numerador2; 
    //numero utilizado como divisor
    int denominador, denominador2;
    int resultado, resultado2;
    int operacao;

    cout << "------------------------------------------------------"<< endl;
    cout << "digite o numerador da primeira fração: " ;
    cin >> numerador;
    cout << "digite o denominador da primeira fração: " ;
    cin >> denominador;
    cout << "digite o numerar da segunda fração: " ;
    cin >> numerador2;
    cout << "digite o denominador da primeira fração: " ;
    cin >> denominador2;
    cout << "------------------------------------------------------"<< endl;
    cout << "Digite a operação desejada: 1(+), 2(-), 3(*) ou 4(/):";
    cin >> operacao;

    if (operacao == 1) {
        cout <<  resulFinalMais(numerador, denominador, numerador2, denominador2, resultado, resultado2) <<endl;
    } else if (operacao == 2){
        cout <<  resulFinalMenos(numerador, denominador, numerador2, denominador2, resultado, resultado2) <<endl;
    }else if  (operacao == 3){
        cout <<  resulFinalVezes(numerador, denominador, numerador2, denominador2, resultado, resultado2) <<endl;
    }else if  (operacao == 4){
        cout <<  resulFinalDividir(numerador, denominador, numerador2, denominador2, resultado, resultado2) <<endl;
    }

    return 0;
}
