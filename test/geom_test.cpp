#include <bits/stdc++.h>
#include "../cbp/test.h"
#include "../src/geom.cpp"
using namespace std;





void geom_test(){
    assert((mytl::Point{0,0}.direction({1,1}, {2,1}) == -1
         && mytl::Point{0,0}.direction({2,2}, {1,1}) == 0
         && mytl::Point{0,0}.direction({-1,1}, {1, -1}) == 0)
         && mytl::inside({{0,0},{3,0},{0,3}}, {1,1}, true)
         && mytl::inside({{0,0},{3,0},{0,3}}, {2,1}, false));

}
