#include <bits/stdc++.h>

using namespace std;
int charToInt(char ch) {
    
    if(ch >= '0' && ch <= '9'){
        return (ch - '0');
    }

    return -1;
}

string timeConversion(string s) {
    int hr;
    hr = charToInt(s[0])*10 + charToInt(s[1]);
    if(*(s.end()-2)=='P') {
        if(hr == 12) {
            return s.substr(0, 8);
        }
        else {
            return to_string(hr+12).append(s, 2, 6);
        }
    }
    else {
        if(hr == 12) {
            return "00"+ s.substr(2, 6);
        }
        else {
            return s.substr(0, 8);
        }
    }
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
