#include "stack.h"

#include "../gtest/gtest.h"

TEST(TStackList, can_create_steck_with_positive_length)
{
  ASSERT_NO_THROW(TStackList<int> bf(3));
}

TEST(TStackList, empty_true)
{
  TStackList<int> A(2);
  ASSERT_EQ(A.empty(), true);
}

TEST(TStackList, empty_false)
{
  TStackList<int> A(2);
  A.push(3423);
  ASSERT_EQ(A.empty(), false);
}

TEST(TStackList, push_and_top_first_element)
{
  TStackList<int> A(5);
  A.push(1234);
  ASSERT_EQ(A.top(), 1234);
}

TEST(TStackList, push_and_top_more_then_first_element)
{
  TStackList<int> A(5);
  A.push(1234);
  A.push(-2);
  ASSERT_EQ(A.top(), -2);
}

TEST(TStackList, pop_is_work)
{
  TStackList<int> A(5);
  A.push(1234);
  A.push(-2);
  A.pop();
  ASSERT_EQ(A.top(), 1234);
}

TEST(TStackList, out_of_size_of_stack)
{
  TStackList<int> A(1);
  A.push(1234);
  ASSERT_ANY_THROW(A.push(-2));
}

TEST(TStackList, pop_in_empty_stack)
{
  TStackList<int> A(1);
  ASSERT_ANY_THROW(A.pop());
}

TEST(TStackList, wrong_size)
{
  ASSERT_ANY_THROW(TStackList<int> A(-1));
}