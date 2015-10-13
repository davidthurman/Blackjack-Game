#include "Card.h"
#include <string>
#include<iostream>
#include <stdlib.h>     
#include <time.h>  
#include <vector>
using namespace std;
void Card::setSuite(){
	int num;
	srand(time(NULL));
	num = rand() % 4 + 1;
	if (num == 1) {
	suite = 3;
	}
	else if (num == 2) {
		suite = 4;
	}
	else if (num == 3) {
		suite = 5;
	}
	else if (num == 4) {
		suite = 6;
	}
}
char Card::getSuite() {
	return suite;
}
void Card::setValue() {
	int num;

	srand(time(NULL));
	num = rand() % 13 + 1;
	value = std::to_string(num);
	if(value != "11" && value != "12" && value != "13") {
		total = num;
	}
	if (value == "11") {
		value = "J";
		total = 10;
	}
	if (value == "12") {
		value = "Q";
		total = 10;
	}
	if (value == "13") {
		value = "K";
		total = 10;
	}
	if (value == "1") {
		value = "A";
		total = 1;
	}
	
}
string Card::getValue() {
	return value;
}
int Card::getTotal() {
	return total;
}
void Card::setDisplay(Card x) {
	cout << " _____" << endl;
	cout << "|   " << x.suite << x.value << "|" << endl;
	cout << "|     |" << endl;
	cout << "|     |" << endl;
	cout << "|     |" << endl;
	cout << "|     |" << endl;
	cout << " -----" << endl;
}
void Card::dealerStart(Card x) {
	cout << "Dealers Hand: " << endl;
	cout << " _____" << "   " << "  _____" << endl;
	cout << "|   " << x.suite << x.value << "|" << "   " << "|     |" << endl;
	cout << "|     |" << "   " << "|     |" << endl;
	cout << "|     |" << "   " << "|     |" << endl;
	cout << "|     |" << "   " << "|     |" << endl;
	cout << "|     |" << "   " << "|     |" << endl;
	cout << " -----" << "   " << "  -----" << endl;
}
void Card::displayCards(Card x1, Card x2) {
	cout << " _____" << "   " << "  _____" << endl;
	cout << "|   " << x1.suite << x1.value << "|" << "   " << "|   " << x2.suite << x2.value << "|" << endl;
	cout << "|     |" << "   " << "|     |" << endl;
	cout << "|     |" << "   " << "|     |" << endl;
	cout << "|     |" << "   " << "|     |" << endl;
	cout << "|     |" << "   " << "|     |" << endl;
	cout << " -----" << "   " << "  -----" << endl;
}
void Card::displayCards(Card x1, Card x2, Card x3) {
	cout << " _____" << "   " << "  _____" << "   " << "  _____" << endl;
	cout << "|   " << x1.suite << x1.value << "|" << "   " << "|   " << x2.suite << x2.value << "|" << "   " << "|   " << x3.suite << x3.value << "|" << endl;
	cout << "|     |" << "   " << "|     |" << "   " << "|     |" << endl;
	cout << "|     |" << "   " << "|     |" << "   " << "|     |" << endl;
	cout << "|     |" << "   " << "|     |" << "   " << "|     |" << endl;
	cout << "|     |" << "   " << "|     |" << "   " << "|     |" << endl;
	cout << " -----" << "   " << "  -----" << "   " << "  -----" << endl;
}
void Card::displayCards(Card x1, Card x2, Card x3, Card x4) {
	cout << " _____" << "   " << "  _____" << "   " << "  _____" << "   " << "  _____" << endl;
	cout << "|   " << x1.suite << x1.value << "|" << "   " << "|   " << x2.suite << x2.value << "|" << "   " << "|   " <<
		x3.suite << x3.value << "|" << "   " << "|   " << x4.suite << x4.value << "|" << endl;
	cout << "|     |" << "   " << "|     |" << "   " << "|     |" << "   " << "|     |" << endl;
	cout << "|     |" << "   " << "|     |" << "   " << "|     |" << "   " << "|     |" << endl;
	cout << "|     |" << "   " << "|     |" << "   " << "|     |" << "   " << "|     |" << endl;
	cout << "|     |" << "   " << "|     |" << "   " << "|     |" << "   " << "|     |" << endl;
	cout << " -----" << "   " << "  -----" << "   " << "  -----" << "   " << "  -----" << endl;
}
void Card::displayCards(Card x1, Card x2, Card x3, Card x4, Card x5) {
	cout << " _____" << "   " << "  _____" << "   " << " _____" << "   " << "  _____" << "   " << "  _____" << endl;
	cout << "|   " << x1.suite << x1.value << "|" << "   " << "|   " << x2.suite << x2.value << "|" << "   " << "|   " <<
		x3.suite << x3.value << "|" << "   " << "|   " << x4.suite << x4.value << "|" << "   " << "|   " << x5.suite << x5.value << "|" << endl;
	cout << "|     |" << "   " << "|     |" << "   " << "|     |" << "   " << "|     |" << "   " << "|     |" << endl;
	cout << "|     |" << "   " << "|     |" << "   " << "|     |" << "   " << "|     |" << "   " << "|     |" << endl;
	cout << "|     |" << "   " << "|     |" << "   " << "|     |" << "   " << "|     |" << "   " << "|     |" << endl;
	cout << "|     |" << "   " << "|     |" << "   " << "|     |" << "   " << "|     |" << "   " << "|     |" << endl;
	cout << " -----" << "   " << "  -----" << "   " << " -----" << "   " << "  -----" << "   " << "  -----" << endl;
}