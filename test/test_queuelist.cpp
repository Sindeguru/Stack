#include "queuelist.h"

#include "../gtest/gtest.h"

TEST(TQueueList, can_create_steck_with_positive_length)
{
  ASSERT_NO_THROW(TQueueList<int> bf);
}

TEST(TQueueList, empty_true)
{
  TQueueList<int> A;
  ASSERT_EQ(A.IsEmpty(), true);
}

TEST(TQueueList, empty_false)
{
  TQueueList<int> A;
  A.Push(3423);
  ASSERT_EQ(A.IsEmpty(), false);
}
TEST(TQueueList, push_and_top_more_then_first_element)
{
  TQueueList<int> A;
  A.Push(1234);
  A.Push(-2);
  ASSERT_EQ(A.Get(), -2);
}

TEST(TQueueList, Get_is_work)
{
  TQueueList<int> A;
  A.Push(1234);
  A.Push(-2);
  ASSERT_EQ(A.Get(), -2);
}


TEST(TQueueList, Get_in_empty_stack)
{
  TQueueList<int> A;
  ASSERT_ANY_THROW(A.Get());
}

TEST(TQueueList, can_push)
{
	TQueueList<int> Q;
	ASSERT_NO_THROW(Q.Push(1));
}

TEST(TQueueList, can_get)
{
	TQueueList<int> Q;
	Q.Push(1);
	ASSERT_NO_THROW(Q.Get());
}

TEST(TQueueList, can_push_and_pull_many_times)
{
	TQueueList<int> Q;
	Q.Push(1);
	Q.Push(2);
	Q.Push(3);
	EXPECT_EQ(1, Q.Get());
	EXPECT_EQ(2, Q.Get());
	EXPECT_EQ(3, Q.Get());
}

TEST(TQueueList, can_not_pull_from_empty_queue)
{
	TQueueList<int> Q;
	ASSERT_ANY_THROW(Q.Get());
}

TEST(TQueueList, can_use_operator_equal)
{
	TQueueList<int> Q;
	Q.Push(1);
	Q.Push(2);
	Q.Push(3);

	TQueueList<int> Q2;
	Q2 = Q;
	EXPECT_EQ(Q.Get(), Q2.Get());
	EXPECT_EQ(Q.Get(), Q2.Get());
	EXPECT_EQ(Q.Get(), Q2.Get());
}
