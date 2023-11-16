#include <iostream>
#include <array>
#include <vector>

using namespace std;

#include "program.h"

int testFunkcja(int x)
{
	return 0;
}

vector<string> wektor_str{ "napis", "napis" };

int main(int argc, char* argv[]) {
	::testing::InitGoogleTest(&argc, argv);
	// ewentualny kod

	return RUN_ALL_TESTS();
}

TEST(TestCaseName2, te_same_napisy) {
	ASSERT_EQ(wektor_str.at(0), wektor_str.at(1));
	//EXPECT_EQ(wektor_str.at(0).size(), wektor_str.at(1).size());
}

TEST(TestCaseName1, TestName1) {
	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}

TEST(TestCaseName1, TestName2) {
	EXPECT_EQ(0, 1);
	EXPECT_TRUE(true);
}
