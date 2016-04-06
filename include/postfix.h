///////////////////////////////////////////////////////////////////////
// postfix.h                                                         //
// Вычисление арифметических выражений                               //
// Автор - Краснов А.А., Нижний Новгород, 2016                       //
///////////////////////////////////////////////////////////////////////

#include "stack.h"
#include <cstring>
#include <sstream> 
#include <locale>
#include <iostream>

using namespace std;

class Postfix
{
	string s;
public:
	Postfix(string = "");
	string ConvertToPolish();      // перевод инфиксной формы в постфиксную
    double Result();               // подсчёт результата 
private:
	void Error();                  // проверка на правильность выражения
	int IsOperator(char с);        // проверка на операцию
	int GetOperationPrt(char с);   // определение приоритета операции
};