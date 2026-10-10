// from server: 44% by Intel
struct Node {
    Node* left;
    Node* right;
    Node* parent;
    unsigned char color;
};

struct Tree {
    Node* header;
};

void __stdcall Tree_InsertNode(Tree* tree, Node* node) {
    Node* y = tree->header;
    Node* x = y->left;
    node->left = x;
    y->left = node;
    x = node->left;
    if (x->color == 0) {
        x->parent = node;
    }
    x = node->parent;
    y->parent = x;
    x = x->parent;
    if (node == x->parent) {
        x->parent = y;
        y->left = node;
        node->parent = y;
        return;
    }
    x = node->parent;
    if (node == x->left) {
        x->left = y;
        y->left = node;
        node->parent = y;
        return;
    }
    x->right = y;
    y->left = node;
    node->parent = y;
}
