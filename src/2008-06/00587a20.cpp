// from server: 47% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* parent;
    Node* left;
    Node* right;
    int color;
    int key;
    int value;
};

struct Tree {
    Node* header;
    int count;
};

struct Iter {
    Node* node;
    Tree* tree;
};

struct S {
    Tree* tree;
    int pad[5];
    bool f();
};

void __fastcall advance(Iter* it);

bool S::f() {
    Tree* t = *(Tree**)((char*)this + 0x18);
    Node* header = t->header;
    Node* root = *(Node**)this;
    Iter it;
    it.node = root;
    it.tree = t;
    Node* cur = it.node;
    if (cur == 0 || cur == root) {
        _invalid_parameter_noinfo();
    }
    while (it.node != header) {
        if (it.node == 0) {
            _invalid_parameter_noinfo();
            if (it.node->parent == it.node) {
                _invalid_parameter_noinfo();
            }
            if (it.node->right != 0) {
                return false;
            }
            advance(&it);
        } else {
            it.node = it.node->parent;
        }
    }
    return true;
}
