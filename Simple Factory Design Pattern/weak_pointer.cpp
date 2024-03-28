//
// Created by bhara on 29-03-2024.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    shared_ptr<int>p1(new int(10));
    shared_ptr<int>p2 = p1 ;
    cout << p1.use_count() << endl;
    return 0 ;
}