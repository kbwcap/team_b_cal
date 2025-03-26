#include "gmock/gmock.h"


class Cal {
public:
	int GetSum(int a, int b) {
		return  a + b;
	}

};

TEST(TEAMB, test_add) {
	Cal cal;
	int ret = cal.GetSum(1, 1);
	EXPECT_EQ(ret, 2);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}