/* Algorithm Challenge & Problem Solving
 * 7 - Program to Reverse a Number (Digit Reversal)
 *
 * This program reads a positive integer from the user and constructs
 * a new number that represents the reverse of the original input.
 *
 * The program uses modulo (%) to extract digits from right to left,
 * and rebuilds the reversed number step by step using multiplication
 * and addition.
 */

#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

int ReverseNumber(int Number)
{
    int Remainder = 0, Number2 = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;            // Extract last digit
        Number = Number / 10;               // Remove last digit
        Number2 = Number2 * 10 + Remainder; // Build reversed number
    }

    return Number2;
}

int main()
{
    int Num = ReadPositiveNumber("Enter a positive number to reverse:");
    cout << "Reversed Number = " << ReverseNumber(Num) << endl;
    return 0;
}
