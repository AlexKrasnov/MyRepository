#include "postfix.h"

int Postfix::IsOperator(char c)      // �������� �� ��������
{
	if (c=='+' || c=='-' || c=='*' || c=='/' || c=='^' || c=='('|| c==')') return 1;
	else if (c==' ' || c=='=') return 2;
	else return 0;
}

int Postfix::GetOperationPrt(char c)  // ����������� ���������� ��������
{
	switch (c)
	{
	case '(': return 0;
	case ')': return 1;
	case '+': 
	case '-': return 2;
	case '*': 
	case '/': return 3;
	case '^': return 4;
	}
}

string Postfix::ConvertToPolish(string infix)
{
	int len = infix.length();
	string polish;                   // ������ ��� �������� �������� ������
	Stack<char> OperationStack(len); // ���� ��� ����������
	bool var = true;
	int count1(0),count2(0);
	for (int i(0);i<len;i++)         // �������� �� ���������� ����
	{
		// ��������� ���� �� ����������� �������
		if ((!isdigit(infix[i])) && (!IsOperator(infix[i]))) 
			throw "������! ������������ ������" ;
		// ���������: ��������� �� ����� ���� ��� ����
		if (isdigit(infix[i])) var = false; 
		// ���������: ���-�� '(' � ')' ������ ���� �����
		if ((infix[i])=='(') count1++;
		if ((infix[i])==')') count2++;
		// ���������: �������� �� ����� ���� ���� �� ������
		if (strchr("+-/*^", infix[i])!=NULL && strchr("+-/*^", infix[i+1])!=NULL && i<len-1)
			throw "������! �������� �� �����������" ;
	}
	if (var == true) throw "������! ��������� �� �������� ����" ;
	if (count1!=count2) throw "������! �� ����������� ���-�� ������" ;

	for (int i(0);i<len;i++) 
	{
		if ((i==1) && (infix[0]=='-')) polish="-"; // ���� � ������ �����
		if ((IsOperator(infix[i]))==2) continue;   // ���� ������ ��� �����, ����������
		if (isdigit(infix[i]))                     // ���� �����,
		{
			while (!IsOperator(infix[i]))          // ��������� �� �����
			{
				polish+=infix[i++]; 
				if (i==len) break;
			}
			polish.push_back(' ');                 // ��������� ������ ����� �����
			i--;
		}
		if ((IsOperator(infix[i]))==1)             // ���� �������� ��� ������
			if (infix[i] == '(' && infix[i+1] == '-' && i<len-2)  // ���� '-' ����� '('
			{
				i=i+2;
				if (isdigit(infix[i]))
				{
					polish.push_back('-');
					while (!IsOperator(infix[i]))
					{
						polish+=infix[i++]; 
						if (i==len) break;
					}
					polish.push_back(' ');
					//i--;
				}
			}
			else if (infix[i]=='(') OperationStack.push(infix[i]); 
			else if (infix[i]==')') 
			{
				char s = OperationStack.pop();
				while (s != '(')
				{
					polish.push_back(s);
					polish.push_back(' ');
					s=OperationStack.pop();
				}
			}
			else if (i!=0) // ���� �� ����� � ������
			{
				while ((OperationStack.getTop()>-1) && (GetOperationPrt(infix[i])<=GetOperationPrt(OperationStack.look())))
				{
					polish.push_back(OperationStack.pop());
					polish.push_back(' ');
				}
				OperationStack.push(infix[i]);
			}
	}
	//����� ������ �� ���� ��������, ���������� �� ����� ��� ���������� ��� ��������� � ������
	while (OperationStack.getTop()>-1)
	{
		polish.push_back(OperationStack.pop());
		polish.push_back(' ');
	}
	return polish; 
}

double Postfix::Result(string polish)
{
	double res(0);
	int len = polish.length();
	Stack<double> ResultStack(len);
	for (int i(0);i<len;i++) 
	{
		//���� �����, �� ������ ��� ����� � ������� �� ������� �����
		if (isdigit(polish[i])) 
		{
			string str;
			double op;
			while (!IsOperator(polish[i])) 
			{
				str+=polish[i++]; 
				if (i==len) break;
			}
			istringstream(str)>>op;
			ResultStack.push(op); 
			i--;
		}
		// ���� �������� �����
		if (polish[i]=='-' && isdigit(polish[i+1]) && i<len-1)
		{
			i=i+1;
			string str;
			double op;
			while (!IsOperator(polish[i])) 
			{
				str+=polish[i++]; 
				if (i==len) break;
			}
			istringstream(str)>>op;
			ResultStack.push(-op); 
			i--;
		}
		else if (((IsOperator(polish[i]))==1) && (i!=0))
		{
			double op1=ResultStack.pop(); 
			double op2=ResultStack.pop();
			switch (polish[i])
			{ 
			case '+': res = op2 + op1; break;
			case '-': res = op2 - op1; break;
			case '*': res = op2 * op1; break;
			case '/': 
				if (op1!=0)
				{
					res = op2 / op1; break;
				}
				else throw "������� �� ����!";
			case '^': res = pow(op2,op1); break;
			}
			ResultStack.push(res); 
		}
	}
	return ResultStack.look();
}
//Example: 3+4*2/(1-5)^2 = 3.5