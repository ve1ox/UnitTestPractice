/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, isnt_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome("madagascar");
	ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_palindrome)
{
	Practice obj;
	bool actual = obj.isPalindrome("mayamoodybabydoomayam");
	ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_in_order)
{
	Practice obj;
	int fi, se, th;
	bool temp = false;
	fi = 3;
	se = 1;
	th = 2;
	obj.sortDescending(fi, se, th);
	
	if(fi > se && se > th)
		temp = true;
	
	ASSERT_TRUE(temp);
}

TEST(PracticeTest, isnt_in_order)
{
	Practice obj;
	int fi, se, th;
	bool temp = false;
	fi = 5;
	se = -64;
	th = 144;
	obj.sortDescending(fi, se, th);
	
	if(fi > se && se > th)
		temp = true;
	
	ASSERT_FALSE(temp);
}