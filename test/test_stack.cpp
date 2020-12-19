#include "stacklist.h"

#include "../gtest/gtest.h"

TEST(TStackList, can_create_steck_with_positive_length)
{
  ASSERT_NO_THROW(TStackList<int> bf);
}

TEST(TStackList, empty_true)
{
  TStackList<int> A;
  ASSERT_EQ(A.IsEmpty(), true);
}

TEST(TStackList, empty_false)
{
  TStackList<int> A;
  A.Push(3423);
  ASSERT_EQ(A.IsEmpty(), false);
}

TEST(TStackList, push_and_top_first_element)
{
  TStackList<int> A;
  A.Push(1234);
  ASSERT_EQ(A.Get(), 1234);
}

TEST(TStackList, push_and_top_more_then_first_element)
{
  TStackList<int> A;
  A.Push(1234);
  A.Push(-2);
  ASSERT_EQ(A.Get(), -2);
}

TEST(TStackList, Get_is_work)
{
  TStackList<int> A;
  A.Push(1234);
  A.Push(-2);
  ASSERT_EQ(A.Get(), -2);
}

TEST(TStackList, Get_in_empty_stack)
{
  TStackList<int> A;
  ASSERT_ANY_THROW(A.Get());
}

TEST(TStackList, can_push)
{
	TStackList<int> S;
	ASSERT_NO_THROW(S.Push(1));
}

TEST(TStackList, can_Get)
{
	TStackList<int> S;
	S.Push(1);
	ASSERT_NO_THROW(S.Get());
}

TEST(TStackList, can_push_and_pull_many_times)
{
	TStackList<int> S;
	S.Push(1);
	S.Push(2);
	S.Push(3);
	EXPECT_EQ(3, S.Get());
	EXPECT_EQ(2, S.Get());
	EXPECT_EQ(1, S.Get());
}

TEST(TStackList, can_not_pull_from_empty_stack)
{
	TStackList<int> S;
	ASSERT_ANY_THROW(S.Get());
}

TEST(TStackList, can_use_operator_equal)
{
	TStackList<int> S;
	S.Push(1);
	S.Push(2);
	S.Push(3);

	TStackList<int> S2;
	S2 = S;
	EXPECT_EQ(S.Get(), S2.Get());
	EXPECT_EQ(S.Get(), S2.Get());
}