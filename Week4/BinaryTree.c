#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node*left;
struct node*right;
};
struct node* root=NULL,*cur,*temp;
struct node*create()
{
 cur=(struct node*)malloc(sizeof(struct node));
 scanf("%d",&cur->data);
 cur->left=NULL;
 cur->right=NULL;
 if(root==NULL)
  root=cur;
 else
 {
 temp=root;
 while(temp!=NULL)
 {
  if(cur->data<temp->data&&temp->left==NULL)
  {
     temp->left=cur;
     return root;
  }
  else if(cur->data<temp->data&&temp->left!=NULL)
temp=temp->left;
  else if(cur->data>=temp->data&&temp->right==NULL){
        temp->right=cur;
return root;
  }
  else if(cur->data>=temp->data&&temp->right!=NULL)
temp=temp->right;
 }
 }
return root;
}
void preorder(struct node*root)
{
 if(root!=NULL)
 {
printf("%d",root->data);
preorder(root->left);
    preorder(root->right);
 }
}
void inorder(struct node*root)
{
 if(root!=NULL)
{
inorder(root->left);
     printf("%d",root->data);
     inorder(root->right);
    }
}
void postorder(struct node*root)
{
 if(root!=NULL)
{
     postorder(root->left);
     postorder(root->right);
printf("%d",root->data);
    }
}
int main()
{
 int ch;
 while(1)
 {
  printf("1-create\n2-preorder\n3-inorder\n4-postorder\n5-exit\n");
  printf("enter your choice");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:root=create();
          break;
   case 2:preorder(root);
          break;
   case 3:inorder(root);
          break;
   case 4:postorder(root);
          break;
   case 5:exit(0);
    }
  }
}

/*OUTPUT:
1-create
2-preorder
3-inorder
4-postorder
5-exit
enter your choice1
2
1-create
2-preorder
3-inorder
4-postorder
5-exit
enter your choice1
5
1-create
2-preorder
3-inorder
4-postorder
5-exit
enter your choice1
7
1-create
2-preorder
3-inorder
4-postorder
5-exit
enter your choice2
2571-create
2-preorder
3-inorder
4-postorder
5-exit
enter your choice3
2571-create
2-preorder
3-inorder
4-postorder
5-exit
enter your choice4
7521-create
2-preorder
3-inorder
4-postorder
5-exit
enter your choice
*/
