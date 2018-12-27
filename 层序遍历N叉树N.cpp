//#include <iostream>
//#include <vector>
//#include <string>
//#include <queue>
//using namespace std;
//class Node {
//public:
//	int val = NULL;
//	vector<Node*> children;
//	Node() {}
//	Node(int _val, vector<Node*> _children) {
//		val = _val;
//		children = _children;
//	}
//};
//
//vector<vector<int>> levelOrder(Node* root) {
//	vector<vector<int>> vv;
//	if (root == nullptr){
//		return vv;
//	}
//	queue<Node*> q;
//	q.push(root);
//	while (!q.empty()){
//		int sz = q.size();
//		vector<int> v;
//		while (sz--){
//			Node* top = q.front();
//			v.push_back(top->val);
//			q.pop();
//			if (!top->children.empty()){
//				for (int i = 0; i<top->children.size(); i++){      //±éÀúNodeÀï±ßµÄchildren
//					q.push(top->children[i]);
//				}
//			}
//		}
//		vv.push_back(v);
//	}
//	return vv;
//}