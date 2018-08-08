#include<vector>
#include<list>
#include<iostream>
#include"tournament.h"
using namespace std;


treeNode * createtreeNode(int id)
{
    return new treeNode(id);
}
void traverse(treeNode* root,std::vector<int>& match,int& res)
{
    if(root==NULL ||(root->left==NULL && root->right==NULL))
    {
        return;
    }

      if (res > match[root->left->idx] &&
       root->left->idx != root->idx)
    {
        res = match[root->left->idx];
        traverse(root->right, match, res);
    }
     else if (res > match[root->right->idx] &&
       root->right->idx != root->idx)
    {
        res = match[root->right->idx];
        traverse(root->right, match, res);
    }
}
void findSecondBest(std::vector<int> match)
{
    std::list<treeNode*> list;
    for(int i=0;i<match.size();i=i+2)
    {
        treeNode *left=NULL,*right=NULL,*head=NULL;
        left=createtreeNode(i);
        if(i+1<match.size() && (i+1)%2 ==0)
        {
            right=createtreeNode(i+1);
            if(match[i]<match[i+1])
            {
                head=createtreeNode(i);
            }
            else{
                head=createtreeNode(i+1);
            }
        }
        else
            head=createtreeNode(i);
        head->left=left;
        head->right=right;
        list.push_back(head);
    }
    int lastsize=list.size();
    while(lastsize>1)
    {
        int last =lastsize&1?lastsize-2:lastsize-1;

        for(int i=0;i<last;i=i+2)
        {
            auto f1 = list.front();
            list.pop_front();
            auto f2 = list.front();
            list.pop_front();
            auto root= match[f1->idx]<match[f2->idx]?createtreeNode(f1->idx):createtreeNode(f2->idx);
            root->left=f1;
            root->right=f2;
            list.push_back(root);
        }
        if(lastsize&1)
        {
            list.push_back(list.front());
            list.pop_front();
        }

        lastsize=list.size();
    }
    int res=INT_MAX;
    auto root=list.front();
    traverse(root,match,res);
    std::cout<<"maximum:"<<match[root->idx]<<"  second minimum:"<<res;
}