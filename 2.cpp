#include <iostream>
 
using namespace std;
 
int main()
{
setlocale(LC_ALL,"");
  int num;
 
  cout << "������� �����: ";
  cin >> num;
  cin.ignore();//ignore(n,'\n') ����� ������������ �������� � ������ ����������
  cout << "�� �����: "<< num <<"\n";
  cin.get(); //�������� �� ������ ��� ������� ������, � ������� �� ���������
  
}
