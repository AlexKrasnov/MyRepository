///////////////////////////////////////////////////////////////////////
// sample.cpp                                                        //
// Вычисление арифметических выражений в целых числах                //
// Автор - Краснов А.А., Нижний Новгород, 2016                       //
///////////////////////////////////////////////////////////////////////

#include "postfix.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	try
	{
		cout<<"\t\t***ЛР 3. Вычисление арифметических выражений***\n\n";
		cout<<"Правила ввода:"<< endl;
		cout<<"1) Допустимы только целые числа (отрицательные в том числе)"<<endl
			<<"2) Допустимые операции: +, -, /, *, ^" << endl
			<<"3) В конце выражения допустим знак '='(не обязательно)"<<endl<<endl;
		cout<< "Введите выражение:"<< endl;
		char s[256];
		cin.getline(s,256);
		string Expression(s);
		Postfix Convertor(Expression);
		string PolishExpression = Convertor.ConvertToPolish();
		double Rez = Convertor.Result();
		cout<<"Выражение в инфиксной записи: " << Expression<<endl;
		cout<<"Выражение в обратной польской записи: "<<PolishExpression<<endl;
		cout<<"Результат выражения: "<<Rez<<endl;
		return 0;
	}
	catch (const char* error)
	{
		cout<<error<<endl;
	}
}
//Example: 3+4*2/(1-5)^2 = 3.5