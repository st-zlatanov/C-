#include<iostream>
#include<fstream>
#include<string.h>


using namespace std;

int main()
{
    ifstream inputFile;
    ofstream outFile;
    char c[100];
    char tempChar;
    inputFile.open("input.txt",ios::in);
    outFile.open("output.txt", ios::out);
    while(inputFile.getline(c,100))
    {
        string input;
        input = c;
        for(int i=0; i<input.length(); i++)
        {
            if(input[i] >= 'A' && input[i] <= 'Z')
            {
                tempChar = tolower(input[i]);
                outFile <<tempChar;
            }
            else if(input[i] >= 'a' && input[i] <= 'z')
            {
                tempChar = toupper(input[i]);
                outFile <<tempChar;
            }
            else
            {
                tempChar = input[i];
                outFile <<tempChar;
            }
        }
        outFile<<endl;
    }
    inputFile.close();
    outFile.close();
    return 0;
}
