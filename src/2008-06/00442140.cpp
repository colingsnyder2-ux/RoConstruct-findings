// from server: 20% by colin
// roc 2008-06 00442140  unit: TextureItem  size: 295 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00442140

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void* __cdecl sub_6A0920(unsigned int);
extern "C" void __cdecl sub_5ACB00(void*, void*);
extern "C" void __cdecl sub_5A2FE0(void*);

struct Node {
    char pad[8];
    Node* left;
    Node* right;
    char pad2[0x29 - 0x10];
    char color;
};

struct Map {
    char pad[4];
    Node* head;
};

struct TextureItem {
    void* vtable;
    char pad[0x14];
    Map* map;
    int field1c;
    void* sub_441F20(void*, void*, void*, void*);
};

void* TextureItem::sub_441F20(void* a, void* b, void* c, void* d) {
    return 0;
}

void __stdcall TextureItem_sub_442140(TextureItem* self, int* key) {
    Node* node = self->map->head;
    Node* parent = node;
    Node* cur = node->left;
    while (cur->color == 0) {
        if (cur->right < (Node*)key[0]) {
            cur = cur->right;
        } else {
            parent = cur;
            cur = cur->left;
        }
    }
    void* v = self->vtable;
    if (v != 0) {
        if (v == v) {
        } else {
            _invalid_parameter_noinfo();
        }
    }
    if (parent != self->map->head) {
        if ((unsigned int)key[0] >= (unsigned int)parent->right) {
            goto done;
        }
    }
    {
        void* mem = sub_6A0920(4);
        if (mem != 0) {
            *(void**)mem = &mem;
        } else {
            mem = 0;
        }
        void* local14 = mem;
        void* local20 = 0;
        void* local24 = 0;
        void* local28 = 0;
        void* local2c = (void*)key[0];
        sub_5ACB00(&local14, &local2c);
        void* result = self->sub_441F20(&local14, parent, v, &local2c);
        void* r1 = *(void**)result;
        void* r2 = *(void**)((char*)result + 4);
        sub_5A2FE0(&local2c);
        sub_5A2FE0(&local14);
        if (r1 == 0) {
            _invalid_parameter_noinfo();
            if (r2 == *(void**)((char*)r1 + 0x18)) {
                _invalid_parameter_noinfo();
            }
            return;
        }
        r1 = *(void**)r1;
        if (r2 == *(void**)((char*)r1 + 0x18)) {
            _invalid_parameter_noinfo();
        }
        return;
    }
done:
    return;
}
