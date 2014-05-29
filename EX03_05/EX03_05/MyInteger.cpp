#include<iostream>
class MyInteger
{
private:
	int number;

public:
	const int getnumber()
	{
		return number;
	}

	MyInteger(int new_number)
	{
		new_number = number;
	}

	const bool isPrime() 
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

	const bool isEven() 
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

	const bool equals(int anotherNum) 
	{
		return number == anotherNum;
	}

	const bool equals(const MyInteger& l)
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