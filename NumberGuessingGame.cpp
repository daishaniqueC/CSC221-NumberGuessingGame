// This progam will generate a random number between 1 and 100 and ask the user to guess the number.

#include <iostream>
#include <random>
using namespace std;

int main ()
{
    const int minNumber = 1;
    const int maxNumber = 100;

    random_device rd;
    mt19937 generator(rd());
    uniform_int_distribution<int> distribution(minNumber, maxNumber);

    int targetNumber = distribution(generator);

    int guess;
    int guessCount = 0;

    do 
    {
        cout << "Enter your guess (1-100): ";
        cin >> guess;
        guessCount++;

        if (guess > targetNumber)
        {
            cout << "Too high, try again." << endl;
        }
        else if (guess < targetNumber)
        {
            cout << "Too low, try again." << endl;
        }
    }
    while (guess != targetNumber);

    if (guessCount == 1)
    {
        cout << "Congratulations!" << " You guessed the number in " << guessCount << " attempt." << endl;
    }
    else 
    {
        cout << "Congratulations!" << " You guessed the number in " << guessCount << " attempts." << endl;
    }

    return 0;
}