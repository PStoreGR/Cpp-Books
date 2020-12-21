#include "Vivlio.h"

int main(){
	string title;
	int pages, price;
	
	Vivlio book1(title), book2(title, pages, price), book3(title, price);
	
	
	book1.printOne();
	book2.printAll();
		
	book1.pages = book2.pages = book3.pages = 100;
	
	book1.printAll();
	book2.printAll();
	book3.printAll();
	
	return 0;
}
