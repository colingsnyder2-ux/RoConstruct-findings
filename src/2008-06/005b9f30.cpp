// from server: 35% by colin
struct Node {
    Node* left;
    Node* parent;
    Node* right;
    char color;
    char pad[0x30];
    char isNil;
};

struct Tree {
    Node* head;
    Node* root;
    Node* begin;
    int size;
};

struct Prop {
    char pad0[0x18];
    Tree* tree;
};

struct Result {
    Node* first;
    Node* second;
    char flag;
};

extern "C" int __stdcall compare_key(void*, void*);
extern "C" void __stdcall invalid_param();
extern "C" void __stdcall shared_release(void*);

struct VSoundId {
    Result* find(void* key, Result* out);
    Result* insert(void* key, Node* hint, int flag, Result* out);
};

Result* VSoundId::find(void* key, Result* out)
{
    Tree* t = *(Tree**)((char*)this + 0x18);
    Node* cur = t->head->parent;
    char ok = 1;
    while (cur->isNil == 0) {
        ok = (char)compare_key(key, (char*)cur + 0xc);
        if (ok)
            cur = cur->left;
        else
            cur = cur->right;
    }
    Node* first = t->head->left;
    Node* second = cur;
    if (ok) {
        Node* root = t->head->parent;
        if (first != 0) {
            if (first != first)
                invalid_param();
        }
        if (cur == root) {
            Result* r = insert(key, cur, 1, out);
            out->first = r->first;
            out->second = r->second;
            out->flag = 1;
            return out;
        }
        shared_release(0);
    }
    if (compare_key((char*)second + 0xc, key)) {
        Result* r = insert(key, first, ok, out);
        out->first = r->first;
        out->second = r->second;
        out->flag = 1;
        return out;
    }
    out->first = first;
    out->second = second;
    out->flag = 0;
    return out;
}
