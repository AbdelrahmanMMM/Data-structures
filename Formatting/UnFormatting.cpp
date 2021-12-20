
#include "formatting.h"




void unFormatting(string path) {

	ifstream in(path);
	ofstream out("t2.xml");

	cout << "\n ================ UnFormatting the xml File ================ \n\n";
	vector<string> file = read("t1.xml");


	while (in.is_open()) {

		for (auto line = file.begin(); line != file.end(); line++) {

			string s = (string)*line;
			int x = s.find("<");
			int y = s.rfind("   ") + 3;


			//UnFormatting

			if (x >= 0) {
				cout << s.substr(x) << endl;
				out << s.substr(x) << endl;
			}
			else {
				cout << s.substr(y) << endl;
				out << s.substr(y) << endl;
			}

		}

		in.close();

	}

	out.close();

}






void unformattingInOneLine(string path) {

	ifstream in(path);
	ofstream out("oneLine.xml");

	cout << "\n ================ UnFormatting the xml File in one line ================ \n\n";
	vector<string> file = read("t1.xml");


	while (in.is_open()) {

		for (auto line = file.begin(); line != file.end(); line++) {

			string s = (string)*line;
			int x = s.find("<");
			int y = s.rfind("   ") + 3;


			//UnFormatting

			if (x >= 0) {
				cout << s.substr(x);
				out << s.substr(x);
			}
			else {
				cout << s.substr(y);
				out << s.substr(y);
			}

		}

		in.close();

	}

	out.close();

}


