#include<bits/stdc++.h>
using namespace std;
 struct Node{
    public:
        int data;
        Node* next;
        public:
        Node(int data1 ,Node*next1){
            data = data1;
            next = next1;
        }
        public:
        Node(int data1){
            data = data1;
            next = nullptr;
        }
    };
    Node * deletionHead(Node* head){
       Node *temp = head;
       temp = temp->next;
       delete temp;
       return head;
    }
        int main(){
        vector<int>arr = {1,2,3,4,5,6,7,8};
        Node *temp = new Node(arr[0]);
         cout<<deletionHead(temp);
        }
 