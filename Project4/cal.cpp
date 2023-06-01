class Account
{
public:
	explicit Account(int money) : balance(money)
	{

	}

	int getBalance()
	{
		return balance;
	}

	void deposit(int money)
	{
		balance += money;
	}

	void Withdraw(int money)
	{
		balance -= money;
	}

private:
	int balance;
};