#include <iostream>
#include <vector>
using namespace std;

class Tower{
public:
    vector<string> towerBuilder(int numberOfFloors)
    {
        vector<string> tower;
        
        int dotsCount = numberOfFloors - 1;
        int starsCount = 1;
        string temp = "";
        
        for(int i = 0; i < numberOfFloors; i++)
        {
            temp = "";
            for(int j = 0; j < dotsCount; j++)
            {
                temp +=".";
            }
            for(int p = 0; p < starsCount; p++)
            {
                temp +="*";
            }
            for(int c = 0; c < dotsCount; c++)
            {
                temp +=".";
            }
            starsCount +=2;
            dotsCount -=1;
            tower.push_back(temp);
        }
        return tower;
    }
};

int main()
{
    Tower tower;
    vector<string> simb = tower.towerBuilder(5);
    for (int i = 0; i < simb.size(); i++)
    {
        cout << simb[i] <<endl;
    }
    return 0;
}
