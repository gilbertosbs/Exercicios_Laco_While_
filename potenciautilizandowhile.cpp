#include <iostream>
#include <iomanip>
#include <math.h> //importando bibliotecas
using namespace std;
int main(void)
{
     int b, e, p; //definindo o tipo da vari�vel
     cout << "\nDigite o valor da base: ";
     cin >> b; //lendo base digitado pelo usu�rio
     setlocale(LC_ALL, "Portuguese");
     while(b >= 0) //criando la�o while
     {
          cout << "\nDigite o valor do expoente: ";
          cin >> e; //lendo expoente
     while(e >= 0)
     {
          p = pow(b,e); // operador para potencia��o atribuido a p
          cout << "\nA pot�ncia � : " << p << endl; // apresentando potencia��o
          break;  // la�o para parar a execu��o do la�o
     }
     break;
     }
}
