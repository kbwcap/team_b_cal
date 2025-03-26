#include "gmock/gmock.h"


class Cal {
public:
	int getSum(int a, int b) {
		return  a + b;
	}

	int getGop(int a, int b) {
		return a * b;
	}
};

TEST(TEAMB, test_add) {
	Cal cal;
	EXPECT_EQ(cal.getSum(1, 1), 2);
	EXPECT_EQ(cal.getGop(1, 1), 1);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}