#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

// function declaration
int sum(int, int);
void addGivenNumber();
void swapNumber(int*, int*);
void swapNumberR(int*, int*);

int main(){
	string name;
	cout << "enter name";
	getline(std::cin, name);
	cout << "entered name" << name << "!\n";	

	addGivenNumber();
	
	int a = 3, b=4;
	printf("before swapping a:%d, b=%d\n",a,b);
	swapNumber(&a, &b);
	printf("before swapping a:%d, b=%d\n",a,b);
}

// example of pass by pointer
void swapNumber(int* a, int* b){
	int t=*a;
	*a=*b;
	*b=t;
}

// void function
void addGivenNumber(){
  	int x,y;
	cout << "enter no. 1 ";
	cin >> x;

	cout << "enter no. 2 ";
	cin >> y;

	printf("sum(%d, %d)=%d\n",x,y,sum(x,y));
}

// example of pass by value
int sum(int a, int b){
	return a + b;
}


