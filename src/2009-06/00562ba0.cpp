// from server: 53% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char color;
    char pad[0x60];
    char isNil;
};

struct Tree {
    Node* header;
    Node* root;
    void erase();
};

void Tree::erase() {
    if (this->header == 0)
        _invalid_parameter_noinfo();

    Node* node = this->root;

    if (node->isNil) {
        node = node->right;
        this->root = node;
        if (node->isNil) {
            _invalid_parameter_noinfo();
            return;
        }
    } else {
        Node* left = node->left;
        if (left->isNil) {
            Node* p = node->parent;
            if (p->isNil) {
                this->root = p;
                return;
            }
            Node* cur = node;
            while (cur == p->left) {
                cur = p;
                p = p->parent;
                if (p->isNil) {
                    this->root = p;
                    return;
                }
            }
            this->root = p;
            return;
        }
        Node* cur = left;
        while (!cur->right->isNil)
            cur = cur->right;
        this->root = cur;
        return;
    }

    Node* cur = node->left;
    if (!cur->isNil) {
        while (!cur->right->isNil)
            cur = cur->right;
        this->root = cur;
        return;
    }

    Node* p = node->parent;
    while (node == p->left) {
        node = p;
        p = p->parent;
    }
    this->root = p;
}
