/******************************************************************************
Simple slotmachine game. Coded for fun and to teach my students. 

Task: Create a slotmachine game that will take as first input the number of coins that the gamer wants to play.
Then, generate 3 random numbers (range 1-10). 
If two of this numbers are equal -> +5 coins 
if three numbers are equal -> +10 coins
The game ends when the player loses all his coins. 

*******************************************************************************/

#include <iostream>
#include <stdlib.h>

using namespace std;

int balance = 0;

int main()
{
    cout << "How much coins would you like to insert? ";
    cin >> balance; 
    int num1;
    int num2;
    int num3;
    string temp;
    
    
    while (balance > 5) {
        cout <<"Your balance is " << balance << endl;
        cout <<"Press ENTER to spin the slotmachine - cost 5 coins" << endl;
        temp = cin.get();
        balance = balance - 5;
        num1 = rand() % 10 + 1;
        num2 = rand() % 10 + 1;
        num3 = rand() % 10 + 1;
        cout << "YOUR NUMBERS ARE: " << num1 << " " << num2 << " " << num3 << endl;
        if (num1 == num2 and num3 == num1) {
            cout << "JAckpot you won 10 coins !!!" << endl;
            balance = balance + 10;
        } else if (num1 == num2 or num2 == num3 or num3 == num1 ) {
            cout << "Couple you won 5 coins !!!" << endl;
            balance = balance + 5;
        } else {
            cout << "You lost :(" << endl; 
        }
    }
    cout<<"END OF THE GAME your credit is not sufficient to continue";
    cout<<"Your balance is "<< balance;
    return 0;
}
