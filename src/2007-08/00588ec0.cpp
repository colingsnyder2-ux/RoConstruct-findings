// from server: 43% by colin
struct Name {
    char pad[0x19];
    char flag;
};

struct Node {
    Node* left;
    Node* right;
    int key;
    char pad[0x19 - 0xc - 4];
    char color;
};

struct Map {
    Node* header;
};

struct Container {
    Map* map;
};

struct S {
    Container* c;
    void* find_or_insert(void* key, void* result);
};

void* S::find_or_insert(void* key, void* result) {
    Node* header = c->map->header;
    Node* x = header->left;
    Node* y = header;
    while (x->color == 0) {
        if (x->key < *(int*)key) {
            x = x->right;
        } else {
            y = x;
            x = x->left;
        }
    }
    Node* j = y;
    if (y == header || *(int*)key < y->key) {
        void* tmp[2];
        tmp[0] = this;
        tmp[1] = header;
        *(void**)result = tmp[0];
        *(void**)((char*)result + 4) = tmp[1];
    } else {
        void* tmp[2];
        tmp[0] = this;
        tmp[1] = y;
        *(void**)result = tmp[0];
        *(void**)((char*)result + 4) = tmp[1];
    }
    return result;
}
