#include<iostream>
using namespace std;
class MyInteger
{
private:
	int number;

public:
	int getnumber() const
	{
		return number;
	}

	MyInteger(int new_number)
	{
		new_number = number;
	}

	bool isPrime() const
	{
		return isPrime(number);
	}

	static bool isPrime(const MyInteger& l)
	{
		return isPrime(l.getnumber());
	}

	static bool isPrime(int num)
	{
		if ((num == 1) || (num == 2))
		{
			return true;
		}

		for (int i = 2; i <= num / 2; i++)
		{
			if (num % i == 0)
				return false;
		}

		return true;
	}

	bool isEven() const 
	{
		return isEven(number);
	}

	static bool isEven(int n)
	{
		return n % 2 == 0;
	}

	static bool isEven(const MyInteger& n)
	{
		return isEven(n.getnumber()); 
	}

	bool equals(int anotherNum) const 
	{
		return number == anotherNum;
	}

	bool equals(const MyInteger& l) const
	{
		return number == l.getnumber(); //why is the 'l' underlined?
	}
};

int main(){
	MyInteger V(6);
	
	cout << "Is V even?" << V.isEven() << endl;
	cout << "Is V prime?" << V.isPrime() << endl;
	return 0;
}