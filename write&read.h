#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
void readwritetest()
{
    cout<<"write test"<<endl;
    ofstream out("test.txt");
	out<<"It's a test code"<<endl;
    out.close();
    ifstream in;
    in.open("test.txt");

    string line;
    while (!in.eof() )
    {
    	getline(in,line);

    	//split the line into many words
    	stringstream line2word(line);
    	string word;
    	vector<string> word_list;
    	while(line2word>>word)
    		word_list.push_back(word);
        for(int i=0; i< word_list.size();i++)
            cout<<word_list[i]<<endl;
    }
}