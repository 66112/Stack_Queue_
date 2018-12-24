//#include <iostream>
//#include <vector>
//#include <string>
//#include <queue>
//using namespace std;
//class MyStack {
//	queue<int> q1;
//	queue<int> q2;
//public:
//	void push(int x) {
//		if (!q2.empty()){
//			q2.push(x);
//			return;
//		}
//		q1.push(x);
//	}
//
//	/** Removes the element on top of the stack and returns that element. */
//	int pop() {                     //始终保持一个队列为空
//		if (!q1.empty()){
//			int sz = q1.size();
//			for (size_t i = 0; i < sz - 1; i++){
//				q2.push(q1.front());
//				q1.pop();
//			}
//			int ret = q1.front();
//			q1.pop();
//			return ret;
//		}
//		if (!q2.empty()){
//			int sz = q2.size();
//			for (size_t i = 0; i < sz - 1; i++){
//				q1.push(q2.front());
//				q2.pop();
//			}
//			int ret = q2.front();
//			q2.pop();
//			return ret;
//		}
//		else
//			return NULL;
//	}
//
//	/** Get the top element. */
//	int top() {
//		if (!q1.empty()){
//			int sz = q1.size();
//			for (size_t i = 0; i < sz - 1; i++){
//				q2.push(q1.front());
//				q1.pop();
//			}
//			int ret = q1.front();
//			q2.push(ret);
//			q1.pop();
//			return ret;
//		}
//		if (!q2.empty()){
//			int sz = q2.size();
//			for (size_t i = 0; i < sz - 1; i++){
//				q1.push(q2.front());
//				q2.pop();
//			}
//			int ret = q2.front();
//			q1.push(ret);
//			q1.pop();
//			return ret;
//		}
//		else
//			return NULL;
//	}
//
//	/** Returns whether the stack is empty. */
//	bool empty() {
//		if (q1.empty() && q2.empty())
//			return true;
//		return false;
//	}
//};
//
//int main()
//{
//	MyStack m;
//	m.push(1);
//	m.push(2);
//	m.push(3);
//	cout << m.top() << endl;
//	return 0;
//}