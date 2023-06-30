// Code by - Devansh Lohiya
#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
vector<int> getPostOrderTraversal(TreeNode *root)

{

vector<int> res;

// Write your code here.

stack<pair<TreeNode*, int>> sack;

if(root != NULL) sack.push({root,0});

 

while(!sack.empty()){

TreeNode *k = sack.top().first;

int state = sack.top().second;

 

sack.pop();

 

if(state == 3) continue;

 

sack.push({k, state+1});

 

if(state == 0 && k->left != NULL){

sack.push({k->left,0});

}

else if(state == 1 && k->right!= NULL){

sack.push({k->right,0});

}

else if(state == 2){

res.push_back(k->data);

}

}

 

return res;

}
