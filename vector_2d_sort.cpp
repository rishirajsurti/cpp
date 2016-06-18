#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
THIS IS HOW THE SORT FUNCTION IS MODIFIED FOR 1D CASE;
bool compare(int a, int b);
int main(){
	vector<int> a;
	int i;
	for(i=10; i>0; i--){
		a.push_back(i);
	}
	for(i=0; i<a.size(); i++)
		cout<<a[i]<<" ";
	cout<<endl;

	sort(a.begin(),a.end(),compare);
	for(i=0; i<a.size(); i++)
		cout<<a[i]<<" ";
	cout<<endl;

}
bool compare(int a, int b){
//	int *a,*b;
//	a = (int *)x;
//	b = (int *)y;
	if( a < b)
		return true;
	else 
		return false;
}*/
//FOR 2D CASE:

bool compare(vector<int> a, vector<int> b);
int main(){
	vector< vector<int> > a;
	vector<int> row;
	row.push_back(3);
	row.push_back(9);
	a.push_back(row);
	row.clear();

	row.push_back(2);
	row.push_back(8);
	a.push_back(row);
	row.clear();

	row.push_back(1);
	row.push_back(7);
	a.push_back(row);
	row.clear();
	int i,j;
	for(i=0; i<a.size(); i++){
		for(j=0; j<a[i].size(); j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}

	sort(a.begin(), a.end(), compare);
	for(i=0; i<a.size(); i++){
		for(j=0; j<a[i].size(); j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}	
	return 0;
}
bool compare(vector<int> a, vector<int> b){
	if(a[1] < b[1])
		return true;
	else
		return false;
}