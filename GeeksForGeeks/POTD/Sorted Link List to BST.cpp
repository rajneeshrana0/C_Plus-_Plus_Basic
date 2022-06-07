// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct LNode
{
    int data;
    struct LNode *next;

    LNode(int x)
    {
        data = x;
        next = NULL;
    }
};

struct TNode
{

    int data;
    struct TNode *left;
    struct TNode *right;
    TNode(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void preOrder(TNode *node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}

// } Driver Code Ends
// User function Template for C++

// User function Template for C++

/*
//Linked List
struct LNode
{
    int data;
    struct LNode* next;

    LNode(int x){
        data = x;
        next = NULL;
    }
};

//Tree
struct TNode
{

    int data;
    struct TNode* left;
    struct TNode* right;
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
}; */
class Solution
{
public:
    TNode *sortedListToBST(LNode *head)
    {
        // code here
        vector<int> v;
        int count = 0;
        while (head)
        {
            v.push_back(head->data);
            head = head->next;
            count++;
        }
        int start = 0;
        int end = count - 1;
        return bst(v, start, end);
    }
    TNode *bst(vector<int> &v, int s, int e)
    {

        if (s > e)
            return NULL;
        int m = (s + e + 1) / 2;
        TNode *temp = new TNode(v[m]);
        temp->left = bst(v, s, m - 1);
        temp->right = bst(v, m + 1, e);
        return temp;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int data;
        cin >> data;
        LNode *head = new LNode(data);
        LNode *tail = head;
        for (int i = 0; i < n - 1; ++i)
        {
            cin >> data;
            tail->next = new LNode(data);
            tail = tail->next;
        }
        Solution ob;
        TNode *Thead = ob.sortedListToBST(head);
        preOrder(Thead);
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends

/*Sorted Link List to BST
Hard Accuracy: 66.25% Submissions: 7518 Points: 8
Given a Singly Linked List which has data members sorted in ascending order. Construct a Balanced Binary Search Tree which has same data members as the given Linked List.
Note: There might be nodes with same value.

Example 1:

Input:
Linked List: 1->2->3->4->5->6->7
Output:
4 2 1 3 6 5 7
Explanation :
The BST formed using elements of the
linked list is,
      4
    /   \
   2     6
 /  \   / \
1   3  5   7
Hence, preorder traversal of this
tree is 4 2 1 3 6 5 7
Example 2:

Input:
Linked List : 1->2->3->4
Ouput:
3 2 1 4
Exaplanation:
The BST formed using elements of the
linked list is,
    3
  /  \
 2    4
/
1
Hence, the preorder traversal of this
tree is 3 2 1 4
Your task :
You don't have to read input or print anything. Your task is to complete the function sortedListToBST(), which takes head of the linked list as an input parameter and returns the root of the BST created.

Expected Time Complexity: O(N), N = number of Nodes
Expected Auxiliary Space: O(N), N = number of Nodes

Constraints:
1 ≤ Number of Nodes ≤ 106
1 ≤ Value of each node ≤ 106

*/