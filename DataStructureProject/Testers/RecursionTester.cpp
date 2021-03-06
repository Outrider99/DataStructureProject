//
//  RecursionTester.cpp
//  DataStructureProject
//
//  Created by Miller, Wyatt on 3/5/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#include "RecursionTester.hpp"

int RecursionTester :: fib(int number)
{
    if(number == 0 || number == 1)
    {
        cout << "Reached a base case" << endl;
        return 1;
    }
     else
     {
         cout << "reached a recursive case with: " << number - 1 << " and " << number - 2 << endl;
         return fib(number - 1) + fib (number - 2);
     }
}

string RecursionTester :: mystery(string word)
{
    /*
    if(word.length() == 1)
    {
        return word;
    }
    else
    {
        return word + mystery(word.substr(0,word.length() - 1));
    }
     */
    
    if(word.length() == 1)
    {
        return word;
    }
    else
    {
        return  mystery(word.substr(0,word.length() - 1)) + word;
    }
}

void RecursionTester :: testRecursionNumbers()
{
    Timer recursionTimer;
    cout << "Testing fibonacci with 10" << endl;
    recursionTimer.startTimer();
    cout << mystery("Apple") << endl;
    recursionTimer.stopTimer();
    recursionTimer.displayInformation();
}

void RecursionTester :: testRecursionString()
{
    
}
