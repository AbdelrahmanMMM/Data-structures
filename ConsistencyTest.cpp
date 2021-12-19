#include<iostream>
#include<stack>
#include<bits/stdc++.h>

using namespace std;


void check(string x) {
	stack<string>s;
	bool found = true;
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

		//temp = x.substr(y,z-y+1);

		if (w != string::npos && w == y) {
			if (z > w) {
				

				temp = x.substr(w, z - w + 1);
				
					//cout << s.top() << '\n';
					if (s.empty()==false && temp.substr(2, temp.length() - 3) == s.top().substr(1, s.top().length() - 2))
						s.pop();
					else {
						if (s.empty() == false) {
							x.insert(w, "</" + s.top().substr(1, s.top().length() - 2) + ">");
							x.insert(w + s.top().length() + 1, "<" + temp.substr(2, temp.length() - 3) + ">");
							if (s.empty() == false)
								s.pop();
						}
						else {
							x.insert(w , "<" + temp.substr(2, temp.length() - 3) + ">");
						}
						w = x.find("</", w + 1);
						w += temp.length()-1;
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
	cout << s.empty() << "\n";

}

int main(void) {
	string xml = " <note></heading>Reminder</heading></note>";
	check(xml);

}
