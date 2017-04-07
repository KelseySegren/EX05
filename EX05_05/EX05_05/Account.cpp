#include <iostream>
#include <string>
#include "Account.h"
#include "Transaction.h"
#include "Date.h"


Account::Account(string Name, int Id, double Balance, double AnnualInterestRate) {
	name = Name;
	id = Id;
	balance = Balance;
	annualInterestRate = AnnualInterestRate;

}

Account::Account(int _id, double _balance, double _annualInterestRate) {
	id = _id;
	balance = _balance;
	annualInterestRate = _annualInterestRate;
}

Account::Account() {
	id = 0;
	balance = 0;
	annualInterestRate = 0;
}

void Account::setID(int ID) {
	id = ID;
}

int Account::getID() {
	return id;
}

void Account::setBalance(double bal) {
	balance = bal;
}

double Account::getBalance() {
	return balance;
}

void Account::setAnnualInterestRate(double rate) {
	annualInterestRate = rate;
}


double Account::getAnnualInterestRate() {
	return annualInterestRate;
}

double Account::getMonthlyInterestRate() {
	double monthlyInterestRate = annualInterestRate / 12;
	return monthlyInterestRate;
}

void Account::withdraw(double amount) {
		balance -= amount;
		Date dateToday(2017, 4, 4);
		Transaction newTransaction('W', amount, balance, "withdrawal made");
		transactions.push_back(newTransaction);
}

void Account::deposit(double amount) {
	balance += amount;
	Date dateToday(2017, 4, 4);
	Transaction newTransaction('D', amount, balance, "deposit made");
	transactions.push_back(newTransaction);
}

int Account::setName(string nam) {
	name = nam;
}

string Account::getName() {
	return name;
}

