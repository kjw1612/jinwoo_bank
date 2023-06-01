#include "pch.h"
#include "../Project4/cal.cpp"

class AccountFixture:public testing::Test
{
public:
	Account account{ 10000 };
};

TEST_F(AccountFixture, CreateAccountInit10000won) {
	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, Withdraw) {
	account.Withdraw(600);
	EXPECT_EQ(9400, account.getBalance());
}

TEST_F(AccountFixture, InterrestFive) {
	account.SetInterest(5);
	account.ApplyInterest();
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, PredictPrice) {
	account.SetInterest(10);
	int ret = account.PredictPrice(3);
	EXPECT_EQ(13310, ret);
}