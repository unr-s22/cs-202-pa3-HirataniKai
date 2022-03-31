#include "account.h"
#include <numeric>

Account::Account(int d, int c){
    balance.setBalance(d,c);
}

void Account::makeDeposit(Money money){

    depositBalance.push_back(money);
    flag = 1;
}

void Account::makeWithdrawals(Money money){

    withdrawalBalance.push_back(money);
    flag = 1;

}

void Account::calculateBalance(){

    if (flag == 1){
        Money sum_deposits;
        for(Money a : depositBalance)
        {
            sum_deposits + a;
        }
        Money sum_withdrawal;
        for(Money b : withdrawalBalance)
        {
            sum_deposits - b;
        }
        
        balance + sum_deposits;

        balance - sum_withdrawal;

        flag = 0;

    }
}

std::ostream& operator<<(std::ostream& out, Account obj)
{
    obj.calculateBalance();

    out <<"Account Details\nCurrent Balance: "<<obj.balance<<"\nNumber of Deposits: "<<obj.depositBalance.size()<<std::endl;
    int count =0;
    for(Money g : obj.depositBalance)
    {
        count++;
        out<<"("<<count<<") "<<g<<std::endl;
    }
    out<<"\nNumber of Withdrawls: "<<obj.withdrawalBalance.size()<<std::endl;
    int iter=0;
    for(Money h : obj.withdrawalBalance)
    {
        iter++;
        out<<"("<<iter<<") "<<h<<std::endl;
    }
    return out;
}

/*
std::cout << account << std::endl;

// this code should print
Account Details
--------------------------
Current Balance:$100.55
--------------------------
Number of Deposits: 3
--------------------
(1) $100.33
(2) $100.33
(3) $100.33
--------------------------
Number of Withdrawals: 1
--------------------------
(1) $200.44
----
*/
