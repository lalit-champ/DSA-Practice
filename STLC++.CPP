#include <bits/stdc++.h>      // (GCC only; competitive programming)
#include <vector> <array> <deque> <list> <forward_list>
#include <set> <map> <unordered_set> <unordered_map>
#include <stack> <queue>                     // adapters
#include <algorithm> <numeric>               // algorithms, accumulate, gcd, iota
#include <functional>                        // less, greater, hash
#include <string> <string_view>
#include <tuple> <utility>                   // pair, move, swap
#include <optional> <variant> <any>          // C++17
#include <chrono> <filesystem>               // extras


//Iterators & Ranges

//Types: input/output, forward, bidirectional, random_access.

//Get from containers: begin(), end(), rbegin(), rend(), cbegin(), cend().

//Range-for:

for (auto &x : v) x *= 2;


C++20 ranges (if available):

#include <ranges>
for (int x : v | std::views::filter([](int x){return x%2;})
               | std::views::transform([](int x){return x*x;})) { }

//Algorithms (most used)
sort(v.begin(), v.end());                       // O(n log n)
sort(v.begin(), v.end(), greater<>());          // desc

stable_sort(v.begin(), v.end());                // stable

reverse(v.begin(), v.end());
rotate(v.begin(), v.begin()+k, v.end());        // left-rotate by k
random_shuffle(...) // C++14; use:
shuffle(v.begin(), v.end(), rng);

auto it = lower_bound(v.begin(), v.end(), x);   // first >= x
auto it2= upper_bound(v.begin(), v.end(), x);   // first > x
bool ok = binary_search(v.begin(), v.end(), x); // requires sorted

auto [mn_it, mx_it] = minmax_element(v.begin(), v.end());
int sum = accumulate(v.begin(), v.end(), 0);
iota(v.begin(), v.end(), 1);                    // fill 1..n

auto it3 = find(v.begin(), v.end(), x);
int cnt = count(v.begin(), v.end(), x);

v.erase(unique(v.begin(), v.end()), v.end());   // remove consecutive dups (needs sorted to remove all dups)
next_permutation(v.begin(), v.end());
Common container usage
vector
vector<int> v;                 // empty
vector<int> a(5, 7);           // {7,7,7,7,7}
v.push_back(10); v.pop_back();
v.front(); v.back(); v.size(); v.clear();
v.insert(v.begin()+i, val);
v.erase(v.begin()+i);
v.erase(v.begin()+l, v.begin()+r); // [l, r)

array
array<int, 3> a{1,2,3}; a.fill(0);

deque
deque<int> dq; dq.push_front(1); dq.push_back(2);
dq.pop_front(); dq.pop_back();

list
list<int> L = {1,2,3};
auto it = next(L.begin(), 1);
L.insert(it, 99); L.erase(it);
L.splice(L.begin(), otherList, otherList.begin()); // O(1) node move

set / multiset
set<int> s = {3,1,4};
s.insert(2); s.erase(3);
bool has = s.count(2);                     // 0 or 1
auto it = s.lower_bound(2);                // >=2
// multiset allows duplicates:
multiset<int> ms; ms.insert(5); ms.erase(ms.find(5)); // erase single

map / unordered_map
map<string,int> mp;
mp["alice"] = 3; mp.insert({"bob", 2});
for (auto &[k,v] : mp) { /* ordered by key */ }

unordered_map<string,int> ump;
ump.reserve(1<<20);                        // reduce rehashes (perf)
auto it = mp.find("alice"); if (it != mp.end()) cout<<it->second;

priority_queue (heap)
priority_queue<int> maxh;                  // max-heap
priority_queue<int, vector<int>, greater<int>> minh; // min-heap
maxh.push(10); maxh.top(); maxh.pop();

queue / stack
queue<int> q; q.push(1); q.front(); q.pop();
stack<int> st; st.push(1); st.top(); st.pop();

Pairs, Tuples & Structured Bindings
pair<int,string> p = {1,"hi"};
auto [id, name] = p;

tuple<int,string,double> t{1,"x",3.14};
auto [a,b,c] = t;        // C++17

Custom Comparators (sort, set/map)
struct Node { int x,y; };
sort(v.begin(), v.end(), [](const Node& a, const Node& b){
    if (a.x != b.x) return a.x < b.x;
    return a.y > b.y;           // tie-breaker desc
});

// set/map with comparator:
struct Cmp {
  bool operator()(const Node& a, const Node& b) const {
    return (a.x==b.x) ? (a.y<b.y) : (a.x<b.x);
  }
};
set<Node, Cmp> S;

Hash for custom types (unordered_map/set)
struct Node { int x,y; bool operator==(const Node& o) const {return x==o.x && y==o.y;} };
struct NodeHash {
  size_t operator()(Node const& n) const noexcept {
    return std::hash<int>()(n.x) ^ (std::hash<int>()(n.y)<<1);
  }
};
unordered_set<Node, NodeHash> us;

Erase–Remove Idiom (vector)
v.erase(remove(v.begin(), v.end(), value), v.end());      // remove all == value
v.erase(remove_if(v.begin(), v.end(), pred), v.end());

Lower/Upper Bound on vector of pairs
vector<pair<int,int>> vp; sort(vp.begin(), vp.end()); // lexicographic
auto it = lower_bound(vp.begin(), vp.end(), make_pair(key, INT_MIN));

Building Heaps from range
vector<int> v = {4,1,7,3};
make_heap(v.begin(), v.end());              // max-heap
pop_heap(v.begin(), v.end()); v.pop_back(); // remove max
push_heap(v.begin(), v.end());              // after v.push_back(x)

Set Operations (ordered containers)
set<int> A={1,2,3}, B={3,4};
vector<int> out;
set_union(A.begin(),A.end(),B.begin(),B.end(),back_inserter(out));
set_intersection(...); set_difference(...); set_symmetric_difference(...);

Common Patterns
Frequency map
unordered_map<int,int> freq;
for (int x: v) freq[x]++;

Coordinate compression
vector<int> xs = v;
sort(xs.begin(), xs.end());
xs.erase(unique(xs.begin(), xs.end()), xs.end());
auto idx = [&](int x){ return int(lower_bound(xs.begin(),xs.end(),x)-xs.begin()); };

Two-pointer on sorted vector
int i=0, j=n-1;
while (i<j) {
  if (v[i]+v[j] < target) ++i;
  else if (v[i]+v[j] > target) --j;
  else { /* found */ break; }
}

Using std::bitset (fast bit ops)
#include <bitset>
bitset<1000> b; b.set(5); b.flip(10); bool k=b.test(5);
