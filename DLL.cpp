#include<bits/stdc++.h>
using namespace std;
 class Node{
    public:
        int data;
        Node* next;
        Node* back;
        public:
        Node(int data1 ,Node*next1 ,Node* back1){
            data = data1;
            next = next1;
            back = back1;
        }
        public:
        Node(int data1){
            data = data1;
            next = nullptr;
            back = nullptr;
        }
    };
    Node* __convert_Arr_2_dll(vector<int>&arr){
        Node* head = new Node(arr[0]);
        Node* mover = head;
        for(int i = 1;i<arr.size();i++){
            Node* temp = new Node(arr[i]);
            mover->next = temp;
            temp->back = mover;
            mover = temp;
        }
        return head;
    }
    void print(Node* head){
        while(head!=NULL){
            cout<<head->data<<" ";
            head = head->next;
        }
        cout<<endl;
    }
    int main(){
        vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
        Node* head = __convert_Arr_2_dll(arr);
        print(head);
        return 0;
    }