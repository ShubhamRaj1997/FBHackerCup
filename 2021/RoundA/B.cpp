#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
#define ll  long long
#define vi vector<int>
#define loop(i,n) for(int i=0;i<n;i++)
#define loop1(i,n) for(int i=1;i<=n;i++)
#define revloop(i,n) for(int i=n-1;i>=0;i--)
#define revloop1(i,n) for(int i=n;i>=1;i--)
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vpii vector< pair<int,int> >
#define ff first
#define ss second
#define print(x) printf("%.9Lf\n",x)
#define MOD 1000000007
#define MAX 100005
#define MAX6 1000005
#define MAX3 1005
#define nw cout<<endl
#define lc 2*node+1
#define rc 2*node+2
#define PRINT(v) for(int i=0;i!=v.size();i++)cout<<v[i]<<" "
#define modInverse(x) power(x,MOD-2)
#define MINIMUM -100000000000000
#define svec(vct) sort(vct.begin(),vct.end())
#define what_is(qq) cerr << #qq << " is " << qq << endl
#define BIG 1e11
#define S1(xz) scanf("%d",&xz)
using namespace std;
#define MAX4 1025
#define LOW -10000000000
#define INF 1e9
#define MAXI 4000000

int a[MAXI];
ll R[MAXI];
ll L[MAXI];
set<int> oz_pos;
vector<pair<int, int> > oz;
vector<int> oz_pos_v ;


int main()
{

	//freopen("bin.txt", "r", stdin);
	//freopen("bout.txt", "w", stdout);
	int T,x,y,z;
	scanf("%d", &T);

	for(int tc=1;tc<=T;tc++){
        int n,m,a,b;
        scanf("%d %d %d %d", &n, &m, &a, &b);
        int mini = (n+m-1);
        if(a < mini || b< mini){
            printf("Case #%d: Impossible\n", tc);
            continue;
        }
        int ans[n][m];
        loop(i,n)
            loop(j,m)
                ans[i][j]=1;
        ans[n-1][m-1] = a-mini+1;
        ans[n-1][0]=b-mini+1;
        printf("Case #%d: Possible\n", tc);
        loop(i,n){
            loop(j,m){
                printf("%d ", ans[i][j]);
            }
            nw;
        }



		
	}
    return 0;
}
// 1000
// 15
// FOXOFXXFXOXOOXF
