#include<bits/stdc++.h>

using namespace std;

int main() {

    int n; cin>>n;
    int type, x, temp;

    stack<int> s, maxS;

    for(int i=0; i<n; i++) {
        scanf("%d", &type);


        switch(type) {
            case 1: {
                scanf("%d", &x);

                if(s.empty()) {
                    s.push(x);
                    maxS.push(x);
                }
                else
                {
                    temp=max(x, maxS.top());
                    maxS.push(temp);
                    s.push(x);
                }
                break;
            }
            case 2: {
                s.pop();
                maxS.pop();
                break;
            }
            case 3: {
                if(!s.empty())
                    cout<<maxS.top()<<endl;
                break;
            }
            default:
            break;
        }
    }

    return 0;
}
