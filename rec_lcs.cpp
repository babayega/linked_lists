#include <iostream>
#include <vector>

using namespace std;

int max(int a, int b)
{
    return (a>b)?a:b;
}

int lcs(vector<char> X, vector<char> Y, int m, int n)
{
    if(m==0 || n==0)
        return 0;
    if(X[m-1] == Y[n-1])
        return 1+lcs(X, Y, m-1, n-1);
    else
        return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
    
}

int main()
{
    vector<char> X = "AGGTAB";
    vector<char> Y = "GXTXAYB";
    
    int m = X.size();
    int n = Y.size();
    
    cout<<lcs(X, Y, m, n);
    
    return 0;
}