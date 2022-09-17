#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;
class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) 
    {
    // Create Target indices saving 
    vector<int > pairs;
    // Create map 
    unordered_map<int, int> hash_map;

    // Search 
      for (int i = 0; i < nums.size() ; i++)
        {
          int second_integer = target - nums[i];
          if(hash_map.find(second_integer)!=hash_map.end())
          {
            int Index = hash_map.find(second_integer)->second;
            target_indices.push_back(Index);
            target_indices.push_back(i);

            break;
          }
          else
          {
            hash_map[nums[i]] = i;
          }
          
        }
          return target_indices;
      }
 
};
int main() 
{
 Solution sol;
  vector <int> vect {2,7,11,15};
  int target = 9 ;
  vector<int> ans= sol.twoSum(vect, target) ; 
  for (int i = 0; i < ans.size(); i++)
    {
      std::cout<< ans[i]<< " ";
    }
  }