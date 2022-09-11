#include <iostream>
using namespace std;
int sum (int value1, int value2) {
	int result = value1 + value2;
	return result;
}
int difference (int value1, int value2) {
	int result = value1 - value2;
	return result;
}
int product (int value1, int value2) {
	int result = value1 * value2;
	return result;
}
int division (int value1, int value2) {
	int result = value1 / value2;
	return result;
}
int main () {
	int value1, value2, result;
	cout<<"a minimal calculator for calculating arithmetic operations on two integers only! \n";
	cout<<"enter first value \n";
	cin>>value1;
	cout<<"enter second value \n";
	cin>>value2;
	string symbol = "";
	cout<<"enter symbol choosing from + - * / \n";
	cin>>symbol;
	if (symbol == "+") {
		result = sum (value1, value2);
		cout<<"sum is : "<<result<<" \n";
	}else if (symbol == "-") {
		result = difference (value1, value2);
		cout<<"difference is : "<<result<<" \n";
	}else if (symbol == "*") {
		result = product (value1, value2);
		cout<<"product is : "<<result<<" \n";
	}else if (symbol == "/") {
		result = division (value1, value2);
		cout<<"division is : "<<result<<" \n";
	}else {
		cout<<"wrong symbol input! \n";
	}
	return 0;
}