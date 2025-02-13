/*
Asignación 2: Suma de dos fracciones
Desteny Hernandez De Juan
github: desteny-hernandez
401-23-3159
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// El propósito de este programa es poder hacer una suma de fracciones y tener el resultado en una fraccion.

int main()
{
  int num1, den1, num2, den2, numSum, denMul;
  cout << "Este programa suma dos fracciones." << endl;

  cout << "Entre el numerador de la 1ra fraccion: ";
  cin >> num1;

  cout << "Entre el denominador de la 1ra fraccion: ";
  cin >> den1;

  cout << "Entre el numerador de la 2da fraccion: ";
  cin >> num2;

  cout << "Entre el denominador de la 1ra fraccion: ";
  cin >> den2;

  numSum = (num1 * den2) + (num2 * den1);
  denMul = den1 * den2;

  cout << "La suma es " << numSum << "/" << denMul << "." << endl;

  return 0;
}
