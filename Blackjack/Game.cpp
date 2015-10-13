#include "Card.h"
#include "Game.h"
#include "Menu.h"
#include <iostream>
#include <vector>
using namespace std;
void Game::run() {
	int keepPlaying = 1;
	bool gameOver = false;
	bool playerDone;
	int runningTotal = 0;
	int dealerTotal = 0;
	int answer;
	int winner = 0;
	while (keepPlaying == 1) {
		gameOver = false;
		playerDone = false;
		runningTotal = 0;
		dealerTotal = 0;
		Menu menu;
		Card yourCards[5];
		Card dealerCards[5];

		dealerCards[0].setSuite();
		dealerCards[0].setValue();
		dealerTotal = dealerTotal + dealerCards[0].getTotal();
		dealerCards[0].dealerStart(dealerCards[0]);

		for (int x = 0; x <= 1; x++) {
			yourCards[x].setSuite();
			yourCards[x].setValue();
			runningTotal = runningTotal + yourCards[x].getTotal();
		}
		cout << "Your Hand: " << endl;
		yourCards[0].displayCards(yourCards[0], yourCards[1]);
		if (runningTotal == 21) {
			menu.blackjack();
			gameOver = true;
			winner = 1;
		}
		if (gameOver == false) {
			answer = menu.hitOrStay(runningTotal);
			if (answer == 2) {
				playerDone = true;
			}
			if (answer == 1) {
				yourCards[2].setSuite();
				yourCards[2].setValue();
				cout << "Your Hand: " << endl;
				yourCards[2].displayCards(yourCards[0], yourCards[1], yourCards[2]);
				runningTotal = runningTotal + yourCards[2].getTotal();
				if (runningTotal == 21) {
					menu.blackjack();
					gameOver = true;
				}
				if (menu.bust(runningTotal) == true) {
					winner = 2;
					gameOver = true;
				}
				if (gameOver == false) {
					answer = menu.hitOrStay(runningTotal);
					if (answer == 2) {
						playerDone = true;
					}
					if (answer == 1) {
						yourCards[3].setSuite();
						yourCards[3].setValue();
						cout << "Your Hand: " << endl;
						yourCards[3].displayCards(yourCards[0], yourCards[1], yourCards[2], yourCards[3]);
						runningTotal = runningTotal + yourCards[3].getTotal();
						if (runningTotal == 21) {
							menu.blackjack();
							gameOver = true;
						}
						if (menu.bust(runningTotal) == true) {
							winner = 2;
							gameOver = true;
						}
						if (gameOver = false) {
							answer = menu.hitOrStay(runningTotal);
							if (answer == 2) {
								playerDone = true;
							}
							if (answer = 1) {
								yourCards[4].setSuite();
								yourCards[4].setValue();
								cout << "Your Hand: " << endl;
								yourCards[4].displayCards(yourCards[0], yourCards[1], yourCards[2], yourCards[3], yourCards[4]);
								runningTotal = runningTotal + yourCards[4].getTotal();
								if (runningTotal == 21) {
									menu.blackjack();
									gameOver = true;
								}
								if (menu.bust(runningTotal) == true) {
									winner = 2;
									gameOver = true;
								}
								playerDone = true;
							}
						}
					}
				}
			}
			if (gameOver == false && playerDone == true) {
				dealerCards[1].setSuite();
				dealerCards[1].setValue();
				cout << "Dealer's hand: " << endl;
				dealerCards[1].displayCards(dealerCards[0], dealerCards[1]);
				dealerTotal = dealerTotal + dealerCards[1].getTotal();
				if (dealerTotal == 21) {
					menu.dealerBlackjack();
					gameOver = true;
				}
				if (gameOver == false && dealerTotal < 17) {
					dealerCards[2].setSuite();
					dealerCards[2].setValue();
					cout << "Dealer's hand: " << endl;
					dealerCards[2].displayCards(dealerCards[0], dealerCards[1], dealerCards[2]);
					dealerTotal = dealerTotal + dealerCards[2].getTotal();
					if (dealerTotal == 21) {
						menu.dealerBlackjack();
						gameOver = true;
					}
					if (gameOver == false && dealerTotal < 17) {
						dealerCards[3].setSuite();
						dealerCards[3].setValue();
						cout << "Dealer's hand: " << endl;
						dealerCards[3].displayCards(dealerCards[0], dealerCards[1], dealerCards[2], dealerCards[3]);
						dealerTotal = dealerTotal + dealerCards[2].getTotal();
						if (dealerTotal == 21) {
							menu.dealerBlackjack();
							gameOver = true;
						}
						if (gameOver == false && dealerTotal < 17) {
							dealerCards[4].setSuite();
							dealerCards[4].setValue();
							cout << "Dealer's hand: " << endl;
							dealerCards[4].displayCards(dealerCards[0], dealerCards[1], dealerCards[2], dealerCards[3], dealerCards[4]);
							dealerTotal = dealerTotal + dealerCards[2].getTotal();
							if (dealerTotal == 21) {
								menu.dealerBlackjack();
								gameOver = true;
							}
						}



					}
					
					
				}
			}
		}
		if (dealerTotal > 21) {
			winner = 1;
		}
		if (dealerTotal <= 21 && runningTotal <= 21) {
			if (dealerTotal == runningTotal || dealerTotal > runningTotal) {
				winner = 2;
			}
			else {
				winner = 1;
			}
		}
		if (winner == 1) {
			cout << "You won!" << endl;
		}
		if (winner == 2) {
			cout << "Dealer won." << endl;
		}
		keepPlaying = menu.keepPlaying();
	}
}