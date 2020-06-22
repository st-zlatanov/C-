#include <iostream>
#include <vector>
using namespace std;

vector <int> countBy(int x, int n){
    int delimo = x;
    vector<int> numbers;
    while(n--> 0){
        numbers.push_back(x);
        x +=delimo;
    }
    return numbers;
}

int main()
{
    vector<int> numbers = countBy(2, 4);
    for (int i = 0; i < numbers.size(); i++) {
            cout << numbers[i] << " ";
        }
    return 0;
}

