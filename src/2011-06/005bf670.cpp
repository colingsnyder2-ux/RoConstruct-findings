// from server: 25% by atomic.potato
struct Node {
    Node* left;
    Node* right;
    char pad[0x15 - 8];
    char color;
};

struct Tree {
    Node* root;
    void erase(Node*);
};

void Tree::erase(Node* z)
{
    Node* y;
    if (z->left == 0) {
        y = z->right;
    } else if (z->right == 0) {
        y = z->left;
    } else {
        Node* x = z->right;
        while (x->left != 0)
            x = x->left;
        y = x;
    }
    root = y;
}
