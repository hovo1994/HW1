////////////////////////////////////////////////////////
// ECE 2574, Homework 1, Hovhannes Avagyan
//
// File name:   hw1.cpp
// Description: Use a bag ADT to implement a simple interactive spell-checker
// Date:        7/8/2016
//

#include <iostream>
#include <string>
#include "BagInterface.h"
#include "ArrayBag.h"

using namespace std;
//using std:string;

int main()
{
    //string dictionary[20];
    string dictionary[] = { "hello", "running", "spare", "tree",
      "jungle", "spelling", "computer", "notify",
      "nation", "box", "tooth", "smell",
      "beer", "afternoon", "laser", "house", "hinge",
      "continent", "handgun", "waterfall" };
 
    ArrayBag<string> bag;

    for (int i = 0; i < 20; ++i)
    {
        bag.add(dictionary[i]);
    }
    bool end = false;
    string word2check;g
    /*while (!end)
    {
        cout << "Enter a word to spell check: ";
        cin >> word2check;
        if (bag.contains(word2check))
        {
            cout << "Correct!\n";
        }
        else if (word2check == "done")
        {
            end = true;
        }
        else
        {
            cout << word2check << " is not spelled correctly.\n";
        }

    }*/

    return 0;
}
