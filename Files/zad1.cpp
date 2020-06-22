#include<iostream>
#include<fstream>
#include<string.h>


using namespace std;

int main(){

    ofstream f;
    char c[100];
    f.open("input.txt",ios::out);

    while(cin.getline(c,100)){
        f<<c<<'\n';
    }
    f.close();
    return 0;
}
