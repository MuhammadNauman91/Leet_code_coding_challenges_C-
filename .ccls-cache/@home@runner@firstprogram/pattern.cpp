#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) 
    {
        int sum;
        vector<int> output;
        for (int i=0 ; i<nums.size(); ++i)
        {
              for (int j=i+1 ; j<nums.size(); ++j)
            {
              if ((nums[i] + nums[j] == target))
                 {
                   output.push_back(i);
                   output.push_back((j));
                   break;
 
                }
      
            }
         
       }
    for (auto elem : output) {
        cout << " " << elem;
    }
        return output;
   }
};
int main() 
{
 Solution sol;
  vector <int> vect {3,2,3};
  int target = 6 ;
  sol.twoSum(vect, target) ; 
  }