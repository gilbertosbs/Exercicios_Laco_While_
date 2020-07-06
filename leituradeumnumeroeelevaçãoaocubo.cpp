#include <iostream>
#include <iomanip>
#include <cmath> // importando bibliotecas
using namespace std;
int main(void)
{
     setlocale(LC_ALL, "Portuguese");
     int n, r, TAM;  // definindo variaveis
     TAM = 3; // definindo constante
     cout<< "\nInforme um número: ";
     cin >> n;
     while(n > 0)  //criando laço while
     {
           pow(n, TAM); //usando operador para elevar a base ao expoente
           r = pow(n, TAM);
           cout << "\n O resultado do número elevado a três é : " << r << endl; // retornando a potencia
           break; //parando a execução do laço
     }
     cin.get();
}
