
#include "formatting.h"


vector<string> read(string path) {

	vector<string> lines;
	string line;

	try {
		ifstream y(path); //read file

		if (y.is_open()) {

			while (getline(y, line)) {
				lines.push_back(line);
			}
			y.close();

		}
		else {
			int x = 1;
		}

	}
	catch (exception& e) {
		cout << e.what() << endl;
	}


	return lines;

}


void unFormatting(string path) {

	ifstream in(path);
	ofstream out("test2.xml");

	//cout << "\n ================ UnFormatting the xml File ================ \n\n";
	vector<string> file = read(path);


	while (in.is_open()) {

		for (auto line = file.begin(); line != file.end(); line++) {

			string s = (string)*line;
			int x = s.find("<");
			int y = s.rfind("   ") + 3;


			//UnFormatting

			if (x >= 0) {
				out << s.substr(x) << endl;
			}
			else {
				out << s.substr(y) << endl;
			}

		}

		in.close();

	}

	out.close();

}





/*
void unformattingInOneLine(string path) {

	ifstream in(path);
	ofstream out("oneLine.xml");

	//cout << "\n ================ UnFormatting the xml File in one line ================ \n\n";
	vector<string> file = read(path);


	while (in.is_open()) {

		for (auto line = file.begin(); line != file.end(); line++) {

			string s = (string)*line;
			int x = s.find("<");
			int y = s.rfind("   ") + 3;


			//UnFormatting

			if (x >= 0) {
				//cout << s.substr(x);
				out << s.substr(x);
			}
			else {
				//cout << s.substr(y);
				out << s.substr(y);
			}

		}

		in.close();

	}

	out.close();

}

*/
