#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
typedef struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
}Tree;
vector<int> postorderTraversal(TreeNode* root) {
	vector<int> ret;
	stack<TreeNode*> node;
	TreeNode* prev = nullptr;
	if (root == nullptr){
		return ret;
	}
	TreeNode* cur = root;
	while (cur || !node.empty()){
		while (cur){
			node.push(cur);
			cur = cur->left;
		}
		TreeNode* top = node.top();
		if (top->right == nullptr || top->right == prev)   //一旦右子树访问过了
		{
			ret.push_back(top->val);
			prev = top;
			node.pop();
		}
		else
		{
			cur = top->right;
		}
	}
	return ret;
}
int main()
{
	Tree* root = new TreeNode(1);
	root->left = nullptr;
	root->right = new TreeNode(2);
	//root->right->left = new TreeNode(3);
	vector<int> ret = postorderTraversal(root);
	for (auto x : ret){
		cout << x << " ";
	}
	return 0;
}