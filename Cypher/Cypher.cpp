// Cypher.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
using namespace std;

class Cypher {
   
    
public:
    string encryptMessage(string message, int displacement) {
        string s = "";
        char c = ' ';
        for (int i = 0; i < message.size(); i++) {
            c = char(int(message[i]) + displacement);
            s += c;
        }
        return s;
    }
    string decryptMessage(string message, int displacement) {
        string s = "";
        char c = ' ';
        for (int i = 0; i < message.size(); i++) {
            c = char(int(message[i]) - displacement);
            s += c;
        }
        return s;
    }
};


int main()
{
    Cypher code = Cypher();
    string message;
    int key;
    cout << "Ceasar Cypher is used to encrypt messages with shifting the number of characters in the alphabet" << endl;
    cout << "Write a message to encrypt:" << endl;
    cin >> message;//std::basic_istream::getline(cin,message); 
    //uncommment above if yours is working
    //but my VS2022 compiler complains about missing arguments
    //so you have to: type_your_message_like_this because cin>> doesn't do whitespaces! :D 
    cout << "Write a number as encryption key:" << endl;
    cin >> key;
    string encrypted = code.encryptMessage(message,key);
    string decrypted = code.decryptMessage(encrypted, key);
    cout << "Your message encrypted:" << endl;
    cout << encrypted <<endl;
    cout << "Your message decrypted:" << endl;
    cout << decrypted;


    system("pause>0");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
