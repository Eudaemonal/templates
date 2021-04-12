#include <iostream>

struct Node {
    int val;
    Node *next;
    Node(int x) : val(x), next(NULL) {}
};

Node* append(Node* head, int val){
    Node* node = new Node(val);
    if(head == NULL) {
        return node;
    }
    Node* curr = head;
    while(curr->next) {
        curr = curr->next;
    }
    curr->next = node;
    return head;
}

std::ostream& operator<<(std::ostream& os, Node* curr){
    while(curr){
        os << curr->val;
        os << " ";
        curr = curr->next;
    }
    os << "\n";
    return os;
}

Node* f(Node* head){
    return head;
}

int main(int argc, char *argv[]){
    Node* head;
    int n, val;
    std::cin >> n;
	for(int i = 0; i < n; ++i){
		std::cin >> val;
		head = append(head, val);
	}

	std::cout << f(head);

	return 0;
}


