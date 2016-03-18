#include "postfix.h"
int main()
{
	setlocale(LC_ALL, "Russian");
	try
	{
		cout << "\t\t***�� 3. ���������� �������������� ���������***\n\n";
		cout << "������� �����:"<< endl;
		cout << "1) ��������� ������ ��������� ��� ��������" << endl
			<< "2) ��������� ������ ����� ����� (������������� � ��� �����)" << endl
			<< "3) ���������� ��������: +, -, /, *, ^" << endl
			<< "4) � ����� ��������� �������� ���� '='(�� �����������)" << endl << endl;
		cout << "������� ���������:"<< endl;
		Postfix Convertor;
		string Expression;
		cin >> Expression;
		string PolishExpression = Convertor.ConvertToPolish(Expression);
		double Rez = Convertor.Result(PolishExpression);
		cout << "��������� � ��������� ������: " << Expression << endl;
		cout << "��������� � �������� �������� ������: " << PolishExpression << endl;
		cout << "��������� ���������: " << Rez << endl;
		return 0;
	}
	catch (const char* error)
	{
		cout<<error<<endl;
	}
}
