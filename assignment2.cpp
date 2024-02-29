#include <iostream>
using  namespace std;
class GuessTheNumber {
private:
    int GeneratedNumber;
    int userGuessedNumber;

public:
    void generateRandomNumber() {
        GeneratedNumber = 50;
    }

    void startGame() {
        cout << "Welcome to Number Guessing Game!\n";
        cout << "Try to guess the number between 1 and 100.\n";

        do {
           cout << "Enter your guess: ";
          cin >> userGuessedNumber;

            if (userGuessedNumber < GeneratedNumber) {
               cout << "The number you entered is too low .Try guessing again!\n";
            } else if (userGuessedNumber > GeneratedNumber) {
               cout << "The number you entered too high .Try guessing again!\n";
            } else {
               cout << "Congratulations! You guessed the number right!\n";
            }
        } while (userGuessedNumber != GeneratedNumber);
    }
};

int main() {
    GuessTheNumber game;

    game.generateRandomNumber();

     game.startGame();

    return 0;
}