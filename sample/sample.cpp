#include "postfix.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	try
	{
		cout << "\t\t***ЛР 3. Вычисление арифметических выражений***\n\n";
		cout << "Правила ввода:"<< endl;
		cout << "1) Выражение должно вводиться без пробелов" << endl
			<< "2) Допустимы только целые числа (отрицательные в том числе)" << endl
			<< "3) Допустимые операции: +, -, /, *, ^" << endl
			<< "4) В конце выражения допустим знак '='(не обязательно)" << endl << endl;
		cout << "Введите выражение:"<< endl;
		Postfix Convertor;
		string Expression;
		cin >> Expression;
		string PolishExpression = Convertor.ConvertToPolish(Expression);
		double Rez = Convertor.Result(PolishExpression);
		cout << "Выражение в инфиксной записи: " << Expression << endl;
		cout << "Выражение в обратной польской записи: " << PolishExpression << endl;
		cout << "Результат выражения: " << Rez << endl;
		return 0;
	}
	catch (const char* error)
	{
		cout<<error<<endl;
	}
}
