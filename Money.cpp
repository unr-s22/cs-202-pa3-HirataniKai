
#include "Money.h"

Money::Money(int doll, int cent)
{
    dollars=doll;
    cents=cent;
}

Money::Money()
{
    dollars=0;
    cents=0;
}

bool Money::operator<(Money obj)
{
    if(dollars>obj.dollars)
    {
        return false;
    }
    else if(dollars<obj.dollars)
    {
        return true;
    }
    else if(cents>obj.cents)
    {
        return false;
    }
    else if(cents<obj.cents)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Money::operator>(Money obj)
{
    if(*this<obj)
    {
        return false;
    }
    else if(*this==obj)
    {
        return false;
    }
    else
    {
        return true;
    }

}

bool Money::operator<=(Money obj)
{
    if(*this>obj)
    {
        return false;
    }
    else
    {
        return true;
    }

}

bool Money::operator>=(Money obj)
{
    if(*this<obj)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool Money::operator!=(Money obj)
{
    if(*this==obj)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool Money::operator==(Money obj)
{
    if(dollars==obj.dollars && cents==obj.cents)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Money::operator +(Money obj)
{
    cents=cents+obj.cents;
    dollars=dollars+obj.dollars;

    if(cents>100)
    {
        dollars+=1;
        cents-=100;
    }

}

void Money::operator -(Money obj)
{
    cents=cents-obj.cents;
    dollars=dollars-obj.dollars;

    if(cents<0)
    {
        dollars-=1;
        cents=100+cents;
    }
}

std::ostream& operator<<(std::ostream& out, const Money& obj)
{
    out <<"$"<<obj.dollars<<"."<<obj.cents;
    return out;
}

