#include <iostream>
#include <iomanip>
#include <cmath> // importando bibliotecas
using namespace std;
int main(void)
{
     setlocale(LC_ALL, "Portuguese");
     int n, r, TAM;  // definindo variaveis
     TAM = 3; // definindo constante
     cout<< "\nInforme um n�mero: ";
     cin >> n;
     while(n > 0)  //criando la�o while
     {
           pow(n, TAM); //usando operador para elevar a base ao expoente
           r = pow(n, TAM);
           cout << "\n O resultado do n�mero elevado a tr�s � : " << r << endl; // retornando a potencia
           break; //parando a execu��o do la�o
     }
     cin.get();
}
