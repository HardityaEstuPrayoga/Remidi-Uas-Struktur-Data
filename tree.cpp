#include <iostream>

using namespace std;

struct Tree{
 int data;
 Tree *left, *right;
};


Tree *leaft,*leaft2,*leaft3,*leaft4,*leaft5,*leaft6,*leaft7,*leaft8,*leaft9,*leaft10,*leaft11,*nodeBaru,*root=NULL;

Tree *createTree(int data){
    nodeBaru=new Tree();
    nodeBaru->data=data;
    nodeBaru->left=NULL;
    nodeBaru->right=NULL;

    return nodeBaru;
}

void preOrder(Tree *current){
    if(current != NULL){
        cout<<" "<<current->data;
        preOrder(current->left);
        preOrder(current->right);
    }
}

void inOrder(Tree *current){
    if(current != NULL){
        inOrder(current->left);
        cout<<" "<<current->data;
        inOrder(current->right);
    }
}

void postOrder(Tree *current){
    if(current != NULL){
        postOrder(current->left);
        postOrder(current->right);
         cout<<" "<<current->data;
    }
}

//
int main(){
  int p,a;
  string pilih;
    leaft=createTree(21);
    leaft2=leaft->left=createTree(13);
    leaft3=leaft->right=createTree(36);
    leaft4=leaft->left->left=createTree(8);
    leaft5=leaft->right->right=createTree(17);
    leaft6=leaft->left->right=createTree(15);
    leaft7=leaft->right->left=createTree(26);
    leaft8=leaft->left->left->left=createTree(6);
    leaft9=leaft->left->left->right=createTree(11);
    leaft10=leaft->left->right->right=createTree(18);
    leaft11=leaft->right->right->right=createTree(4);



    //input leaft

    preOrder(leaft);
    cout<<endl;
    inOrder(leaft);
    cout<<endl;
    postOrder(leaft);

}
