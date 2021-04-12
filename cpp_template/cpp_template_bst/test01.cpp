#include <iostream>
#include <string>
#include <iomanip>
#include <queue>

struct Node {
    int val;
    Node *left;
    Node *right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

Node* insert(Node *root, int val){
    if(root == NULL) {
        return new Node(val);
    }
    if (root->val > val) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

void horizontal(std::ostream& os, Node* p, int indent){
    if(p != NULL) {
        if(p->right) {
            horizontal(os, p->right, indent+4);
        }
        if (indent) {
            os << std::setw(indent) << ' ';
        }
        if (p->right) os <<" /\n" << std::setw(indent) << ' ';
        os << p->val << "\n ";
        if(p->left) {
            os << std::setw(indent) << ' ' <<" \\\n";
            horizontal(os, p->left, indent+4);
        }
    }
}

std::ostream& operator<<(std::ostream& os, Node *root)  {  
    if (root == NULL) return os;
    horizontal(os, root, 0);
    return os;
}

Node* f(Node* root) {
    return root;
}

int main(int argc, char *argv[]){
    Node* root;
    int n, val;
    std::cin >> n;
    for (int i=0; i<n; ++i) {
        std::cin >> val;
        root = insert(root, val);
    }
    std::cout << f(root);
}


