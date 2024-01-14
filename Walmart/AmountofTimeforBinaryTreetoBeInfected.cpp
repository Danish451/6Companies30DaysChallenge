#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
};
TreeNode* newnode(TreeNode* root, int data){
    root->val = data;
    root->left = NULL;
    root->right = NULL;

    return root;
}
unordered_map<int, vector<int>> graph;
void constructGraph(TreeNode* root){
    if(!root)   return ;
    if(root->left){
        graph[root->left->val].push_back(root->val);
        graph[root->val].push_back(root->left->val);
    }
    if(root->right){
        graph[root->right->val].push_back(root->val);
        graph[root->val].push_back(root->right->val);
    }

    constructGraph(root->left);
    constructGraph(root->right);
}
int amountOfTime(TreeNode* root, int start){
    constructGraph(root);

    int ans = -1;
    queue<int> q;
    q.push(root->val);
    unordered_set<int> visited;
    while(!q.empty()){
        ans++;
        for(int i=q.size(); i>0; i--){
            int node = q.front();
            q.pop();
            visited.insert(node);

            // neightbouring nodes
            for(auto nodes : graph[node]){
                if(visited.find(node) == visited.end()){
                    q.push(node);
                }
            }
        }
    }
    return ans;
}
int main(){
    TreeNode* root = newnode(root, 1);
    root->left = newnode(root->left, 5);
    root->right = newnode(root->right, 3);

    root->left->right = newnode(root->left->right, 4);
    root->right->left = newnode(root->right->left, 10);
    root->right->right = newnode(root->right->right, 6);

    root->left->right->left = newnode(root->left->right->left, 9);
    root->left->right->right = newnode(root->left->right->right, 2);

    int start = 3;
    cout << "TIME = " << amountOfTime(root, start);
}