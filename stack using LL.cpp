#include<iostream>
using namespace std;

struct node 
{
	int data;
	node* next;


};
class stack
{
private:
	node* top;
	node* temp;
	int x, c;

public:
	stack()
	{
		top = temp = NULL;
		cout << "enter the limit for stack :" << endl;

		cin >> x;
		c = 1;
	}

	void push()
	{
		if (top == NULL)
		{
			top = new node;
			cout << "stack is empty , enter value " << endl;
			cin >> top->data;
			top->next == NULL;
			c++;
			return;
		}
		if (c > x)
		{
			cout << "--stack overflow--" << endl;
			return;
		}
		else
		{
			temp = new node;
			cout << "enter value of the node" << endl;
			cin >> temp->data;
			temp->next = top;
			top = temp;
			c++;
			return;
		}



	}
	void pop()
	{
		if (top == NULL)
		{
			cout << "stack underflow" << endl;
			return;
		}
		temp = top;
		top = top->next;
		delete temp;
		temp = NULL;
		cout << "pop goes the wessel" << endl;
		c--;
		return;
	}


};

int main()
{
	stack s;
	s.push();
	s.pop();







}