#ifndef BLACKJACK_H
#define BLACKJACK_H
#include <ucm_random>
#include <iostream>

// C++ macros for changing background color and text color of the terminal
#define RESET "\033[0m"             // reset terminal
#define WHITE_BG "\033[47m"         // white background
#define RED_CARD "\033[1;47;31m"    // white background + red text color
#define BLACK_CARD "\033[1;47;30m"  // white background + black text color


void printBorder(int size) {
    for (int i = 0; i < size; i++) {
        std::cout << WHITE_BG << "          " << RESET;
        if (i < size - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}


void printTop(std::string card[], int size) {
    for (int i = 0; i < size; i++) {
        if (card[i] == "AH" || card[i] == "AD") {
            std::cout << RED_CARD << "  A       " RESET;
        } else if (card[i] == "2H" || card[i] == "2D") {
            std::cout << RED_CARD << "  2       " RESET;
        } else if (card[i] == "3H" || card[i] == "3D") {
            std::cout << RED_CARD << "  3       " RESET;
        } else if (card[i] == "4H" || card[i] == "4D") {
            std::cout << RED_CARD << "  4       " RESET;
        } else if (card[i] == "5H" || card[i] == "5D") {
            std::cout << RED_CARD << "  5       " RESET;
        } else if (card[i] == "6H" || card[i] == "6D") {
            std::cout << RED_CARD << "  6       " RESET;
        } else if (card[i] == "7H" || card[i] == "7D") {
            std::cout << RED_CARD << "  7       " RESET;
        } else if (card[i] == "8H" || card[i] == "8D") {
            std::cout << RED_CARD << "  8       " RESET;
        } else if (card[i] == "9H" || card[i] == "9D") {
            std::cout << RED_CARD << "  9       " RESET;
        } else if (card[i] == "10H" || card[i] == "10D") {
            std::cout << RED_CARD << "  10      " RESET;
        } else if (card[i] == "JH" || card[i] == "JD") {
            std::cout << RED_CARD << "  J       " RESET;
        } else if (card[i] == "QH" || card[i] == "QD") {
            std::cout << RED_CARD << "  Q       " RESET;
        } else if (card[i] == "KH" || card[i] == "KD") {
            std::cout << RED_CARD << "  K       " RESET;
        } else if (card[i] == "AS" || card[i] == "AC") {
            std::cout << BLACK_CARD << "  A       " RESET;
        } else if (card[i] == "2S" || card[i] == "2C") {
            std::cout << BLACK_CARD << "  2       " RESET;
        } else if (card[i] == "3S" || card[i] == "3C") {
            std::cout << BLACK_CARD << "  3       " RESET;
        } else if (card[i] == "4S" || card[i] == "4C") {
            std::cout << BLACK_CARD << "  4       " RESET;
        } else if (card[i] == "5S" || card[i] == "5C") {
            std::cout << BLACK_CARD << "  5       " RESET;
        } else if (card[i] == "6S" || card[i] == "6C") {
            std::cout << BLACK_CARD << "  6       " RESET;
        } else if (card[i] == "7S" || card[i] == "7C") {
            std::cout << BLACK_CARD << "  7       " RESET;
        } else if (card[i] == "8S" || card[i] == "8C") {
            std::cout << BLACK_CARD << "  8       " RESET;
        } else if (card[i] == "9S" || card[i] == "9C") {
            std::cout << BLACK_CARD << "  9       " RESET;
        } else if (card[i] == "10S" || card[i] == "10C") {
            std::cout << BLACK_CARD << "  10      " RESET;
        } else if (card[i] == "JS" || card[i] == "JC") {
            std::cout << BLACK_CARD << "  J       " RESET;
        } else if (card[i] == "QS" || card[i] == "QC") {
            std::cout << BLACK_CARD << "  Q       " RESET;
        } else if (card[i] == "KS" || card[i] == "KC") {
            std::cout << BLACK_CARD << "  K       " RESET;
        }

        if (i < size - 1) {
           std::cout << " ";
        }

       
    }
    std::cout << std::endl;
}


void printMiddle1(std::string card[], int size) {
    for (int i = 0; i < size; i++) {
        if (card[i] == "AH" || card[i] == "2H" || card[i] == "3H" || card[i] == "4H" || card[i] == "5H" || card[i] == "6H" || card[i] == "7H" || card[i] == "8H" || card[i] == "9H" || card[i] == "10H" || card[i] == "JH" || card[i] == "QH" || card[i] == "KH") {
            std::cout << RED_CARD << "   _  _   " << RESET;
        } else if (card[i] == "AD" || card[i] == "2D" || card[i] == "3D" || card[i] == "4D" || card[i] == "5D" || card[i] == "6D" || card[i] == "7D" || card[i] == "8D" || card[i] == "9D" || card[i] == "10D" || card[i] == "JD" || card[i] == "QD" || card[i] == "KD") {
            std::cout << RED_CARD << "    /\\    " << RESET;
        } else if (card[i] == "AS" || card[i] == "2S" || card[i] == "3S" || card[i] == "4S" || card[i] == "5S" || card[i] == "6S" || card[i] == "7S" || card[i] == "8S" || card[i] == "9S" || card[i] == "10S" || card[i] == "JS" || card[i] == "QS" || card[i] == "KS"){
            std::cout << BLACK_CARD << "    /\\    " << RESET;
        } else if (card[i] == "AC" || card[i] == "2C" || card[i] == "3C" || card[i] == "4C" || card[i] == "5C" || card[i] == "6C" || card[i] == "7C" || card[i] == "8C" || card[i] == "9C" || card[i] == "10C" || card[i] == "JC" || card[i] == "QC" || card[i] == "KC") {
            std::cout << BLACK_CARD << "    __    " << RESET;
        }
            
       if (i < size - 1) {
           std::cout << " ";
       }
    }
    std::cout << std::endl;

}


void printMiddle2(std::string card[], int size) {
     for (int i = 0; i < size; i++) {
        if (card[i] == "AH" || card[i] == "2H" || card[i] == "3H" || card[i] == "4H" || card[i] == "5H" || card[i] == "6H" || card[i] == "7H" || card[i] == "8H" || card[i] == "9H" || card[i] == "10H" || card[i] == "JH" || card[i] == "QH" || card[i] == "KH") {
            std::cout << RED_CARD << "  ( \\/ )  " << RESET;
        } else if (card[i] == "AD" || card[i] == "2D" || card[i] == "3D" || card[i] == "4D" || card[i] == "5D" || card[i] == "6D" || card[i] == "7D" || card[i] == "8D" || card[i] == "9D" || card[i] == "10D" || card[i] == "JD" || card[i] == "QD" || card[i] == "KD") {
            std::cout << RED_CARD << "   /  \\   " << RESET;
        } else if (card[i] == "AS" || card[i] == "2S" || card[i] == "3S" || card[i] == "4S" || card[i] == "5S" || card[i] == "6S" || card[i] == "7S" || card[i] == "8S" || card[i] == "9S" || card[i] == "10S" || card[i] == "JS" || card[i] == "QS" || card[i] == "KS"){
            std::cout << BLACK_CARD << "   /  \\   " << RESET;
        } else if (card[i] == "AC" || card[i] == "2C" || card[i] == "3C" || card[i] == "4C" || card[i] == "5C" || card[i] == "6C" || card[i] == "7C" || card[i] == "8C" || card[i] == "9C" || card[i] == "10C" || card[i] == "JC" || card[i] == "QC" || card[i] == "KC") {
            std::cout << BLACK_CARD << "   (  )   " << RESET;
        }
            
       if (i < size - 1) {
           std::cout << " ";
       }
    }
    std::cout << std::endl;

}


void printMiddle3(std::string card[], int size) {
     for (int i = 0; i < size; i++) {
        if (card[i] == "AH" || card[i] == "2H" || card[i] == "3H" || card[i] == "4H" || card[i] == "5H" || card[i] == "6H" || card[i] == "7H" || card[i] == "8H" || card[i] == "9H" || card[i] == "10H" || card[i] == "JH" || card[i] == "QH" || card[i] == "KH") {
            std::cout << RED_CARD << "   \\  /   " << RESET;
        } else if (card[i] == "AD" || card[i] == "2D" || card[i] == "3D" || card[i] == "4D" || card[i] == "5D" || card[i] == "6D" || card[i] == "7D" || card[i] == "8D" || card[i] == "9D" || card[i] == "10D" || card[i] == "JD" || card[i] == "QD" || card[i] == "KD") {
            std::cout << RED_CARD << "   \\  /   " << RESET;
        } else if (card[i] == "AS" || card[i] == "2S" || card[i] == "3S" || card[i] == "4S" || card[i] == "5S" || card[i] == "6S" || card[i] == "7S" || card[i] == "8S" || card[i] == "9S" || card[i] == "10S" || card[i] == "JS" || card[i] == "QS" || card[i] == "KS"){
            std::cout << BLACK_CARD << "  (____)  " << RESET;
        } else if (card[i] == "AC" || card[i] == "2C" || card[i] == "3C" || card[i] == "4C" || card[i] == "5C" || card[i] == "6C" || card[i] == "7C" || card[i] == "8C" || card[i] == "9C" || card[i] == "10C" || card[i] == "JC" || card[i] == "QC" || card[i] == "KC") {
            std::cout << BLACK_CARD << "  (____)  " << RESET;
        }
            
       if (i < size - 1) {
           std::cout << " ";
       }
    }
    std::cout << std::endl;

}


void printMiddle4(std::string card[], int size) {
     for (int i = 0; i < size; i++) {
        if (card[i] == "AH" || card[i] == "2H" || card[i] == "3H" || card[i] == "4H" || card[i] == "5H" || card[i] == "6H" || card[i] == "7H" || card[i] == "8H" || card[i] == "9H" || card[i] == "10H" || card[i] == "JH" || card[i] == "QH" || card[i] == "KH") {
            std::cout << RED_CARD << "    \\/    " << RESET;
        } else if (card[i] == "AD" || card[i] == "2D" || card[i] == "3D" || card[i] == "4D" || card[i] == "5D" || card[i] == "6D" || card[i] == "7D" || card[i] == "8D" || card[i] == "9D" || card[i] == "10D" || card[i] == "JD" || card[i] == "QD" || card[i] == "KD") {
            std::cout << RED_CARD << "    \\/    " << RESET;
        } else if (card[i] == "AS" || card[i] == "2S" || card[i] == "3S" || card[i] == "4S" || card[i] == "5S" || card[i] == "6S" || card[i] == "7S" || card[i] == "8S" || card[i] == "9S" || card[i] == "10S" || card[i] == "JS" || card[i] == "QS" || card[i] == "KS"){
            std::cout << BLACK_CARD << "    ||    " << RESET;
        } else if (card[i] == "AC" || card[i] == "2C" || card[i] == "3C" || card[i] == "4C" || card[i] == "5C" || card[i] == "6C" || card[i] == "7C" || card[i] == "8C" || card[i] == "9C" || card[i] == "10C" || card[i] == "JC" || card[i] == "QC" || card[i] == "KC") {
            std::cout << BLACK_CARD << "    ||    " << RESET;
        }
            
       if (i < size - 1) {
           std::cout << " ";
       }
    }
    std::cout << std::endl;

}


void printBottom(std::string card[], int size) {
    for (int i = 0; i < size; i++) {
        if (card[i] == "AH" || card[i] == "AD") {
            std::cout << RED_CARD << "       A  " RESET;
        } else if (card[i] == "2H" || card[i] == "2D") {
            std::cout << RED_CARD << "       2  " RESET;
        } else if (card[i] == "3H" || card[i] == "3D") {
            std::cout << RED_CARD << "       3  " RESET;
        } else if (card[i] == "4H" || card[i] == "4D") {
            std::cout << RED_CARD << "       4  " RESET;
        } else if (card[i] == "5H" || card[i] == "5D") {
            std::cout << RED_CARD << "       5  " RESET;
        } else if (card[i] == "6H" || card[i] == "6D") {
            std::cout << RED_CARD << "       6  " RESET;
        } else if (card[i] == "7H" || card[i] == "7D") {
            std::cout << RED_CARD << "       7  " RESET;
        } else if (card[i] == "8H" || card[i] == "8D") {
            std::cout << RED_CARD << "       8  " RESET;
        } else if (card[i] == "9H" || card[i] == "9D") {
            std::cout << RED_CARD << "       9  " RESET;
        } else if (card[i] == "10H" || card[i] == "10D") {
            std::cout << RED_CARD << "      10  " RESET;
        } else if (card[i] == "JH" || card[i] == "JD") {
            std::cout << RED_CARD << "       J  " RESET;
        } else if (card[i] == "QH" || card[i] == "QD") {
            std::cout << RED_CARD << "       Q  " RESET;
        } else if (card[i] == "KH" || card[i] == "KD") {
            std::cout << RED_CARD << "       K  " RESET;
        } else if (card[i] == "AS" || card[i] == "AC") {
            std::cout << BLACK_CARD << "       A  " RESET;
        } else if (card[i] == "2S" || card[i] == "2C") {
            std::cout << BLACK_CARD << "       2  " RESET;
        } else if (card[i] == "3S" || card[i] == "3C") {
            std::cout << BLACK_CARD << "       3  " RESET;
        } else if (card[i] == "4S" || card[i] == "4C") {
            std::cout << BLACK_CARD << "       4  " RESET;
        } else if (card[i] == "5S" || card[i] == "5C") {
            std::cout << BLACK_CARD << "       5  " RESET;
        } else if (card[i] == "6S" || card[i] == "6C") {
            std::cout << BLACK_CARD << "       6  " RESET;
        } else if (card[i] == "7S" || card[i] == "7C") {
            std::cout << BLACK_CARD << "       7  " RESET;
        } else if (card[i] == "8S" || card[i] == "8C") {
            std::cout << BLACK_CARD << "       8  " RESET;
        } else if (card[i] == "9S" || card[i] == "9C") {
            std::cout << BLACK_CARD << "       9  " RESET;
        } else if (card[i] == "10S" || card[i] == "10C") {
            std::cout << BLACK_CARD << "      10  " RESET;
        } else if (card[i] == "JS" || card[i] == "JC") {
            std::cout << BLACK_CARD << "       J  " RESET;
        } else if (card[i] == "QS" || card[i] == "QC") {
            std::cout << BLACK_CARD << "       Q  " RESET;
        } else if (card[i] == "KS" || card[i] == "KC") {
            std::cout << BLACK_CARD << "       K  " RESET;
        }

        if (i < size - 1) {
           std::cout << " ";
        }
       
    }
    std::cout << std::endl;
}


void printHand(std::string card[], int size) {
    printBorder(size);
    printTop(card, size);
    printMiddle1(card, size);
    printMiddle2(card, size);
    printMiddle3(card, size);
    printMiddle4(card, size);
    printBottom(card, size);
    printBorder(size);
    std::cout << std::endl;
}


int calculatePoints(std::string card[], int size) {

    int points = 0;
    int aceCount = 0;
    bool ace = false;

    for (int i = 0; i < size; i++) {
        if (card[i] == "AH" || card[i] == "AD" || card[i] == "AS" || card[i] == "AC") {
            ace = true;
            aceCount++;
        } else if (card[i] == "2H" || card[i] == "2D" || card[i] == "2S" || card[i] == "2C") {
            points += 2;
        } else if (card[i] == "3H" || card[i] == "3D" || card[i] == "3S" || card[i] == "3C") {
            points += 3;
        } else if (card[i] == "4H" || card[i] == "4D" || card[i] == "4S" || card[i] == "4C") {
            points += 4;
        } else if (card[i] == "5H" || card[i] == "5D" || card[i] == "5S" || card[i] == "5C") {
            points += 5;
        } else if (card[i] == "6H" || card[i] == "6D" || card[i] == "6S" || card[i] == "6C") {
            points += 6;
        } else if (card[i] == "7H" || card[i] == "7D" || card[i] == "7S" || card[i] == "7C") {
            points += 7;
        } else if (card[i] == "8H" || card[i] == "8D" || card[i] == "8S" || card[i] == "8C") {
            points += 8;
        } else if (card[i] == "9H" || card[i] == "9D" || card[i] == "9S" || card[i] == "9C") {
            points += 9;
        } else {
            points += 10;
        }
    }

    if (ace == true) {
        for (int i = aceCount; i > 0; i--) {
            if (points + 11 <= 21) {
                points += 11;
            } else if (points + 11 > 21) {
                points +=1;
            }
        }
    }

    return points;
}


void shuffleCards(std::string card[], int size) {

    RNG generator;
    for (int i = 0; i < size; i++) {
    int random_number = generator.get(0, size - 1);
    std::string temp = card[i];    
    card[i] = card[random_number];
    card[random_number] = temp;
    }


}


std::string determineOutcome(std::string playerHand[], int playerSize, std::string dealerHand[], int dealerSize) {

    std::string outCome;
    int playerScore = calculatePoints(playerHand, playerSize);
    int dealerScore = calculatePoints(dealerHand, dealerSize);

    if (playerScore == 21 && playerSize == 2 )  {
            outCome = "You got a blackjack!";
        if (dealerScore == 21 && dealerSize == 2) {
            outCome = "It's a tie!";
        }
    } else if (dealerScore == 21 && dealerSize == 2) {
        outCome = "Dealer got a blackjack!";
    } else if (playerScore == dealerScore && playerScore < 21) {
        outCome = "It's a tie!";
    } else if (playerScore > 21) {
        outCome = "You lose!";
    } else if (dealerScore > 21) {
        outCome = "You win!";
    }  else if (playerScore > dealerScore) {
        outCome = "You win!";
    } else {
        outCome = "You lose!";
    }

    return outCome;
}

#endif