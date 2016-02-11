#include "postfix.h"
#include <gtest.h>

TEST(Postfix, test_name1)
{
	ASSERT_NO_THROW(Postfix P);
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