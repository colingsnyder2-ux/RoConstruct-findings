// from server: 30% by colin
extern "C" {
    void __stdcall _invalid_parameter_noinfo();
    void __cdecl _free(void*);
}

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char color;
    char pad[3];
    int key;
};

struct Alloc {
    void* alloc(unsigned int);
    void dealloc(void*);
};

struct Tree {
    Node* head;
    unsigned int count;
};

struct Pair {
    Node* first;
    Node* second;
};

struct TextureItem {
    char pad0[4];
    Tree* tree;
    Pair* find_or_insert(int* key);
    void erase(Node* node);
    Pair* insert_unique(Node* pos, int* key);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);

void TextureItem::erase(Node* node) {
    if (node->left != 0) {
        _invalid_parameter_noinfo();
    }
    if (node->right != node->parent) {
        _invalid_parameter_noinfo();
    }
    operator_delete((char*)node + 0x10);
}

Pair* TextureItem::find_or_insert(int* key) {
    Node* head = tree->head;
    Node* cur = head->parent;
    Node* result;
    if (cur->color == 0) {
        int k = *key;
        while (1) {
            if (cur->key < k) {
                cur = cur->right;
            } else {
                result = cur;
                cur = cur->left;
            }
            if (cur->color != 0) break;
        }
    } else {
        result = head;
    }
    if (result == head || *key < result->key) {
        Pair local;
        local.first = 0;
        local.second = 0;
        int k = *key;
        Pair* p = insert_unique(result, &k);
        Pair* ret = p;
        Node* n1 = ret->first;
        Node* n2 = ret->second;
        if (n1 != 0) {
            erase(n1);
            operator_delete(n1);
        }
        if (n2 != 0) {
            erase(n2);
            operator_delete(n2);
        }
        return ret;
    }
    return (Pair*)0;
}

Pair* TextureItem::insert_unique(Node* pos, int* key) {
    return 0;
}
