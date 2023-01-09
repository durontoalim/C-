#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v = {1,2,3,4,5};

    auto it = upper_bound( v.begin(), v.end() , 7);

    cout<<( (it == v.end() ) ? "Not Found" : to_string(*it) )<<endl;

    return 0;
}