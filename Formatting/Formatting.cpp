
#include "formatting.h"


void Formatting(string path){


	ifstream in(path);
	ofstream out("t3.xml");

	cout << "\n ================ Formatting the xml File ================ \n\n";
	vector<string> file = read(path);
	int c = 0;

	while (in.is_open()) {

		for (auto line = file.begin(); line != file.end(); line++) {
			string s = (string)*line;
				
			string s1 = "   ";
			string s2 = s1 + s1;
			string s3 = s2 + s1;
			string s4 = s3 + s1;
			string s5 = s4 + s1;
			string s6 = s5 + s1;
			string s7 = s6 + s1;
			string s8 = s7 + s1;
			string s9 = s8 + s1;

			//Formatting

			if (s[0] == '<' && s[1] != '/' && s.find("/") == -1) { //openTag

				if (c == 0 || c == 1) {
					out << s << endl;
					cout << s << endl;
					c++;
				}
				else if (c == 2) {
					out << s1 + s << endl;
					cout << s1 + s << endl;
					c++;
				}
				else if (c == 3) {
					out << s2 + s << endl;
					cout << s2 + s << endl;
					c++;
				}
				else if (c == 4) {
					out << s3 + s << endl;
					cout << s3 + s << endl;
					c++;
				}
				else if (c == 5) {
					out << s4 + s << endl;
					cout << s4 + s << endl;
					c++;
				}
				else if (c == 6) {
					out << s5 + s << endl;
					cout << s5 + s << endl;
					c++;
				}
				else if (c == 7) {
					out << s6 + s << endl;
					cout << s6 + s << endl;
					c++;
				}
				else if (c == 8) {
					out << s7 + s << endl;
					cout << s7 + s << endl;
					c++;
				}
				else if (c == 9) {
					out << s8 + s << endl;
					cout << s8 + s << endl;
					c++;
				}
				else {
					out << s9 + s << endl;
					cout << s9 + s << endl;
				}


			}

			else if (s.substr(2).find("<") != -1) { //openClose TAG

				if (c == 0 || c == 1){
					out << s << endl;
					cout << s << endl;
				}
				else if (c == 2) {
					out << s1 + s << endl;
					cout << s1 + s << endl;
				}
				else if (c == 3) {
					out << s2 + s << endl;
					cout << s2 + s << endl;
				}
				else if (c == 4) {
					out << s3 + s << endl;
					cout << s3 + s << endl;
				}
				else if (c == 5) {
					out << s4 + s << endl;
					cout << s4 + s << endl;
				}
				else if (c == 6) {
					out << s5 + s << endl;
					cout << s5 + s << endl;;
				}
				else if (c == 7) {
					out << s6 + s << endl;
					cout << s6 + s << endl;;
				}
				else if (c == 8) {
					out << s7 + s << endl;
					cout << s7 + s << endl;;
				}
				else if (c == 9) {
					out << s8 + s << endl;
					cout << s8 + s << endl;;
				}
				else {
					out << s9 + s << endl;
					cout << s9 + s << endl;
				}

			}

			else if (s[0] == '<' && s[1] == '/') { //closeTag

				if (c == 0 || c == 1){
					out << s << endl;
					cout << s << endl;
				}
				else if (c == 2) {
					out << s << endl;
					cout << s << endl;
					c--;
				}
				else if (c == 3) {
					out << s1 + s << endl;
					cout << s1 + s << endl;
					c--;
				}
				else if (c == 4) {
					out << s2 + s << endl;
					cout << s2 + s << endl;
					c--;
				}
				else if (c == 5) {
					out << s3 + s << endl;
					cout << s3 + s << endl;
					c--;
				}
				else if (c == 6) {
					out << s4 + s << endl;
					cout << s4 + s << endl;;
					c--;
				}
				else if (c == 7) {
					out << s5 + s << endl;
					cout << s5 + s << endl;;
					c--;
				}
				else if (c == 8) {
					out << s6 + s << endl;
					cout << s6 + s << endl;;
					c--;
				}
				else if (c == 9) {
					out << s7 + s << endl;
					cout << s7 + s << endl;;
					c--;
				}
				else {
					out << s8 + s << endl;
					cout << s8 + s << endl;
					c--;
				}

			}

			else { //txt

				if (c == 0 || c == 1){
					out << s << endl;
					cout << s << endl;
				}
				else if (c == 2) {
					out << s1 + s << endl;
					cout << s1 + s << endl;
				}
				else if (c == 3) {
					out << s2 + s << endl;
					cout << s2 + s << endl;
				}
				else if (c == 4) {
					out << s3 + s << endl;
					cout << s3 + s << endl;
				}
				else if (c == 5) {
					out << s4 + s << endl;
					cout << s4 + s << endl;
					c--;
				}
				else if (c == 6) {
					out << s5 + s << endl;
					cout << s5 + s << endl;
				}
				else if (c == 7) {
					out << s6 + s << endl;
					cout << s6 + s << endl;
				}
				else if (c == 8) {
					out << s7 + s << endl;
					cout << s7 + s << endl;
				}
				else if (c == 9) {
					out << s8 + s << endl;
					cout << s8 + s << endl;;
				}
				else {
					out << s9 + s << endl;
					cout << s9 + s << endl;
				}

			}
		

		}

		in.close();

	}
	
	out.close();

}

