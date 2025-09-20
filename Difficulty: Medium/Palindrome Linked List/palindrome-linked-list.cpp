/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        stack<int>st;
        Node* temp=head;
        while(temp){
            st.push(temp->data);
            temp=temp->next;
        }
        temp=head;
        while(temp){
            if(st.top()!=temp->data){
                return false;
            }
            st.pop();
            temp=temp->next;
        }
        return true;
    }
};