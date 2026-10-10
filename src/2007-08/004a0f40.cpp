// from server: 85% by tester
struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char pad[0x2d - 0xc];
    char flag;
};

struct Tree {
    char pad[4];
    Node* header;
};

struct S {
    char pad[4];
    Tree* tree;
    Node* find(const char* key);
};

extern "C" bool __cdecl StringLess(const char* a, const char* b);

Node* S::find(const char* key) {
    Node* header = tree->header;
    Node* node = header->parent;
    Node* result = header;
    if (node->flag == 0) {
        do {
            if (StringLess(key, (const char*)node + 0xc)) {
                result = node;
                node = node->left;
            } else {
                node = node->right;
            }
        } while (node->flag == 0);
    }
    return result;
}
