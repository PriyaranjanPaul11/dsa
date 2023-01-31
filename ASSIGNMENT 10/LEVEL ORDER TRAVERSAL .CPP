void levelOrder(Node * root) {
        //vector<int>ans;
        queue<Node*>q;
        q.push(root);
        if(root==NULL){
            cout<<"NULL";
        }
        while(!q.empty()){
            Node* temp=q.front();
            q.pop();
            //ans.push_back(temp->data);
            cout<<temp->data<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }

        }
    }
