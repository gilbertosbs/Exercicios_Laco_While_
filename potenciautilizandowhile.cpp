#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(void)
{
     int b, e, p;
     cout << "\nDigite o valor da base: ";
     cin >> b;
     setlocale(LC_ALL, "Portuguese");
     while(b >= 0)
     {
          cout << "\nDigite o valor do expoente: ";
          cin >> e;
     while(e >= 0)
     {
          p = pow(b,e);
          cout << "\nA pot�ncia � : " << p << endl;
          break;
     }
     break;
     }
}
