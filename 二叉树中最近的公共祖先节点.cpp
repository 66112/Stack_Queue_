//#include <iostream>
//#include <vector>
//#include <string>
//#include <stack>
//using namespace std;
//typedef struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//}Tree;
//
//
//bool FindNode(TreeNode* root, TreeNode* node)    //在以root为根的树中找node
//{
//	if (root == nullptr){
//		return false;
//	}
//	if (root == node){
//		return true;
//	}
//	return FindNode(root->left, node) || FindNode(root->right, node);
//}
//TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
//{
//	if (root == nullptr){
//		return root;
//	}
//	if (root == p || root == q)
//		return root;
//	bool lp = FindNode(root->left, p);      //在左右子树中分别找p,q
//	bool lq = FindNode(root->left, q);
//	bool rp = FindNode(root->right, p);
//	bool rq = FindNode(root->right, q);
//	if (lp && lq)            //若都在左子树，那在左子树中继续找
//		return lowestCommonAncestor(root->left, p, q);
//	if (rp && rq)            //若都在右子树，那在右子树中继续找
//		return lowestCommonAncestor(root->right, p, q);
//	if ((lp&&rq) || (rp&&lq))
//		return root;
//	else
//		return nullptr;
//}