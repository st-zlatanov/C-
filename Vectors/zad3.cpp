#include <iostream>
#include <vector>
using namespace std;

vector<int> addingShiftedVector(vector<vector<int> > vectorOfVectors, int shift)
{
  vector<int> res;
  res.resize(vectorOfVectors[0].size() + (vectorOfVectors.size()-1) * shift);
  for(int index = 0 ; index < vectorOfVectors.size() ; index++)
  {
    vector<int> _copy = vectorOfVectors[index];

    for(int i = 0; i < _copy.size(); i++)
    {
      res[i + index * shift] += _copy[i];
    }
  }
  return res;
}
int main(){
    vector<int> vec1;
    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(3);
    vector<int> vec2;

    vec2.push_back(1);
    vec2.push_back(2);
    vec2.push_back(3);
    vector<vector<int> >vectorFromVectors;
     vectorFromVectors.push_back(vec1);
     vectorFromVectors.push_back(vec2);

vector<int> shiftedVector = addingShiftedVector(vectorFromVectors, 1);
    for (int i = 0; i < shiftedVector.size(); i++)
    {
        cout << shiftedVector[i] << " ";
    }
    return 0;
}
