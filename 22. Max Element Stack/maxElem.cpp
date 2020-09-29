#include<bits/stdc++.h>

using namespace std;

int main() {

    int n; cin>>n;
    int type, x, temp;

    stack<int> s, maxS;

    for(int i=0; i<n; i++) {
        scanf("%d", &type);

       if(type==1){
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
        } 
        else if(type==2) {
                s.pop();
                maxS.pop();
            }
        else if(type==3){
             if(!s.empty()){
                cout<<maxS.top()<<endl;
            }
        }
    }

    return 0;
}

