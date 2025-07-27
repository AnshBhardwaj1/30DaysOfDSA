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
    int a,b,c; cin >> a>>b>>c;
    int large = max({a,b,c});
    int small = min({a,b,c});
    cout << small << " "<< large;
    return 0;
}

int32_t main() {
    fastio();
    start_time = chrono::steady_clock::now();
    
    int t = 1;
    //cin >> t;
    while (t--) {
        check_time();
        check_memory();
        solve();
    }
    return 0;
}