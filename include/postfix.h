///////////////////////////////////////////////////////////////////////
// postfix.h                                                         //
// Вычисление арифметических выражений в целых числах                //
// Автор - Краснов А.А., Нижний Новгород, 2016                       //
///////////////////////////////////////////////////////////////////////

#include "stack.h"
#include <cstring>
#include <sstream> 
#include <locale>
#include <iostream>
#include <algorithm>

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