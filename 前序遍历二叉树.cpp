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
//vector<int> preorderTraversal(TreeNode* root)
//{
//	vector<int> ret;
//	vector<int> tmp;
//	if (root == nullptr)
//		return ret;
//	ret.push_back(root->val);
//	tmp = preorderTraversal(root->left);
//	for (size_t i = 0; i < tmp.size(); i++){
//		ret.push_back(tmp[i]);
//	}
//	tmp = preorderTraversal(root->right);
//	for (size_t i = 0; i < tmp.size(); i++){
//		ret.push_back(tmp[i]);
//	}
//	return ret;
//}
vector<int> preorderTraversal(TreeNode* root) {
	vector<int> ret;
	stack<TreeNode*> node;
	if (root == nullptr){
		return ret;
	}
	TreeNode* cur = root;
	while (cur || !node.empty())
	{
		while (cur){
			node.push(cur);
			ret.push_back(cur->val);
			cur = cur->left;
		}
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
	vector<int> ret = preorderTraversal(root);
	for (auto x : ret){
		cout << x << " ";
	}
	return 0;
}
