#include<string>
using namespace std;

class Account
{
public:
	explicit Account(int money) : balance_(money)
	{

	}

	int getBalance()
	{
		return balance_;
	}

	void deposit(int money)
	{
		balance_ += money;
	}

	void Withdraw(int money)
	{
		balance_ -= money;
	}

	void SetInterest(int interest)
	{
		this->interest_ = interest;
	}



	void setBankInterest(string bank)
	{
		if(bank == "WOORI")
		{
			interest_ = 1;
		}
		else if(bank == "KB")
		{
			interest_ = 4;
		}
		else if(bank == "NH")
		{
			interest_ = 7;
		}
	}

	int setCompoundInterset(void)
	{
		balance_ = balance_ * (1 + 0.005);
	}

	int GetBalanceByInterest(int balance)
	{
		return balance * (100 + interest_) / 100;
	}

	void ApplyInterest()
	{
		balance_ = GetBalanceByInterest(balance_);
	}

	int PredictPrice(int i)
	{
		int result = balance_;
		for(int t = 0; t < i; t++)
		{
			result = GetBalanceByInterest(result);
		}
		return result;
	}

private:
	int balance_;
	int interest_;
};