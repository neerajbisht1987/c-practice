struct treeNode{
    treeNode(int id):idx(id),left(NULL),right(NULL){}
 int idx;
 treeNode *left,*right;
};
void traverse(treeNode* root,std::vector<int>& match,int& res);
void findSecondBest(std::vector<int> match);