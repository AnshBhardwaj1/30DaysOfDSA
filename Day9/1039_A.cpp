/*...  ..-+#%@@@@@%+-.      .:=*%@@@@@@%*-.     ..-+#%@@@@@%#+:.
...  ..+%@@@@@@@@@@@@#.   .-#@@@@@@@@@@@@@%.  ..+@@@@@@@@@@@@@@=
..  .-%@@@@@@#*@@@@@@@= ..+@@@@@@%*#@@@@@@@- .:%@@@@@@%*%@@@@@@@
.  .:%@@@@@@=.:%@@@@@@-..+@@@@@@#:.=%@@@@@@:.:%@@@@@@*..*@@@@@@%
. ..*@@@@@@#:.*@@@@@@@..:@@@@@@@=..+#######..=@@@@@@%-.:#@@@@@@+
  .-@@@@@@@=.:#@@@@@@*..#@@@@@@#:.::::...   .@@@@@@@*..+@@@@@@@:
 ..*@@@@@@#:.*@@@@@@@. :@@@@@@@#%@@@@@@%:. .+@@@@@@%- :#@@@@@@*.
 .:@@@@@@@+.:#@@@@@@*  #@@@@@@@@@@@@@@@@%. .@@@@@@@*..+@@@@@@@:.
 .#@@@@@@#:.*@@@@@@@: :@@@@@@@*.-%@@@@@@#. -@@@@@@@#-*@@@@@@@+. 
 -@@@@@@@+.:#@@@@@@+..%@@@@@@#:.=%@@@@@@=. -@@@@@@@@@@@@@@@@@:. 
.#@@@@@@#:.+@@@@@@@:.-@@@@@@@+..*@@@@@@%.. .-@@@@@@%*%@@@@@@+.. 
-@@@@@@@+.:#@@@@@@+..%@@@@@@#:.-%@@@@@@=.   ...:::..=@@@@@@@:.  
#@@@@@@#:.+@@@@@@@:.:@@@@@@@+..*@@@@@@%:.+%%%%%%*:.-%@@@@@@+.  
@@@@@@@+.-%@@@@@@-. *@@@@@@%:.=@@@@@@@-..@@@@@@@#..=@@@@@@#:. 
%@@@@@@%#@@@@@@@=.. +@@@@@@@%%@@@@@@@=. .%@@@@@@@#%@@@@@@*:. 
-@@@@@@@@@@@@@*:.   .#@@@@@@@@@@@@@*:.  .-@@@@@@@@@@@@@#-.. 
 .=*#%%%%##+-..  ..  .:+*#%%%%#*+-..      .=*#%%%%%#+=:. */
#include <bits/stdc++.h>
#ifdef __linux__
#include <sys/resource.h>
#endif
#include <chrono>
using namespace std;

// Utility: Split string by any character
vector<string> split(const string& str, char delimiter) {
    vector<string> tokens;
    string token;
    stringstream ss(str);
    while (getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

#define int long long
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>

#define fastio() ios::sync_with_stdio(0); cin.tie(0);
#define rep(i, a, b) for (int i = a; i < b; ++i)
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = 1e9;

chrono::steady_clock::time_point start_time;
void check_time() {
    auto now = chrono::steady_clock::now();
    auto duration = chrono::duration_cast<chrono::milliseconds>(now - start_time).count();
    if (duration > 2000) {
        cerr << "\nTime limit exceeded: " << duration << "ms" << endl;
        exit(1);
    }
}
#ifdef __linux__
void check_memory() {
    struct rusage usage;
    getrusage(RUSAGE_SELF, &usage);
    long mem_used_kb = usage.ru_maxrss;
    if (mem_used_kb > 256 * 1024) {
        cerr << "\nMemory limit exceeded: " << mem_used_kb / 1024.0 << "MB" << endl;
        exit(1);
    }
}
#else
void check_memory() {}
#endif

int solve() {
    int n, c;
    cin >> n >> c;
    vi a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    sort(all(a));
    int coins = 0;

    for (int i = 0; i < n; ++i) {
        int times = n - 1 - i;
        __int128 weight = (__int128)a[i] << times;
        if (weight > c) coins++;
    }

    cout << coins << '\n';
    return 0;
}




int32_t main() {
    fastio();
    start_time = chrono::steady_clock::now();
    
    int t = 1;
    cin >> t;
    while (t--) {
        check_time();
        check_memory();
        solve();
    }
    return 0;
}