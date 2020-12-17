#include "stack.h"

#include "../gtest/gtest.h"

TEST(TStack, can_create_steck_with_positive_length)
{
  ASSERT_NO_THROW(TStack<int> bf(3));
}

TEST(TStack, empty_true)
{
  TStack<int> A(2);
  ASSERT_EQ(A.empty(), true);
}

TEST(TStack, empty_false)
{
  TStack<int> A(2);
  A.push(3423);
  ASSERT_EQ(A.empty(), false);
}

TEST(TStack, push_and_top_first_element)
{
  TStack<int> A(5);
  A.push(1234);
  ASSERT_EQ(A.top(), 1234);
}

TEST(TStack, push_and_top_more_then_first_element)
{
  TStack<int> A(5);
  A.push(1234);
  A.push(-2);
  ASSERT_EQ(A.top(), -2);
}

TEST(TStack, pop_is_work)
{
  TStack<int> A(5);
  A.push(1234);
  A.push(-2);
  A.pop();
  ASSERT_EQ(A.top(), 1234);
}

TEST(TStack, out_of_size_of_stack)
{
  TStack<int> A(1);
  A.push(1234);
  ASSERT_ANY_THROW(A.push(-2));
}

TEST(TStack, pop_in_empty_stack)
{
  TStack<int> A(1);
  ASSERT_ANY_THROW(A.pop());
}

TEST(TStack, wrong_size)
{
  ASSERT_ANY_THROW(TStack<int> A(-1));
}