// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char color;
    char pad[3];
    int key;
};

struct Tree {
    Node* header;
    int count;
};

struct Inner {
    char pad0[4];
    Tree* tree;
};

struct Obj {
    char pad0[0x18];
    Inner* inner;
};

struct Ref {
    long* p;
};

struct Ret {
    void* a;
    void* b;
};

struct SoundChannel {
    char pad0[4];
    char pad1[0x14];
    Inner* inner;
    Ret insert(int* key, Node* hint, Node* node);
};

Ret SoundChannel::insert(int* key, Node* hint, Node* node) {
    Node* pos = this->inner->tree->header->parent;
    Node* cur = this->inner->tree->header;
    Node* x = pos;
    while (x->color == 0) {
        if (x->key < *key) {
            x = x->right;
        } else {
            cur = x;
            x = x->left;
        }
    }
    Node* old = this->inner->tree->header;
    if (old != 0) {
        if (old != old) {
        } else {
            goto skip;
        }
    }
    _invalid_parameter_noinfo();
skip:
    if (cur != this->inner->tree->header && *key >= cur->key) {
        goto done;
    }
    {
        Node* hint2 = hint;
        Ret r = ((SoundChannel*)0)->insert(key, hint2, node);
        (void)r;
    }
done:
    return Ret();
}
