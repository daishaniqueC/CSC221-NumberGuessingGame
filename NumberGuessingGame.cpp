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

    cout << "Generated number: " << targetNumber << endl;

    return 0;
}