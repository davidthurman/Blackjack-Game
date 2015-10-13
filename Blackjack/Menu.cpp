#include "Menu.h"
#include "Game.h"
#include <iostream>
#include <vector>
using namespace std;
int Menu::hitOrStay(int x) {
	int answer;
	cout << "You are siting on " << x << "." << endl;
	cout << "Would you like to [1]Hit or [2]Stay?" << endl;
	cin >> answer;
	if (answer != 1 && answer != 2) {
		cout << "Invalid input. Please press [1]To Hit or [2]To Stay." << endl;
	}
	return answer;
}
int Menu::keepPlaying() {
	int answer;
	cout << "Would you like to keep playing? [1]Yes [2]No" << endl;
	cin >> answer;
	if (answer != 1 && answer != 2) {
		cout << "Invalid input. Please press [1]Yes or [2]No." << endl;
	}
	return answer;
}
void Menu::blackjack() {
	cout << "Congradulations you got Blackjack!" << endl;
}
void Menu::dealerBlackjack() {
	cout << "The dealer got Blackjack!" << endl;
}
bool Menu::bust(int x) {
	if (x > 21) {
		cout << "Sorry! You busted." << endl;
		return true;
	}
	return false;
}