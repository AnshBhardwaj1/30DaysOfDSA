#include <bits/stdc++.h>
using namespace std;

int getMaxConsecutiveHidden(vector<int> commits) {
    unordered_map<long long,int> m;
    m[1] = -1;
    int ans = 0;
    int n = commits.size();
    for(int i = 0; i < n; i++) {
        long long key = (long long)commits[i] - i;
        if(m.find(key) != m.end()) {
            int j = m[key];
            int len = i - j - 1;
            if(len > ans) ans = len;
        } else {
            m[key] = i;
        }
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> commits(n);
    for(int i=0;i<n;i++) cin>>commits[i];
    cout<<getMaxConsecutiveHidden(commits);
    return 0;
}
