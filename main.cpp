
#include "Money.h"
#include "account.h"

int main(){
    Account a(300,23);
    std::cout<<a<<std::endl;
    a.makeDeposit(Money(200,0));
    a.makeDeposit(Money(300,24));
    a.makeDeposit(Money(501,22));
    std::cout<<a<<std::endl;
    a.makeWithdrawals(Money(300,10));
    a.makeWithdrawals(Money(201,34));
    std::cout<<a<<std::endl;

    Money m(100,10);
    Money n(200,20);
    Money o(100,10);

    if(m < n){
     std::cout<<"m<n"<<std::endl;
    }else 
    {
        std::cout<<"no"<<std::endl;
    }

    if(n > m){
     std::cout<<"n>m"<<std::endl;
    }else 
    {
        std::cout<<"no"<<std::endl;
    }

    if(m == o){
     std::cout<<"m=o"<<std::endl;
    }else 
    {
        std::cout<<"no"<<std::endl;
    }

    if(m != n){
     std::cout<<"m!=n"<<std::endl;
    }else 
    {
        std::cout<<"no"<<std::endl;
    }
    return 0;
}

/*
In your `main` function in `main.cpp`,

* Create an account with a starting balance of $300.23
* Print the account to the terminal using the overloaded << operator (i.e., `std::cout << account << std::endl`)
* Deposit into the account, in order, $200.00, $300.24, and $501.22
* Print the account to the terminal. (Verify that the sum is correct)
* Withdraw, in order, $300.10, $201.34 and again print the account to the terminal.
* Write code to verify that your relational operators are working correctly. This is up to you, however, you must have printouts to the console showing that the operations are correct.
** For example, you might write
*/