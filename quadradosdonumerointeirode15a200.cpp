#include <iostream> //importando  bibliotecas
#include <iomanip>
#include <cmath>
using namespace std;
int main(void)
{
     setlocale(LC_ALL, "Portuguese");
     int i, r; //definindo variaveis
     i = 15;
     while(i >= 15) //criando o la�o while
     {
          r = pow(i, 2);
          cout <<"\n I � menor ou igual a 200" ;
          cout << "\n R : " << r;
          cin.get();
     }
}
