#include<iostream>
using namespace std;
int sum(int num1, int num2){
	return num1+ num2;
}
int main(){
	int a,b;
	cout<<"enter the values";
	cin>>a>>b;
	int result=sum(a,b);
	cout<<result;
}
