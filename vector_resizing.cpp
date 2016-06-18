#include <iostream>
#include <vector>
#include <functional> 
#include <algorithm>
#include <numeric>  
using namespace std;

void print(vector<int> a);

int main(){
	vector<int> a,b;
	int i=1;
	while(i<=10)
		a.push_back(i++);
	vector<int>::const_iterator first = a.begin()+1;
	vector<int>::const_iterator last = a.begin()+4;
	vector<int> newV(first,last);
	print(newV);
	cout<<accumulate(a.begin(),a.end(),0)<<endl;;
}

void print(vector<int> a){
	int i;
	for(i=0; i<a.size(); i++)
		cout<<a[i]<<" ";
}
