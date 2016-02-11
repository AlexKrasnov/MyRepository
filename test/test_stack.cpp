#include "stack.h"
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