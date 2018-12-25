#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
int evalRPN(vector<string>& tokens) {
	stack<int> num;
	for (size_t i = 0; i < tokens.size(); i++){
		string& str = tokens[i];
		if (!("+" == str || "-" == str || "*" == str || "/" == str)){
			num.push(atoi(str.c_str()));          //½«Êý×ÖÈëÕ»
		}
		else{
			int right = num.top();
			num.pop();
			int left = num.top();
			num.pop();
			switch (str[0])
			{
			case '+':
				num.push(left + right);
				break;
			case '-':
				num.push(left - right);
				break;
			case '*':
				num.push(left*right);
				break;
			case '/':
				num.push(left / right);
				break;
			}
		}
	}
	return num.top();
}
int main()
{
	vector<string> s; //["2", "1", "+", "3", "*"]
	s.push_back("2");
	s.push_back("1");
	s.push_back("+");
	s.push_back("3");
	s.push_back("*");
	cout << evalRPN(s) << endl;
	return 0;
}