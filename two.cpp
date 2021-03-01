#include<iostream>
using namespace std;

struct Node 
{
	int data; 
	Node* left;
	Node* right;
};

Node* GetNewNode(int data) 
{
	Node* newNode = new Node();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

Node* Insert(Node* root,int data) 
{
	if(root == NULL)                                      // empty tree
    {                                           
		root = GetNewNode(data);
	}
	
	else if(data <= root->data)                         // if data to be inserted is lesser, insert in left subtree. 
    {
		root->left = Insert(root->left,data);
	}
	
	else                                                // else, insert in right subtree. 
    {
		root->right = Insert(root->right,data);
	}
	return root;
}

int size_of_tree(Node* root)
{
    if(root==NULL)
    return 0;
    else
    {
        return 1+size_of_tree(root->left)+size_of_tree(root->right);
    }
    
}




int main() 
{
	Node* root = NULL;  // Creating an empty tree

	root = Insert(root,15);	
	root = Insert(root,10);	
	root = Insert(root,20);
	root = Insert(root,25);
	root = Insert(root,8);
	root = Insert(root,12);

    cout<<"Size of given BST: "<<size_of_tree(root);
}
