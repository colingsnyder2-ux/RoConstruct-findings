// from server: 30% by atomic.potato
extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    char pad0[8];
    int key;
    char pad12[0x19 - 0xc];
    char color;
    char pad1a[0x20 - 0x1a];
    Node* parent;
    Node* left;
    Node* right;
};

struct Tree {
    char pad0[0x18];
    Node* header;
};

struct VSoundId {
    char pad0[0x18];
    Node* field_18;
    void* f(void* a, void* b);
};

void* VSoundId::f(void* a, void* b) {
    Node* cur = field_18->left;
    Node* prev = field_18;
    int k = *(int*)a;
    while (cur->color == 0) {
        if (cur->key >= k) {
            prev = cur;
            cur = cur->left;
        } else {
            cur = cur->right;
        }
    }
    Node* hdr = field_18;
    Node* saved = prev;
    void* p = *(void**)this;
    if (p != 0) {
        if (p != p) {
            _invalid_parameter_noinfo();
        }
    }
    if (prev != hdr && *(int*)a >= prev->key) {
        *(Node**)b = saved;
        *(Node**)((char*)b + 4) = hdr;
        return b;
    }
    *(Node**)b = hdr;
    *(Node**)((char*)b + 4) = saved;
    return b;
}
