#include <iostream>
 
using namespace std;
 
int main()
{
setlocale(LC_ALL,"");
  int num;
 
  cout << "Введите число: ";
  cin >> num;
  cin.ignore();//ignore(n,'\n') число пропускаемых символов и символ разделения
  cout << "Вы ввели: "<< num <<"\n";
  cin.get(); //выбирает из потока все символы подряд, в отличие от оператора
  
}
