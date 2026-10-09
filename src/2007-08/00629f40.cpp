// from server: 80% by colin
// roc 2007-08 00629f40  unit: RBX::AssemblyStage  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00629f40

extern "C" int __stdcall string_less(const void* a, const void* b);

struct Node {
    Node* left;
    Node* right;
    Node* parent;
    char pad[0x29 - 0xc];
    char color;
};

struct Tree {
    Node* head;
};

struct AssemblyStage {
    char pad[4];
    Tree* tree;
    Node* find(const void* key);
};

Node* AssemblyStage::find(const void* key) {
    Node* x = tree->head->parent;
    Node* y = tree->head;
    if (x->color == 0) {
        while (x->color == 0) {
            if (string_less((const char*)x + 0xc, key)) {
                x = x->right;
            } else {
                y = x;
                x = x->left;
            }
        }
    }
    return y;
}
