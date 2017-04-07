#ifndef ACCOUNT_H_
#define ACCOUNT_H_
#include <string>
#include <vector>
#include "Transaction.h"
using namespace std;

class Account
{
private:
	int id;
	double balance;
	string name;

public:
	static double annualInterestRate;
	vector<Transaction> transactions;

	Account(string Name, int Id, double Balance, double AnnualInterestRate);
	Account(int _id, double _balance, double _annualInterestRate);
	Account();
	void setID(int ID);
	int getID();
	void setBalance(double bal);
	double getBalance();
	void setAnnualInterestRate(double rate);
	double getAnnualInterestRate();
	double getMonthlyInterestRate();
	void withdraw(double amount);
	void deposit(double amount);
	string getName();
	int setName(string nam);



};
#endif
