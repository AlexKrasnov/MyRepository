#include "postfix.h"
#include <gtest.h>

TEST(Stack, can_create_stack_with_positive_length)
{
	ASSERT_NO_THROW (Stack<int> A(5));
}

TEST(Stack, throws_when_create_Stack_with_negative_length)
{
	ASSERT_ANY_THROW(Stack<int> A(-2));
}

TEST(Stack, throws_when_create_Stack_with_very_big_length)
{
	ASSERT_ANY_THROW(Stack<int> A(51));
}

TEST(Stack, can_get_length)
{
	Stack<int> A(3);
	EXPECT_EQ(3, A.getSize());
}

TEST(Stack, can_get_top)
{
	Stack<int> A(2);
	EXPECT_EQ(-1, A.getTop());
}

TEST(Stack, can_get_top_2)
{
	Stack<double> A(2);
	A.push(1.5);
	A.pop();
	EXPECT_EQ(-1, A.getTop());
}

TEST(Stack,can_push)
{
	Stack<int> A(5);
	ASSERT_NO_THROW(A.push(1));
}

TEST(Stack,can_pop)
{
	Stack<char> A(5);
	A.push('a');
	ASSERT_NO_THROW(A.pop());
}

TEST(Stack,can_push_and_pop_right)
{
	Stack<int> A(5);
	A.push(5);
	EXPECT_EQ(5, A.pop());
}

TEST(Stack,can_look_right)
{
	Stack<char> A(5);
	A.push('s');
	EXPECT_EQ('s', A.look());
}

TEST(Stack, throws_when_full)
{
	Stack<bool> A(2);
	A.push(true);
	A.push(false);
	ASSERT_ANY_THROW(A.push(true));
}
TEST(Stack, throws_when_free)
{
	Stack<int> A(2);
	ASSERT_ANY_THROW(A.pop());
}

TEST(Stack, compare_stack_full_return_true)
{
	Stack<float> S(2);
	S.push(1.5);
	S.push(0.5);
	EXPECT_EQ(true,S.getTop()>=S.getTop());
}

TEST(Stack, compare_stack_empty_return_true)
{
	Stack<int> S(2);
	EXPECT_EQ(true,S.getTop()<0);
}

//--------------------------------------------------------------

TEST(Postfix, test_name1)
{
	Postfix P;
	string s = "1";
	ASSERT_NO_THROW(P.ConvertToPolish(s));
	double rez = P.Result(P.ConvertToPolish(s));;
	EXPECT_EQ(rez,1);
}

TEST(Postfix, test_name2)
{
	Postfix P;
	string s = "3+4*2/(1-5)^2=";
	ASSERT_NO_THROW(P.ConvertToPolish(s));
}

TEST(Postfix, test_name3)
{
	Postfix P;
	string s = "3+4*2/(1-5)^2";
	ASSERT_NO_THROW(P.ConvertToPolish(s));
}

TEST(Postfix, test_name4)
{
	Postfix P;
	string s1 = "3+4*2/(1-5)^2";
	string s2 = "3 4 2 * 1 5 - 2 ^ / + ";
	EXPECT_EQ(s2,P.ConvertToPolish(s1));
}

TEST(Postfix, test_name5)
{
	Postfix P;
	string s1 = "3+4*2/(1-5)^2=";
	string s2 = "3 4 2 * 1 5 - 2 ^ / + ";
	EXPECT_EQ(s2,P.ConvertToPolish(s1));
}

TEST(Postfix, test_name6)
{
	Postfix P;
	string s = "3+4*2/(1-5)^2=";
	double rez = P.Result(P.ConvertToPolish(s));;
	EXPECT_EQ(rez,3.5);
}

TEST(Postfix, test_name7)
{
	Postfix P;
	string s = "(((999-99+100)*10)^(1/2))/10";
	double rez = P.Result(P.ConvertToPolish(s));;
	EXPECT_EQ(rez,10);
}

TEST(Postfix, test_name8)
{
	Postfix P;
	string s = "(7-";
	ASSERT_ANY_THROW(P.ConvertToPolish(s));
}

TEST(Postfix, test_name9)
{
	Postfix P;
	string s = "--6";
	ASSERT_ANY_THROW(P.ConvertToPolish(s));
}

TEST(Postfix, test_name10)
{
	Postfix P;
	string s = "34++23";
	ASSERT_ANY_THROW(P.ConvertToPolish(s));
}

TEST(Postfix, test_name11)
{
	Postfix P;
	string s = "!$&";
	ASSERT_ANY_THROW(P.ConvertToPolish(s));
}

TEST(Postfix, test_name12)
{
	Postfix P;
	string s = "- ";
	ASSERT_ANY_THROW(P.ConvertToPolish(s));
}

TEST(Postfix, test_name13)
{
	Postfix P;
	string s = "5/0";
	ASSERT_NO_THROW(P.ConvertToPolish(s));
	EXPECT_EQ("5 0 / ",P.ConvertToPolish(s));
	ASSERT_ANY_THROW(P.Result(P.ConvertToPolish(s)));
}

TEST(Postfix, test_name14)
{
	Postfix P;
	string s = "-40-(-50)";
	ASSERT_NO_THROW(P.ConvertToPolish(s));
}

TEST(Postfix, test_name15)
{
	Postfix P;
	string s = "-40-(-50)";
	ASSERT_NO_THROW(P.Result(P.ConvertToPolish(s)));
}

TEST(Postfix, test_name16)
{
	Postfix P;
	string s = "-40-(-50)";
	EXPECT_EQ(10, P.Result(P.ConvertToPolish(s)));
}