#include <iostream> 
using namespace std;

int main(){
    char grade = 'A';
    string phrase = "Testing phrase";
    int age = 26;
    // double can store more accurate numbers
    float fl = 27.5;
    double db = 27.555;
    bool tf = true;

    cout << phrase[0] << endl;
    cout << phrase.find("phrase") <<endl; 
    cout << phrase.substr(0, 3); //grab part of string starting at 0 and ending at 3




    return 0;
}
