#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string myString = "hello world";
    int num = 20;
    float dec = 10.2;
    bool isMan = true;

    cout << "this is to insert "  << myString << endl;
    cout << num << "is a number" << endl;

    myString = "goodbye world";

    cout << "this is " << dec << "a float" << endl;
    cout << myString << " myString changed" << endl;

    return 0;
}