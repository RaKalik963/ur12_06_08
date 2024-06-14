#include <iostream>
#include <ctime>
using namespace std;

void generateNumber(int secret[]) {
    srand(time(0));
    for (int i = 0; i < 4; ++i) {
        secret[i] = rand() % 10;
    }
}

void getUserGuess(int guess[]) {
    
    for (int i = 0; i < 4; ++i) {
        cout << "Enter your guess (enter 1 number ): ";
        cin >> guess[i];
    }
}

void countBullsAndCows(int secret[], int guess[], int& bulls, int& cows) {
    bulls = cows = 0;
    bool secretDigitUsed[4] = { false };
    bool guessDigitUsed[4] = { false };

    for (int i = 0; i < 4; ++i) {
        if (secret[i] == guess[i]) {
            bulls++;
            secretDigitUsed[i] = true;
            guessDigitUsed[i] = true;
        }
    }

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (i != j && !secretDigitUsed[i] && !guessDigitUsed[j] && secret[i] == guess[j]) {
                cows++;
                secretDigitUsed[i] = true;
                guessDigitUsed[j] = true;
            }
        }
    }
}

void playGame(int secret[], int attempts) {
    int guess[4];
    int bulls = 0, cows = 0;

    getUserGuess(guess);
    countBullsAndCows(secret, guess, bulls, cows);

    if (bulls == 4) {
        cout << "Congratulations! You've guessed the number in " << attempts << " attempts." << endl;
    }
    else {
        cout << "correct num = " << bulls << ", correct but in the wrong place " << cows << endl;
        playGame(secret, attempts + 1);
    }
}

int main() {
    int secret[4];
    generateNumber(secret);

    cout << "Welcome to the game of Bulls and Cows!" << endl;
    playGame(secret, 1);

    return 0;
}
