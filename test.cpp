#include <iostream>
#include<vector>

using namespace std;
int main(){
	int vec[5]={1,2,3,4,5};
	vector<int>arr(vec,vec+5);
	vector<int>::iterator it;
	it = arr.begin();
	for (it; it != arr.end(); it++)
	cout <<"the element is "<< *it << endl;;
}	

