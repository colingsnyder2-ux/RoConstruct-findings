// from server: 80% by atomic.potato
struct Node {
    Node* left;
    Node* right;
    char pad[0x31];
    char flag;
};

struct Tree {
    char pad0[4];
    Node* head;
};

extern "C" int __stdcall StringLess(const void* a, const void* b);

struct LuaStatsItem {
    char pad0[4];
    Tree* tree;
    Node* find(const void* key);
};

Node* LuaStatsItem::find(const void* key) {
    Node* x = tree->head->right;
    Node* y = tree->head;
    while (x->flag == 0) {
        if (StringLess(&x->pad[0x0c - 0x0c], key)) {
            x = x->right;
        } else {
            y = x;
            x = x->left;
        }
    }
    return y;
}
