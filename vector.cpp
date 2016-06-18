#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	vector<int> a;
	int i;
	for(i=0; i<10; i++){
		a.push_back(i);
	}
	vector<int>::iterator j = find(a.begin(),a.end(),3);
	cout<<j<<endl;
	return 0;
}

void print(vector<int> a){
	int i;
	for(i=0; i<a.size(); i++)
		cout<<a[i]<<" ";
	cout<<endl;
}
/*int main(){
	vector<int> a(5,21); //repeats 21 five times
	//a.push_back(423);
	print(a);
	cout<<a.size()<<endl;
}
*/