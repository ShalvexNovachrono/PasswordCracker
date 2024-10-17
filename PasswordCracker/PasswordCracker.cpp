#include <iostream>
#include <string>
#include <random>

using namespace std;

int RandomInt(int MIN, int MAX) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(MIN, MAX);
    return dis(gen);
}

int main()
{
    int secondsInYear = 31536000;
    const int amountAplha = 26;
    const int amountOfNum = 10;

    const int total = amountAplha + amountOfNum;
    const double Combinations = pow(total, 10);
    cout << "Total characters: " << total << endl;
    cout << "Combinations: " << Combinations << endl;
    cout << "Years that it will take is: " << pow(total, 10) / secondsInYear << endl;

 

    char T[total] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

    char Password[10];
    string p = "";

    for (int i = 0; i < Combinations; i++) {
        p = "";
        for (int j = 0; j < 10; j++) {
            Password[j] = T[RandomInt(0, total - 1)];
            p += Password[j];
        }
        cout << i << ") Guess: "<< p << endl;
    }

}
