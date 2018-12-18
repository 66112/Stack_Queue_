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
vector<int> inorderTraversal(TreeNode* root) {
	vector<int> ret;
	stack<TreeNode*> node;
	if (root == nullptr){
		return ret;
	}
	TreeNode* cur = root;
	while (cur || !node.empty()){
		while (cur){
			node.push(cur);
			cur = cur->left;
		}
		ret.push_back(node.top()->val);
		cur = node.top()->right;
		node.pop();
	}
	return ret;
}
int main()
{
	Tree* root = new TreeNode(1);
	root->left = nullptr;
	root->right = new TreeNode(2);
	root->right->left = new TreeNode(3);
	vector<int> ret = inorderTraversal(root);
	for (auto x : ret){
		cout << x << " ";
	}
	return 0;
}