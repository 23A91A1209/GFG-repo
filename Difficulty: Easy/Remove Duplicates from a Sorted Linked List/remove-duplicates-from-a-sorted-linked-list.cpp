/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        Node* temp=head;
        while(temp && temp->next){
            if(temp->data==temp->next->data){
                temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
};