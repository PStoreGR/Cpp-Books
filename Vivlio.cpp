#include "Vivlio.h"

Vivlio::Vivlio(string title, int pages, int price){
	title = " ";
	pages = 0;
	setPrice(0);
}

Vivlio::Vivlio(string title, int pages){
	title = " ";
	setPrice(0);
}

Vivlio::Vivlio(string title){
	title = " ";
}

void Vivlio::setPrice(int temp){
	price = temp;
}

int Vivlio::getPrice(){
	return price;
}

void Vivlio::printOne(){
	cout<<"Title : "<<title<<endl;
}

void Vivlio::printAll(){
	cout<<"\n"<<"Title : "<<title<<"\t"<<"Pages : "<<pages<<"\t"<<"Price : "<<getPrice() <<endl;
}
