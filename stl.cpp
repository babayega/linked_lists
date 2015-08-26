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
    int e=k;
    for(int i=0;i<n;++i)
    {
        if(isalpha(str[i]) && isupper(str[i]))
        {
            str[i] = str[i]+k;
            if(!isalpha(str[i])  || !isupper(str[i]))
            {
                str[i] = str[i]-k;
                int t = 90-str[i];
                k-=t;
                while(k>26)
                    k-=26;
                str[i]=64+k;
            }
        }
        else if(isalpha(str[i]) && islower(str[i]))
        {
            str[i] = str[i]+k;
            if(!isalpha(str[i])  || !islower(str[i]))
            {
                str[i] = str[i]-k;
                int t = 122-str[i];
                k-=t;
                while(k>26)
                    k-=26;
                str[i]=96+k;
                
            }
        }
            
        cout<<(char)str[i];        
        k=e;
    }
    
    
    return 0;
}
