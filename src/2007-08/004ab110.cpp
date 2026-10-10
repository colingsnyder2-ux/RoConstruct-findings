// from server: 26% by tester
struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char color;
    char pad[3];
    int key;
};

struct Pair {
    Node* first;
    Node* second;
    char inserted;
    char pad[3];
};

struct Tree {
    Node* header;
    Node* root;
    Pair insert_unique_hint(Node* hint, Node* value);
};

struct Peer {
    Tree tree;
    Pair insert_unique(Node* value);
};

Pair Tree::insert_unique_hint(Node* hint, Node* value) {
    Pair result;
    result.first = hint;
    result.second = value;
    result.inserted = 1;
    return result;
}

Pair Peer::insert_unique(Node* value) {
    Node* y = tree.header;
    Node* x = tree.header->parent;
    char comp = 1;
    while (x->color == 0) {
        y = x;
        if (value->key < x->key) {
            comp = 1;
            x = x->left;
        } else {
            comp = 0;
            x = x->right;
        }
    }
    Node* j = y;
    Pair result;
    result.first = j;
    result.second = 0;
    if (comp) {
        if (j == tree.header->left) {
            return tree.insert_unique_hint(j, value);
        }
        j = j->parent;
    }
    if (j->key < value->key) {
        return tree.insert_unique_hint(j, value);
    }
    result.first = j;
    result.second = 0;
    result.inserted = 0;
    return result;
}
