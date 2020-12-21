#include <iostream>
using namespace std;

class Vivlio{
	private:
		int price;
	
	public:		
		string title;
		int pages;
		
		Vivlio(string, int ,int);
		Vivlio(string, int);
		Vivlio(string);
		
		void setPrice(int);
		int getPrice();
		void printAll();
		void printOne();
};
