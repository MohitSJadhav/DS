#include<iostream>
#include<vector>
#include<iterator>
using namespace std;

int main(){
	vector<int> vector_int;

	for(int i=0 ; i<5 ; i++){
		vector_int.push_back(i);
	}
	cout<<"Size of vector_int: "<<vector_int.size()<<endl;
	cout<<"Capacity of vector_int: "<<vector_int.size()<<endl;
	
	if(vector_int.empty())
		cout<<"Vector is empty!"<<endl;
	else
		cout<<"Vector is not empty!"<<endl;
	
	vector_int.emplace_back(6);
	vector<int>::iterator i;
	for(i= vector_int.begin() ; i != vector_int.end() ; i++){
		cout<< *i <<" "<<endl;
	}
}
