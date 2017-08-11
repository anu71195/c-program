#include <iostream>

using namespace std;


class strings
{
	
	public:
		string stri;
		strings(string stri)
		{
			this->stri=stri;
		}
	strings operator+(strings s2)
	{
		cout<<this->stri<<s2.stri;	
	}
};

int main()
{
	strings s1("abc"),s2("def");
	s1+s2;
}