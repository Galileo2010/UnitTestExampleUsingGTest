#include "pch.h"

TEST(myMath, add) {
	std::string str1 = "I love ", str2 = "U";
	EXPECT_EQ(myMath::add(str1, str2), "I love U");
	
	int a = 10, b = 125;
	EXPECT_EQ(myMath::add(a, b), 135);

	double c = 1.25, d = 3.24;
	EXPECT_EQ(myMath::add(c, d), 4.49);
}

TEST(myMath, dec) {
	int a = 10, b = 125;
	EXPECT_EQ(myMath::dec(a, b), -115);

	double c = 1.23, d = 3.24;
	EXPECT_TRUE(myMath::dec(d, c) - 2.01 <= 0.000000001);
}