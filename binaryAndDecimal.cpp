// Thomas Le
// Converting from binary to decimal and vice versa
// From base2 -> base10 uses power series  
// and from base10 -> base10 uses successive subtraction of 2 to the highest degree until 0
#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <cctype>
using namespace std;

string randomDecimal();
string randomBinary();
string binaryToDecimal(int binary);
string decimalToBinary(int decimal);

int main()
{

    srand(time(nullptr));

    string continueQuiz = "y";

    while (continueQuiz == "y")
    {
        int bases[2] = {10, 2};

        int base1 = bases[(rand() % 2)];
        int base2;
        do
        {
            base2 = bases[(rand() % 2)];
        } while (base1 == base2);
        cout << "Convert from base " << base1 << " to base " << base2 << endl;
        // cout << test;

        if (base1 == 2)
        {
            string binaryNumber = randomBinary();
            string convertedNumber = binaryToDecimal(stoi(binaryNumber));
            int userInput;
            cout << binaryNumber << endl
                 << "Enter answer: " << endl;
            cin >> userInput;
            cout << endl;
            if (userInput == stoi(convertedNumber))
            {
                cout << "Yay that's right!\n";
            }
            else
            {
                cout << "That's wrong! D:\n";
            }
        }
        else if (base1 == 10)
        {
            string decimalNumber = randomDecimal();
            string convertedNumber = decimalToBinary(stoi(decimalNumber));
            int userInput;
            cout << decimalNumber << endl
                 << "Enter answer: " << endl;
            cin >> userInput;
            cout << endl;
            if (userInput == stoi(convertedNumber))
            {
                cout << "Yay that's right!\n";
            }
            else
            {
                cout << "That's wrong! D:\n";
            }
        }
        cout << "Continue quizzing? (y/n)\n";
        cin >> continueQuiz;
        cout << endl;
    }
    cout << "Ok bye..";

    return 0;
}

string randomBinary()
{
    string finalNumber;

    int numberSize = (rand() % 6) + 4;
    for (int i = 0; i < numberSize; i++)
    {
        int randomNum = rand() % 2;
        string digit = to_string(randomNum);
        finalNumber += digit;
    }
    return finalNumber;
}
string randomDecimal()
{
    string finalNumber;

    int numberSize = ((rand() % 3) + 1);
    for (int i = 0; i < numberSize; i++)
    {
        int randomNum = ((rand() % 10) + 1);
        string digit = to_string(randomNum);
        finalNumber += digit;
    }

    if (finalNumber == "000")
    {
        finalNumber = "1";
    }
    return finalNumber;
}
string binaryToDecimal(int binary)
{
    int finalDecimal = 0;
    vector<int> binaryString;

    // Puts binary number into vector
    // Takes last digit of binary number and adds it to vector
    // Then removes last digit and does this until run out of digits
    // Binary number is then reversed inside vector, 1010 --> 01010
    while (binary > 0)
    {
        int digit = binary % 10;
        binaryString.push_back(digit);
        binary /= 10;
    }

    // Power series where each digit of binaryString is multiplied
    // by 2 (base of binary) to the power of i
    // (multiply by i because of the binary number being reversed)
    int n = binaryString.size() - 1;
    for (int i = 0; i <= n; i++)
    {
        finalDecimal += binaryString[i] * pow(2, i);
    }
    return to_string(finalDecimal);
}
string decimalToBinary(int decimal)
{
    // Takes highest power using log since log_base2 (number) = x
    // gives you 2^x = number giving you highest power of that number
    int highestPower = log2(decimal);
    string finalBinary;

    // Iterates from highest power of 2 and subtracting from
    // number all the way to 0
    // Adding a digit of 1 for each power and 0 for powers inbetween
    for (int i = highestPower; i >= 0; i--)
    {
        if (decimal >= pow(2, i))
        {
            finalBinary += "1";
            decimal -= pow(2, i);
        }
        else
        {
            finalBinary += "0";
        }
    }
    return finalBinary;
}
