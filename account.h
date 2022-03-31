#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <vector>
#include "Money.h"

class Account{
private:
Money balance;
std::vector<Money> depositBalance;
std::vector<Money> withdrawalBalance;

bool flag = {0};
int count = {0};

public:

Account(int dollars, int cents);
void makeDeposit(Money money);
void makeWithdrawals(Money money);

void calculateBalance();
friend std::ostream& operator<<(std::ostream& out, Account amount);


};

#endif