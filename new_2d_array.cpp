#include <iostream>
using namespace std;

void print(int **x, int m, int n){
	cout<<x[0][0]<<endl;
}
int main(){
	int rows = 5;
	int cols = 3;
	int **a = new int*[rows];
	
	for(int i=0; i<rows; i++)
		a[i] = new int[cols];

	a[0][0] = 32;
	print(a,5,3);
	return 0;
}