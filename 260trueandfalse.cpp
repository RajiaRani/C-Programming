#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
	bool boolvalue;
	cin.setf(ios::boolalpha);
	cout.setf(ios::boolalpha);
	cin>>boolvalue;
	cout<<boolvalue;
	return 0;
}