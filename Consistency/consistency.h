#include <iostream>
#include <fstream>
#include <string.h>
#include <vector>
#include<bits/stdc++.h>

using namespace std;
enum options {add=1, view=2};


#define Path "t.xml"
string unformattingInOneLine(string path);
vector<string> readt(string path);
void check(string x);
