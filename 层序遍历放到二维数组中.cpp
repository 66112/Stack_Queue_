#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
typedef struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
}Tree;

vector<vector<int>> levelOrder(TreeNode* root) {
	vector<vector<int>> vv;
	queue<TreeNode*> q;
	if (root == nullptr)
		return vv;
	q.push(root);
	while (!q.empty()){
		int sz = q.size();      //szΪÿ����ĸ���
		vector<int> v;
		while (sz--){
			TreeNode* top = q.front();
			v.push_back(top->val);
			q.pop();
			if (top->left)
				q.push(top->left);
			if (top->right)
				q.push(top->right);
		}
		vv.push_back(v);
	}
	for (int i = 0; i<vv.size() / 2; i++){     //����Ԫ�أ�����ײ��Ԫ�ط��ڵ�һ��
		swap(vv[i], vv[vv.size() - 1 - i]);
	}
	return vv;
}