#include<iostream>
#include<fstream>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    ifstream inputFile;
    char c[100];
    inputFile.open("input.txt",ios::in);
    map<char,int> symbols;
    symbols['s']=0;
    symbols['p']=0;
    symbols['G']=0;
    symbols['e']=0;
    while(inputFile.getline(c,100)){
        string input;
        input = c;
        for(int i=0; i<input.length(); i++)
        {
            if(input[i]== 's'){symbols['s']++;}
            if(input[i]== 'p'){symbols['p']++;}
            if(input[i]== 'G'){symbols['G']++;}
            if(input[i]== 'e'){symbols['e']++;}
        }
    }
    int currentMax = 0;
    int arg_max = 0;

    cout<<"s :"<<symbols['s']<<endl;
    cout<<"p :"<<symbols['p']<<endl;
    cout<<"G :"<<symbols['G']<<endl;
    cout<<"e :"<<symbols['e']<<endl;
    for(auto it = symbols.cbegin(); it != symbols.cend(); ++it )
    {
        if (it -> second > currentMax)
        {
            arg_max = it->first;
            currentMax = it->second;
        }
    }

    for(auto it = symbols.cbegin(); it != symbols.cend(); ++it ){
        if(it -> second == currentMax){
            cout << "Max symbol is: " << char(it -> first) << " - " << currentMax << endl;
        }
    }

    inputFile.close();
    return 0;
}
