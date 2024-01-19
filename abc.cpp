#include<bits/stdc++.h>
using namespace std;
string findMagicalNumber(int n, int x);

int main (){
    int a;
    string ans = findMagicalNumber(3,5);   
    cout << ans; 
}

string findMagicalNumber(int n, int x){
    int p = 10;
    while(n--){
        p=p*10;
    }
    int as = p+x;
    cout << as;
    return 0;
}
