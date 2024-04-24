#include <iostream>
using namespace std;
int main() {
  int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, resultado;
  cout << "Digite os nove primeiro números do seu CPF separadamente: ";
  cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7 >> num8 >> num9;
  resultado = (num1 * 10) + (num2 * 9) + (num3 * 8) +(num4 * 7) + (num5 * 6) + (num6 * 5) + (num7 * 4) + (num8 * 3) + (num9 * 2);
  resultado = resultado % 11;
  if (resultado < 2) {
    num10 = 0;
  } else {
    num10 = 11 - resultado;
  }
  resultado = (num1 * 11) + (num2 * 10) + (num3 * 9) + (num4 * 8) + (num5 * 7) + (num6 * 6) + (num7 * 5) + (num8 * 4) + (num9 * 3) + (num10 * 2);
  resultado = resultado % 11;
  if (resultado < 2) {
    num11 = 0;
  } else {
    num11 = 11 - resultado;
  }
  cout << "Seu CPF é: " << num1 << num2 << num3 << "." << num4 << num5 << num6 << "." << num7 << num8 << num9 << "-" << num10 << num11 ;
}