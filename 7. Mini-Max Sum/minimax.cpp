#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void swap(int *one, int *two) {
    int temp = *one;
    *one = *two;
    *two = temp;
}

vector<int> sort(vector<int> v) {
    int bub(0);
    for(int i=0; i<v.size()-1; i++) {
        for(int j=0; j<v.size()-1-i; j++) {
            if(v[j]>v[j+1]) {
                swap(v[j],v[j+1]);
            }
        }
    }
    return v;
}

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
    long max(0), min(0);
    arr = sort(arr);
    for(int i=0; i<4; i++) {
        max+=arr[arr.size()-1-i];
        min+=arr[i];
    }
    cout<<min<<" "<<max;
}

int main()
{
    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
