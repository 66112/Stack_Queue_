//#include <iostream>
//#include <stack>
//using namespace std;
//template<class T>
//class Queue
//{
//private:
//	stack<T> s1;
//	stack<T> s2;
//public:
//	void Push(T data)     //将数据压入栈1
//	{
//		s1.push(data);
//	}
//	void Pop()
//	{
//		if (s1.empty() && s2.empty())
//			cout << "无元素！" << endl;
//		if (!s2.empty())              //从栈2出
//		{
//			s2.pop();
//		}
//		else
//		{
//			while (!s1.empty()){
//				s2.push(s1.top());
//				s1.pop();
//			}
//			s2.pop();
//		}
//	}
//	T& top()
//	{
//		if (s1.empty() && s2.empty())
//			return nullptr;
//		if (s2.empty()){
//			while (!s1.empty()){
//				s2.push(s1.top());
//				s1.pop();
//			}
//		}
//		return s2.top();
//	}
//	bool Empty()
//	{
//		if (s1.empty() && s2.empty())
//			return true;
//		else
//			return false;
//	}
//	void Print()
//	{
//		if (s1.empty() && s2.empty())
//		{
//			cout << "无元素！" << endl;
//			return;
//		}
//		if (s2.empty())
//		{
//			while (!s1.empty()){
//				s2.push(s1.top());
//				s1.pop();
//			}
//		}
//		if (!s2.empty())
//		{
//			while (!s2.empty()){
//				cout << s2.top() << endl;
//				s2.pop();
//			}
//			if (!s1.empty())
//			{
//				while (!s1.empty())
//				{
//					s2.push(s1.top());
//					s1.pop();
//				}
//				while (!s2.empty())
//				{
//					cout << s2.top() << endl;
//					s2.pop();
//				}
//			}
//		}
//	}
//};
//
//int main()
//{
//	Queue<int> q1;
//	q1.Push(1);
//	q1.Push(2);
//	q1.Push(3);
//	q1.Pop();
//	q1.Pop();
//	q1.Push(4);
//	q1.Print();
//	return 0;
//}