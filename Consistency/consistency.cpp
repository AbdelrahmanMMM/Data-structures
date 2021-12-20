#include "test.h"

void check(string x) {
	stack<string>s;
	bool found = true;
	int len = 0;
	int y = 0;
	int z = 0;
	int w = 0;
	string temp = "";
	w = x.find("</");
	while (found) {
		found = false;

		y = x.find('<', y + 1);
		z = x.find('>', z + 1);


		if (y == -1)
			break;
		if (w >= x.length() - len-1)
			break;

		//temp = x.substr(y,z-y+1);

		if (w != string::npos && w == y) {
			if (z > w) {


				temp = x.substr(w, z - w + 1);

				//cout << s.top() << '\n';
				if (s.empty() == false && temp.substr(2, temp.length() - 3) == s.top().substr(1, s.top().length() - 2))
					s.pop();
				else {
					if (s.empty() == false) {
						x.insert(x.length() , "</" + s.top().substr(1, s.top().length() - 2) + ">");
						x.insert(w, "<" + temp.substr(2, temp.length() - 3) + ">");
						len += s.top().length();
						if (s.empty() == false)
							s.pop();
					}
					else {
						x.insert(w, "<" + temp.substr(2, temp.length() - 3) + ">");
					}
					w = x.find("</", w + 1);
					w += temp.length() - 1;
					z = y = w;
					w = x.find("</", w + 1);
					found = true;
					continue;





				}





				w = x.find("</", w + 1);
				found = true;
				continue;
			}

		}
		if (y != string::npos && z != string::npos && w != y) {
			temp = x.substr(y, z - y + 1);
			//cout << temp << '\n';
			s.push(temp);
			found = true;

		}


	}
	cout << x.data() << endl;
	

}
string unformattingInOneLine(string path) {

	ifstream in(path);
	ofstream out("oneLine.xml");
	string str ="";

	//cout << "\n ================ UnFormatting the xml File in one line ================ \n\n";
	vector<string> file = read(path);


	while (in.is_open()) {

		for (auto line = file.begin(); line != file.end(); line++) {

			string s = (string)*line;
			int x = s.find("<");
			int y = s.rfind("   ") + 3;


			//UnFormatting

			if (x >= 0) {
				str.append(s.substr(x)) ;
				out << s.substr(x);
			}
			else {
				str.append(s.substr(y));
				out << s.substr(y);
			}

		}

		in.close();

	}

	out.close();
	return str;

}



