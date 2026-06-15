#include <iostream>
#include <string>
#include <cmath>
#include <random>

using namespace std;

int main()
{
    int startUpValue; // Only used for starting the calculator
    int menu; // To Access all the functionalities of the calculator
    //Used for the function call aurguments(start)
    double first;
    double second;
    //Used for the function call aurguments(end)
    string ctn; //Stores whether the wants to continue using the calculator

    //Function decleration
    void enterTheTwoNumbers(double&, double&);
    void sum(double&, double&);
    void difference(double&, double&);
    void multiply(double&, double&);
    void division(double&, double&);
    void exponentiation(double&, double&);
    void randomNumberGenerator(double&, double&);
    void coinFlip();

    cout << "Hey there fellow CLI calculator user. Press 0 to start the calculator: ";
    cin >> startUpValue;

    //Loop for Running the calculator (Main Loop)
    do{
        if (startUpValue == 0) {
        cout << "Please choose one from the option shown below" << endl;
        cout << "Addition -> 1\n" << endl;
        cout << "Subtraction -> 2\n" << endl;
        cout << "Multiply -> 3\n" << endl;
        cout << "Division -> 4\n" << endl;
        cout << "Exponentiation -> 5\n" << endl;
        cout << "Random Number Generator -> 6\n" << endl;
        cout << "Coin Flipp -> 7\n" << endl;
        cout << "If you randomly decide not to use my calculator just press any number\n" << endl;
        cin >> menu;
    }

    else{
        cout << "Ok seems like you don't wanna use the calculator. So Bye Bye!!" << endl;
    }
    //Switching between the calculator functionalities
        switch (menu)
        {
        case 1:
            cout << "ADDITION\n" << endl;
            enterTheTwoNumbers(first, second);
            sum(first, second);
            menu = 0;
            break;
        case 2:
            cout << "SUBTRACTION\n" << endl;
            enterTheTwoNumbers(first, second);
            difference(first, second);
            menu = 0;
            break;
        case 3:
            cout << "MULTIPLICATION\n" << endl;
            enterTheTwoNumbers(first, second);
            multiply(first, second);
            menu = 0;
            break;
        case 4:
            cout << "DIVISION\n" << endl;
            enterTheTwoNumbers(first, second);
            division(first, second);
            menu = 0;
            break;
        case 5:
            cout << "EXPONENTIATION\n" << endl;
            enterTheTwoNumbers(first, second);
            exponentiation(first, second);
            menu = 0;
            break;
        case 6:
            cout << "RANDOM NUMBER GENERATOR\n" << endl;
            enterTheTwoNumbers(first, second);
            randomNumberGenerator(first, second);
            menu = 0;
            break;
        case 7:
            cout << "COIN FLIP\n" << endl;
            coinFlip();
            menu = 0;
            break;

        }
        //Checks whether the user wants to continue using the calculator or not
        char ctn = 'Y';
        cout << "Do you wanna continue(Enter Y for yes and N for no): ";
        cin >> ctn;
        if (ctn == 'Y' or ctn == 'y'){
            continue;
        }
        else{
            cout << "Thanks for using my calculator. See You Soon :)" << endl;
            break;
        }
    }while (menu == 0);


    return 0;
}

//Calculator functionalities
void enterTheTwoNumbers(double& firstnum, double& secondnum){
            cout << "Enter the first number: ";
            cin >> firstnum;
            cout << "Enter the second number: ";
            cin >> secondnum;
}

void sum(double& firstnumber, double& secondnumber){
    cout << "\nThe sum of the two numbers is: " << firstnumber + secondnumber << endl;
}

void difference(double& firstnumber, double& secondnumber){
    cout << "\nThe difference of the two numbers is: " << firstnumber - secondnumber << endl;
}

void multiply(double& firstnumber, double& secondnumber){
    cout << "\nThe multiplication result of the two numbers is: " << firstnumber * secondnumber << endl;
}

void division(double& firstnumber, double& secondnumber){
    cout << "\nThe division result of the two numbers is: " << firstnumber / secondnumber << endl;
}

void exponentiation(double& firstnumber, double& secondnumber){
    cout << firstnumber << " power " << secondnumber << ": " << pow(firstnumber, secondnumber) << endl;
}

void randomNumberGenerator(double& firstnumber, double& secondnumber){
    random_device rd;
    mt19937 gen(rd());
    
    int min = firstnumber;
    int max = secondnumber;
    uniform_int_distribution<int> distrib(min, max);
    int randomNum = distrib(gen);

    cout << "\nA random number between " << min << " and "<< max << ": " << randomNum << endl;
}

void coinFlip(){
    random_device rd;
    mt19937 gen(rd());

    uniform_int_distribution<int> distrib(1, 2);
    int randomNum = distrib(gen);

    if (randomNum == 1)
    {
        cout << "Why did the quarter go to school? To get aHEAD. Yes you got a Head" << endl;
    }
    else if (randomNum == 2)
    {
        cout << "Why did the lizard lose the coin toss? It couldn't keep its tail straight. Yes you got a Tails" << endl;
    }
    
}