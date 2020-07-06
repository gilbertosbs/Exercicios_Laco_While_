#include <iostream>
#include <iomanip>
#include <math.h> //importando bibliotecas
using namespace std;
int main(void)
{
     int b, e, p; //definindo o tipo da variável
     cout << "\nDigite o valor da base: ";
     cin >> b; //lendo base digitado pelo usuário
     setlocale(LC_ALL, "Portuguese");
     while(b >= 0) //criando laço while
     {
          cout << "\nDigite o valor do expoente: ";
          cin >> e; //lendo expoente
     while(e >= 0)
     {
          p = pow(b,e); // operador para potenciação atribuido a p
          cout << "\nA potência é : " << p << endl; // apresentando potenciação
          break;  // laço para parar a execução do laço
     }
     break;
     }
}
