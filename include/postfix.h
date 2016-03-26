#include "stack.h"
#include <cstring>
#include <sstream> 
#include <locale>
#include <iostream>
using namespace std;

class Postfix
{
public:
	string ConvertToPolish(string input); // перевод инфиксной формы в постфиксную
    double Result(string input);          // подсчёт результата 
//private:
	int IsOperator(char с);               // проверка на операцию
	int GetOperationPrt(char с);          // определение приоритета операции
};