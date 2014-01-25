// Utilities_Test.cpp : Defines the entry point for the console application.
//
#include "gTest/gtest.h"

int MultiplyThree(int num)
{
	return num * 3;
}

TEST(MultiplyThreeTest, InputNumber) {
	EXPECT_EQ(6, MultiplyThree(2)); // Expect equal to 6 
	EXPECT_EQ(9, MultiplyThree(3)); // Expect equal to 9
	EXPECT_EQ(12, MultiplyThree(4)); // Expect equal to 12
	EXPECT_NE(20, MultiplyThree(5)); // Expect not equal to 20
	EXPECT_NE(25, MultiplyThree(6)); // Expect not equal to 25
}

int main(int argc, char* argv[])
{
	::testing::InitGoogleTest(&argc, argv);
	int i = RUN_ALL_TESTS();
	getchar();
	return i;
}

