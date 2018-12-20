#include <iostream>
#include <stack>
#include <assert.h>
#include <vector>
using namespace std;

class minStack
{
private:
	stack<int> _cur;
	stack<int> _min;
	vector<int> _arr;
public:
	void Push(int x)
	{
		_cur.push(x);
		if (_min.empty())
		{
			_min.push(x);
			_arr.push_back(1);
			return;
		}
		if (x < _min.top())
		{
			_min.push(x);
			_arr.push_back(1);
			return;
		}
		if (x == _min.top())
		{
			_arr[_arr.size() - 1]++;
		}
	}
	void Pop()
	{
		assert(!_cur.empty());
		if (_cur.top() == _min.top())
		{
			if (_arr[_arr.size() - 1] == 1)
			{
				_cur.pop();
				_min.pop();
			}
			else
			{
				_cur.pop();
				_arr[_arr.size() - 1]--;
			}
		}
		else
		{
			_cur.pop();
		}
	}
	int Top()
	{
		return _cur.top();
	}
	int GetMin()
	{
		return _min.top();
	}
};

int main()
{
	minStack min;
	min.Push(1);
	min.Push(8);
	min.Push(0);
	min.Push(0);
	min.Push(0);
	min.Push(3);
	min.Pop();
	min.Pop();
	min.Pop();
	min.Pop();
	cout << min.Top() <<endl;
	cout << min.GetMin() << endl;
	return 0;
}