#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <vector>
#include <map>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack <char> bracket;
    for(auto c : s)
      {
        if ((s[c] == '(')|| (s[c] == '{') || (s[c] == '[') )
        {
          bracket.push(c);
          break;
        }
       
        else if  ((s[c] == ')')|| (s[c] == '}') || (s[c] == ']') )
        {
          if ((bracket.empty()) || (bracket.top()!= '(') || (bracket.top()!= '{' )|| (bracket.top()!= '[' ))
          {
            return false;
          }
          else 
          {
            bracket.pop();
            break;
          }
          
      }
    }
     return bracket.empty() ; 
}
int main(){
    string s = "()[]{}";
    bool check = isValid(s);
    if (check)
    {
       cout<<"The given string contains valid parentheses.";
    }
    else{
        cout<<"The given string contains invalid parentheses.";
    }

  }
  