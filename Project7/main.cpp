#include "gmock/gmock.h"

class Cal {
 public:
  int GetSum(int a, int b) { return a + b; }
  int getZegop(int a) { return a * a; }
  int getMinus(int a, int b) { return a - b; }

  int getDivide(int a, int b) {
    if (b == 0) return 0;
    return a / b;
  }
  int GetSumSum(int a, int b, int c) { return a + b + c; }
};

TEST(TEAMB, test_add) {
  Cal cal;
  int ret = cal.GetSum(1, 1);
  EXPECT_EQ(ret, 2);
}

TEST(TEAMB, test_zegop) {
    Cal cal;
    int ret = cal.getZegop(3);
    EXPECT_EQ(ret, 9);
}

TEST(TEAMB, test_minus) {
    Cal cal;
    int ret = cal.GetSumSum(3, 4);
    EXPECT_EQ(ret, -1);
}

TEST(TEAMB, test_devide) {
  Cal cal;
  int ret = cal.getDivide(10, 5);
  EXPECT_EQ(ret, 2);
}

TEST(TEAMB, test_addadd) {
  Cal cal;
  int ret = cal.GetSumSum(1, 1, 1);
  EXPECT_EQ(ret, 3);
}

int main() {
  ::testing::InitGoogleMock();
  return RUN_ALL_TESTS();
}