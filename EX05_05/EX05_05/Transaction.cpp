#include "Transaction.h"


Transaction::Transaction() {}

Transaction::Transaction(char newType, double newAmount, double newBalance, string newDescription) {
	type = newType;
	amount = newAmount;
	balance = newBalance;
	description = newDescription;
}

void Transaction::setAmount(int number) {
	amount = number;
}

int Transaction::getAmount() {
	return amount;
}

void Transaction::setBalance(double bal) {
	balance = bal;
}

int Transaction::getBalance() {
	return balance; 
}