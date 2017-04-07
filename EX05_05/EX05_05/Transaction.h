#ifndef TRANSACTION_H_
#define TRANSACTION_H_
#include "Date.h"
#include "Account.h"

class Transaction
{
public:
	Date dateOfTransaction;
	char type;
	double amount;
	double balance;
	string description;

	Transaction();
	Transaction(char newType, double newAmount, double newBalance, string newDescription);
	void setAmount(int number);
	int getAmount();
	void setBalance(double bal);
	int getBalance();


};
#endif