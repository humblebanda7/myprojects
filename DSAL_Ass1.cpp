//============================================================================
// Name        : BinaryTree.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
using namespace std;

class node{
public:
	int data;
	node*right;
	node*left;
	node(int data){
		this->data=data;
		this->right=right;
		this->left=left;
	}
};

node*Createtree(node*root){
	cout<<"Enter data :"<<endl;
	int data;
	cin>>data;
	root=new node(data);

	if(data==-1){
		return NULL;
	}

	do
	{
		cout<<"Enter the data to the left of "<<data<<endl;
		root->left=Createtree(root->left);
	}while(data!=0);

	do
	{
		cout<<"Enter the data to the right of "<<data<<endl;
		root->right=Createtree(root->right);
	}while(data!=0);

	return root;

}

//1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
void preorder(node*root){
	if(root==NULL){
		return;
	}
	cout<<root->data<<" ";

		preorder(root->left);
		preorder(root->right);

}
void inorder(node*root){

	if(root==NULL){
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void postorder(node*root){
	if(root==NULL){
		return;
	}
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
}

int main() {
	node*root;
	root=NULL;
	root=Createtree(root);
	cout<<"Preorder :";
	preorder(root);
	cout<<endl;
	cout<<"Inorder :";
	inorder(root);
	cout<<endl;
	cout<<"Postorder :";
	postorder(root);

	return 0;
}
