https://codeforces.com/contest/158/problem/B



#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, s;
    vector<int> groups(5, 0);

    cin >> n;

    while(n--) {
        cin >> s;
        groups[s]++;
    }

    int total = groups[4] + groups[3] + groups[2] / 2;

    groups[1] -= groups[3];

    if(groups[2] % 2 == 1) {
        total += 1;
        groups[1] -= 2;
    }

    if(groups[1] > 0) {
        total += (groups[1] + 3) / 4;
    }

    cout << total << endl;
    return 0;
}


// 8
// 2 3 4 4 2 1 3 1
