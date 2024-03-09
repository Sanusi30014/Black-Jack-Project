#include <iostream>
#include "blackjack.h"
using namespace std;

int main() {
    // cards must be represented using the following string array
    string cards[52] = {"AH", "2H", "3H", "4H", "5H", "6H", "7H", "8H", "9H", "10H", "JH", "QH", "KH", "AD", "2D", "3D", "4D", "5D", "6D", "7D", "8D", "9D", "10D", "JD", "QD", "KD", "AS", "2S", "3S", "4S", "5S", "6S", "7S", "8S", "9S", "10S", "JS", "QS", "KS", "AC", "2C", "3C", "4C", "5C", "6C", "7C", "8C", "9C", "10C", "JC", "QC", "KC"};

    // shufflecards(cards, 52); 

    while (true) {
    int cardSize = 52;
    int cardPosition = 0;
    int playerSize = 2;
    string *playerHand = new string [playerSize];
    int playerPoints = 0;
    string playerChoice = "";
    string playAgain = "";

    int dealerSize = 2;
    // string dealerHand[dealerSize];
    string *dealerHand = new string [dealerSize];
    int dealerPoints = 0;

    

    shuffleCards(cards, cardSize);

    for (int i = 0; i < playerSize; i++) {
        playerHand[i] = cards[cardPosition];
        cardPosition++;
        
    }
    system("clear");
    playerPoints = calculatePoints(playerHand, playerSize);
    cout << "Your Hand: " << playerPoints << endl;
    printHand(playerHand, playerSize);


    while (true) {
        cout << "Another card? ([Y] or N): ";
        cin >> playerChoice;

        if (playerChoice == "N") {
            break;
        } else {
            string *temp = new string[playerSize + 1];

            for (int i = 0; i < playerSize; i++) {
                temp[i] = playerHand[i];
            }
            temp[playerSize] = cards[cardPosition];
            cardPosition++;
            playerSize++;

            playerHand = temp;

            system("clear");
            playerPoints = calculatePoints(playerHand, playerSize);
            
            cout << "Your Hand: " << playerPoints << endl;
            printHand(playerHand, playerSize);

            if (playerPoints > 21) {
                break;
            }
        }
    }

    for (int i = 0; i < dealerSize; i++) {
        dealerHand[i] = cards[cardPosition];
        cardPosition++;
    }

    dealerPoints = calculatePoints(dealerHand, dealerSize);

    while (true) {
        if (dealerPoints > 17) {
            break;
        } else {
            string *temp2 = new string[dealerSize + 1];

            for (int i = 0; i < dealerSize; i++) {
       
                temp2[i] = dealerHand[i];
            }
            temp2[dealerSize] = cards[cardPosition];
            cardPosition++;
            dealerSize++;

            dealerHand = temp2;
            dealerPoints = calculatePoints(dealerHand, dealerSize);

        }

    }

    system("clear");
    playerPoints = calculatePoints(playerHand, playerSize);
    cout << "Your Hand: " << playerPoints << endl;
    printHand(playerHand, playerSize);
    
    cout << endl;

    dealerPoints = calculatePoints(dealerHand, dealerSize);
    cout << "Dealers Hand: " << dealerPoints << endl;
    printHand(dealerHand, dealerSize);

    string output = determineOutcome(playerHand, playerSize, dealerHand, dealerSize);

    cout << output << endl;
    cout << endl;

    cout << "Play again ([Y] or N): "; 
    cin >> playAgain;
    if (playAgain == "N") {
        break;
    }
    } 

    return 0;
}
