#include <bits/stdc++.h>

using namespace std;

bool cmp(int a, int b){
    if(a > b){
        return true;
    }
    else return false;
}
int main()
{
    vector<int> v = {1,2,4,5,6,7,8,343,22,334};
    vector<int>::iterator it;

    

    sort(v.begin() , v.end(), cmp);

    for ( it = v.begin(); it != v.end(); it++)
    {
        cout<<*it<<endl;
    }
    

    return 0;
}