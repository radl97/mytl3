#include <bits/stdc++.h>
//#include "../cbp/test.h"
#include "../src/memo.cpp"
using namespace std;


ll natural_(ll x);
auto natural = mytl::memoize<mytl::memo::Vector, ll, ll>(natural_);
ll natural_(ll x){
    if(x < 3) return 1;
    else return natural(x-1) + natural(x-2);
}

ll unordered_(ll x);
auto unordered = mytl::memoize<mytl::memo::UnorderedMap, ll, ll>(unordered_);
ll unordered_(ll x){
    if(x < 3) return 1;
    else return unordered(x-1) + unordered(x-2);
}

ll ordered_(ll x);
auto ordered = mytl::memoize<mytl::memo::Map, ll, ll>(ordered_);
ll ordered_(ll x){
    if(x < 3) return 1;
    else return ordered(x-1) + ordered(x-2);
}




ll slow(ll i){
    if(i < 3) return 1;
    return slow(i-1) + slow(i-2);
}


void memo_test(){
    assert(slow(30) == natural(30));
    assert(slow(30) == ordered(30));
    assert(slow(30) == unordered(30));
}
