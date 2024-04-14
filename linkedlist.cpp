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
    Node* convert_Arr_2_ll(vector<int>&arr){
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i = 1;i<arr.size();i++){
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            mover = temp;
        }
        return head;
    }
    int lengthofll(Node * head){
        Node* temp = head ;
        int cnt =0 ;
        while (temp!=nullptr)
        {
            temp = temp->next;
            cnt++;
        }
        return cnt;
    }
    int checkifpresent(Node* head , int val){
           Node* temp = head;
           while(temp){
            if(temp->data == val) return 1;
            temp = temp->next;
           }
           return 0 ;
    }
    Node * deletionHead(Node* head){
       if(head==NULL) return head;
       Node *temp = head;
       head = head->next;
       delete temp;
       return head;
    }
    void print(Node* head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head = head->next;
        }
        cout<<endl;
    }
    Node * deletetail(Node * head){
        if(head==NULL || head->next==NULL) return NULL;
        Node * temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
        return head;
    }
    Node*deletek(Node* head , int k){
        if(head == NULL) return head;
        if(k==1) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        int cnt =0 ;
        Node* temp = head ;
        Node *prev = NULL;
        while(temp->next!=NULL){
            cnt++;
            if(cnt==k){
                prev->next = prev->next->next;
                delete temp;
                break;
            }
            prev = temp;
            temp = temp->next;
        }
        return head;
    }
    int main(){
        vector<int>arr = {1,2,3,4,5,6,7,8};
        Node* head = convert_Arr_2_ll(arr);
        // head = deletionHead(head);
        // head = deletetail(head);
        head = deletek(head,3);
          print(head);
        }
 