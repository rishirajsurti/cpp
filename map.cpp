#include <iostream>
#include <map>
using namespace std;

int main(){
	map<char, int> mp;
	map<char, int> mymap, mymap1;

	mp.insert(pair<char, int>('a',2));
	mp.insert(pair<char, int>('b',1));
	mp.insert(pair<char, int>('c',43));

	mymap.insert(mp.begin(), mp.end());

	map<char, int>::iterator it;

	it = mp.find('b');
	cout<<it->first<<' '<<it->second<<endl;

	cout<<"mp at b: "<<mp.at('b')<<endl;

	mymap1['x'] = 23;
	mymap1['y'] = 21;
	
	cout<<mymap1['x']<<endl;
	
	return 0;
}