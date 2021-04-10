#include<iostream>
#include<string>
using namespace std;
int sum(int number) //Natural number sum function
{


	if (number > 0)
	{
		cout <<"entry numbers"<< number<<endl;
	    return number+sum(number-1);
	}
	else
		cout << number << endl;
		return number;
}

int fact(int stop) //factorial function
{
	if (stop > 1)
	{
		cout << stop << endl;
		return stop*fact(stop - 1);
	}
	else
	
		return 1;

	}
	
int multiply(int a, int b)//multiplication using addition
{
	if (b > 1)
		return a + multiply(a, b - 1);
	else
		return a;

}

bool elfish(string a) 
{
//	int size;
	//size = a.size();
	int i = 0;
	if (a[i] == 'e' || a[i] == 'l' || a[i] == 'f')
			return i++ && elfish(a);
	
}
void reverse(string s) //reverse function
{
	if (s.length() == 0)
		return;
	reverse(s.substr(1));
	cout << s[0];



}




int main()
{
	int a;
	cout << "Enter the nth term " << endl;
	cin >> a;
	cout << "The final sum is "<<sum(a)<<endl;
    cout <<"---------------------------"<< endl;
	cout << fact(3);
    cout << "---------------------------" << endl;
	cout << multiply(2, 6);
	cout << elfish("hqwwassif") << endl;
	reverse("puppies are cute");

	return 0;
}