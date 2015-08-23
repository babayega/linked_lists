#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;


int main() 
{
    int n,k;
    cin>>n;
    vector<char> str(n);
    for(int i=0;i<n;++i)
    {
        cin>>str[i];        
    }
    cin>>k;
    for(int i=0;i<n;++i)
    {
        if(isalpha(str[i]))
            str[i] = str[i]+k;
        //if(!isalpha(str[i]))
        //{
          //  str[i] = str[i]-k;
           // if(str[i]<97)
            //{
              //  temp = str[i]-97;
          //  }
            
        //}
            
        cout<<(char)str[i];        
    }
    
    
    return 0;
}
