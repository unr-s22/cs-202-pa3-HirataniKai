#include "account.h"
#include <numeric>

void Account::makeDeposit(Money money){

    depositBalance.push_back(money);
    flag = 1;
}

void Account::makeWithdrawals(Money money){

    withdrawalBalance.push_back(money);
    flag = 1;

}

Money Account::calculateBalance(){

    Money m;

    if (flag == 1){
        auto sum_deposits = std::accumulate(depositBalance.begin(), depositBalance.end(), m);

        auto sum_withdrawal = std::accumulate(withdrawalBalance.begin(), withdrawalBalance.end(), m);

        auto finalBalance = sum_deposits - sum_withdrawal;

        finalBalance.allCents();

        std::cout << finalBalance << std::endl;

        flag = 0;

        return finalBalance;
    }

}



/*
Account::Account(Money m){
    deposits.push_back(m);

}

void Account::makeWithdrawals(Money m){
    withdrawals.push_back(m);
    ismoney.push_back(true);

}

void Account::printDetails(Money m){

    ss << "Account Details" << std::endl;
    ss << "--------------------------" << std::endl;
    ss << "Current Balance: " << std::endl;
    ss << m << std::endl;

}

if (ismoney.size()>0){
    ss << "--------------------------" << std::endl;
    ss << "Number of Deposits: ";
    ss << deposits.size()-1 << std::endl;
    for (int i=1; i < deposits.size(); i++){
        ss << "(" << (i) <<") "<< deposits[i] << std::endl;
    }
    ss << "--------------------------" << std::endl;
    ss << "Number of Withdrawals: ";
    ss << withdrawals.size() << std::endl;
    ss << "-------------------------" << std::endl;
    for (int j=0; j < withdrawals.size(); j++){
        ss << "(" << (j+1) <<") "<< withdrawals[j] << std::endl;
    }
}
    std::cout << ss.str() << std::endl;
}
*/