pa3: Money.o account.o main.cpp
	g++ -o pa3 Money.o account.o main.cpp

Money.o: Money.h Money.cpp
	g++ -c Money.cpp

account.o: account.h account.cpp
	g++ -c account.cpp

clean:
	rm -rf *o