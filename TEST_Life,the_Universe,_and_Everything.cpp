#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int num;
	int flag=0;
	while(flag==0){
		cin>>num;
		if(num!=42){
			cout<<num<<endl;
		}
		else{
			flag=1;
		}
	}
	return 0;
}