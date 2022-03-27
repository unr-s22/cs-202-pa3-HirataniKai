
#ifndef Mon
#define Mon

#include<iostream>

class Money
{
    private:
    int dollars;
    int cents;

    public:
    Money(int doll, int cent);
    Money();
    bool operator <(Money obj);
    bool operator >(Money obj);
    bool operator <=(Money obj);
    bool operator >=(Money obj);
    bool operator !=(Money obj);
    bool operator ==(Money obj);
    void operator +(Money obj);
    void operator -(Money obj);
    friend std::ostream& operator<<(std::ostream& out, const Money& amount);

};

/*
Money Class
This class must store the its value in an integer that holds cents. It must include

        * a constructor that takes dollars and cents (in two different arguments, both integers)
        * a default constructor
* overloads of all the relational operators (<,>,<=,>=,!=,==)
* overloads of the math operators + and -
        * an overload of the stream operator << to allow values to be printed like this:
*/


#endif