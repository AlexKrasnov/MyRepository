#include "stack.h"
#include <cstring>
#include <sstream> 
#include <locale>
#include <iostream>
using namespace std;

class Postfix
{
public:
	string ConvertToPolish(string input); // ������� ��������� ����� � �����������
    double Result(string input);          // ������� ���������� 
//private:
	int IsOperator(char �);               // �������� �� ��������
	int GetOperationPrt(char �);          // ����������� ���������� ��������
};