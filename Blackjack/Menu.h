#ifndef MENU_H
#define MENU_H
using namespace std;
class Menu {
private:
public:
	int hitOrStay(int);
	int keepPlaying();
	void blackjack();
	bool bust(int);
	void dealerBlackjack();
};
#endif 