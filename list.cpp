#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void print_list(list<int> l){
	list<int>::iterator it;
	it = l.begin();
	while(it!=l.end()){
		cout<<*it<<" ";
		it++;
	}
	cout<<endl;
}

int main(){

	list<int> l;
	list<int>::iterator it;
	int i=10;
	while(i--)
		l.push_back(i);
	
	it = l.begin();
	it++;

	l.insert(it,143);
	cout<<*--it<<endl;
	print_list(l);
	return 0;
}