#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <vector>
#include "Money.h"

class Account : public Money {
private:
Money balance;
std::vector<Money> depositBalance;
std::vector<Money> withdrawalBalance;

bool flag = {0};
int count = {0};

public:

Account(int dollars, int cents): Money(dollars, cents){
}
void makeDeposit(Money money);
void makeWithdrawals(Money money);

Money calculateBalance();
friend std::ostream& operator<<(std::ostream& out, const Account& amount);


};

#endif