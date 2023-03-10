#ifndef NODE_HPP
#define NODE_HPP
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) { // Constructor
        data = value;
        next = nullptr;
    }

    ~Node() { // Destructor
        delete next;
    }
};

#endif // WHAT DOES THIS DO