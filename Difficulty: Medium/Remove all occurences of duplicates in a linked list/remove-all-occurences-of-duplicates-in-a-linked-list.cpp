//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
// User function Template for C++

/* Linked List node structure

struct Node {
    int data;
    struct Node *next;
};

*/

class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
        Node *curr = head;
        Node *prev = NULL;
        Node *temp = NULL;
        bool flag = 0;
        while(curr){
            if(curr->next && curr->data == curr->next->data){
                curr->next = curr->next->next;
                flag = 1;
                continue;
            }
            
            if(!flag){
                if(prev==NULL) {
                    prev = new Node(curr->data);
                    temp = prev;
                }
                else{
                    prev->next = new Node(curr->data);
                    prev = prev->next;
                }
            }

            curr = curr->next;
            flag = 0;
            
        }
        return temp;
     }
   
};

//{ Driver Code Starts.
/* Function to print linked list */
void printList(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

// Driver program to test above functions
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;

        cin >> N;

        Node *head = NULL;
        Node *temp = head;

        for (int i = 0; i < N; i++) {
            int data;
            cin >> data;
            if (head == NULL)
                head = temp = new Node(data);
            else {
                temp->next = new Node(data);
                temp = temp->next;
            }
        }

        Solution ob;
        head = ob.removeAllDuplicates(head);
        printList(head);

        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends