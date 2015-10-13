#ifndef CARD_H
#define CARD_H
#include <string>
#include <vector>
using namespace std;
class Card {
private:
	char suite;
	string value;
	int total;
public:
	void setSuite();
	char getSuite();
	int getTotal();
	void setValue();
	string getValue();
	void setDisplay(Card);
	void dealerStart(Card);
	void displayCards(Card, Card);
	void displayCards(Card, Card, Card);
	void displayCards(Card, Card, Card, Card);
	void displayCards(Card, Card, Card, Card, Card);
};
#endif 
