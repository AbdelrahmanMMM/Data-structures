#pragma once




/* unformatting and formatting functions */

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


void write(string xml, string path);


vector<string> read(string path);


void unFormatting(string path);


void unformattingInOneLine(string path);


void Formatting(string path);


/* end of the file */
