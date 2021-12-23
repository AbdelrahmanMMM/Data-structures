#include "XML_JSON.h"
#include "parcing.h"
using namespace std;

string fitting(string in){
    ifstream indata(in);
    string path = "temp.txt";
    ofstream outdata((path).c_str(),ios::binary);

	string line,spaces;
	int lines =-1;
	bool closedInLine=false;
	stack<string> st;
	while (getline(indata,line)){
        int start1 =line.find('<');
        int end1 = line.find('>');
        if(start1 ==-1){
            outdata<<line<<endl;
        }else{
            //cout<<start1 <<" "<<end1<<endl;
            string open =  line.substr(start1,(end1-start1+1));
            outdata<<open<<endl;
            if(line.size()>end1+1){
                int start2 = line.find('<',end1+1);
                int end2 = line.find('>',end1+1);
                string data =  line.substr(end1+1,(start2-1-end1));
                string close = line.substr(start2,(end2-start2+1));
                outdata<<data<<endl<<close<<endl;
            }
        }
	}

	indata.close();
	return path;
}
string spacescount(int SpacesNum)
{
	string spaces ;
	for (int i = 0; i < SpacesNum; i++)
	{
	    spaces += " ";
	}
    return spaces;
}
void XMLJSON(string inputFile)
{
    string path =fitting(inputFile);
	string xml_tmp, element, closing , line;
	stack<int> element_size;
	stack<string> element_name;
    bool empty = false;
    vector <string> XML = readt("temp.txt");
    //for(int i =0 ; i < XML.size(); i++){
            //cout <<XML[i];
        //}
    remove(path.c_str());
    int first, gap, last;
    int jindex = 1;
    vector<string> JSON(XML.size()+2);
	JSON[0] = "{";                             //starting the JSON file with '{'

	for (int i = 0; i < XML.size(); i++)
	{
		xml_tmp = XML[i];
		first = xml_tmp.find("<") + 1;
		gap = xml_tmp.find(" ");
		last = xml_tmp.find(">");


		if ((xml_tmp == "") ||                 // one of the <> wasn't found or there is a <? or <!
		   ((xml_tmp.find("<") == -1) && (xml_tmp.find(">") != -1)) ||
		   ((xml_tmp.find("<") != -1) && (xml_tmp.find(">") == -1)) ||
		   (xml_tmp[0] == '<' && ((xml_tmp[1] == '?') || (xml_tmp[1] == '!'))))
		{
			continue;
		}

	    if (first == 0 && last == -1)           //"<" & ">" Not found
		{
			if (empty == true)
			   JSON[jindex] = spacescount(element_size.top()) + xml_tmp;
			else
				continue;
		}

		else if (xml_tmp[first] == '/')          //extract </element>
		{
			element = xml_tmp.substr(first + 1, last - (first + 1));
			closing = element;
			JSON[jindex] = spacescount(element_size.top()) + "}";
			element_name.pop();
			element_size.pop();
		}

		else
		{
			if (gap > first && gap < last)        // ex. <first  name>
				element = xml_tmp.substr(first, gap - first);
			else
				element = xml_tmp.substr(first, last - first);
			element_name.push(element);
			empty = true;

			if (element != closing)
				JSON[jindex] = "'" + element + "'" + ":" + "{";
			else
				JSON[jindex] = spacescount(element_size.top() - 2) + ", {";


			element_size.push(JSON[jindex].length());
		}

		jindex++;
	}
	JSON[jindex++] = "}";
	string jpath = "Json.txt";
    ofstream outdata((jpath).c_str(),ios::binary);
    for(int i =0 ; i<JSON.size() ; i++){
        outdata << JSON[i] << endl;
        }
    }


