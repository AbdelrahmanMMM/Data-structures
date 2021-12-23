#ifndef PARCING_H_INCLUDED
#define PARCING_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void addt(string, string);
vector<string> readt(string);
string xmltotxt(string);

string unformattingInOneLine(string path);
vector<string> read(string path);
string check(string x);


#endif
