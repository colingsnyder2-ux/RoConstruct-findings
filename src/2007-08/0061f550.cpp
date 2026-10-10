// from server: 32% by colin
struct ScoreHud {
    char pad0[4];
    void* field4;
    void* field8;
    void* fieldC;
    void* insert(void* a, void* b, void* c, void* d);
};

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char color;
    char pad1[0x20];
    unsigned int key;
};

struct Map {
    Node* head;
    Node* find(unsigned int k);
};

struct Pair {
    void* first;
    void* second;
};

struct Iter {
    void* p0;
    void* p1;
    void* p2;
    void* p3;
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" void __cdecl sub_429a50(void* dst, void* src);
extern "C" void __cdecl sub_40a260(void* p);

void* ScoreHud::insert(void* a, void* b, void* c, void* d) {
    return 0;
}

void* ScoreHud_method(ScoreHud* self, unsigned int* key) {
    Node* node = (Node*)self->field4;
    Node* cur = node->parent;
    while (cur->color == 0) {
        if (cur->key < *key) {
            cur = cur->right;
        } else {
            node = cur;
            cur = cur->left;
        }
    }
    Node* found = node;
    if (node != (Node*)self->field4 && *key >= node->key) {
        goto done;
    }
    {
        Iter it;
        it.p0 = 0;
        it.p1 = 0;
        it.p2 = 0;
        it.p3 = (void*)*key;
        sub_429a50(&it, &it);
        void* r = self->insert(&it, found, self, 0);
        void* r0 = ((void**)r)[0];
        void* r1 = ((void**)r)[1];
        sub_40a260(&it);
        sub_40a260(&it);
        if (r0 == 0) {
            void (__stdcall *fn)() = *(void (__stdcall**)())0x77e6d8;
            fn();
        }
        if (r1 == ((void**)r0)[1]) {
            void (__stdcall *fn)() = *(void (__stdcall**)())0x77e6d8;
            fn();
        }
        return (char*)r1 + 0x10;
    }
done:
    return 0;
}
