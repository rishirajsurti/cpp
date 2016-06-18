#include <iostream>
#include <set>
using namespace std;

int main(){
	set<int> s;
	set<int>::iterator it;
	int a[]= {1,2,3,4,5};
	for(int i =0; i<5; i++)
		s.insert(a[i]);

	for(it=s.begin(); it!=s.end(); it++)
		cout<<*it<<' ';
	cout<<endl;

	return 0;
}