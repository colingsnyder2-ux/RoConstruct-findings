// from server: 23% by colin
// roc 2007-08 004ab110  unit: RBX::Network::Peer  size: 185 bytes

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char color;
    char pad[3];
    int key;
};

struct Tree {
    Node* header;
};

struct Peer {
    Tree tree;
    int insert_unique(Node* hint, Node* node);
    int insert_unique_impl(Node* hint, Node* node);
    void rotate_left(Node* x);
    void rotate_right(Node* x);
    int insert_result(Node* hint, Node* node);
};

struct Result {
    Node* first;
    Node* second;
    char inserted;
    char pad[3];
};

int __stdcall sub_4a5200();
int __stdcall sub_4a9d70();

int Peer::insert_unique(Node* hint, Node* node)
{
    Node* header = tree.header;
    Node* y = header->parent;
    char comp = 1;
    Node* x;
    if (y->color == 0) {
        while (1) {
            if (node->key < y->key) {
                x = y->left;
                comp = 1;
            } else {
                x = y->right;
                comp = 0;
            }
            if (x->color != 0)
                break;
            y = x;
        }
    }
    Node* pos = y;
    if (comp) {
        if (y == header->left) {
            Result* r = (Result*)this->insert_unique_impl(y, node);
            return 0;
        }
        sub_4a5200();
    }
    if (y->key < node->key) {
        Result* r = (Result*)this->insert_unique_impl(y, node);
        return 0;
    }
    return 0;
}
