#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for(int i=0; i<n ; i++) {
        for(int k=n-1-i; k>0; k--) {
            cout<<" ";
        }
        for(int k=0; k<=i; k++) {
            cout<<"#";
        }
        cout<<endl;    
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
