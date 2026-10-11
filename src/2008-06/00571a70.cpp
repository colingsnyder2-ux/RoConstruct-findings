// from server: 20% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    char pad0[0xc];
    void* p0c;
    void* p10;
    long* p14;
    char pad18[0x1d];
    char flag35;
};

struct Tree {
    Node* head;
    char pad4[0x3c];
    Node* root;
};

struct Val {
    void* a;
    void* b;
    char pad8[0x30];
};

struct Result {
    void* a;
    void* b;
    char c;
};

struct CD {
    void* vptr;
    char pad4[0x4];
    void* field8;
    char padc[0x34];
    Tree* tree;
    int find(void* key, void* val, Result* out);
    int insert(void* key, void* val, Result* out);
};

struct SharedPtr {
    void* px;
    Node* pn;
    void reset();
};

int CD::find(void* key, void* val, Result* out) {
    Node* cur = tree->root;
    Node* head = tree->head;
    char inserted = 1;
    while (cur->flag35 == 0) {
        Node* tmp = cur;
        SharedPtr sp1;
        sp1.px = cur->p0c;
        sp1.pn = (Node*)cur->p10;
        long* rc = cur->p14;
        if (rc) _InterlockedExchangeAdd(rc + 1, 1);
        SharedPtr sp2;
        sp2.px = ((SharedPtr*)val)->px;
        sp2.pn = ((SharedPtr*)val)->pn;
        long* rc2 = (long*)((char*)((SharedPtr*)val)->pn + 0x14);
        if (rc2) _InterlockedExchangeAdd(rc2 + 1, 1);
        inserted = ((SharedPtr*)((char*)this + 8))->px != 0;
        if (inserted) {
            cur = cur->p0c ? (Node*)cur->p0c : 0;
        } else {
            cur = (Node*)cur->p10;
        }
    }
    Node* saved = cur;
    void* savedKey = head;
    if (inserted) {
        Node* r = tree->root;
        if (savedKey && savedKey != head) {
            _invalid_parameter_noinfo();
        }
        if (saved == r) {
            Result* res = (Result*)this->insert(key, val, out);
            out->a = res->a;
            out->b = res->b;
            out->c = 1;
            return 1;
        }
        SharedPtr sp;
        sp.reset();
    }
    SharedPtr sp3;
    sp3.px = ((SharedPtr*)val)->px;
    sp3.pn = ((SharedPtr*)val)->pn;
    long* rc3 = (long*)((char*)((SharedPtr*)val)->pn + 0x14);
    if (rc3) _InterlockedExchangeAdd(rc3 + 1, 1);
    SharedPtr sp4;
    sp4.px = saved->p0c;
    sp4.pn = (Node*)saved->p10;
    long* rc4 = saved->p14;
    if (rc4) _InterlockedExchangeAdd(rc4 + 1, 1);
    if (((SharedPtr*)((char*)this + 8))->px != 0) {
        Result* res = (Result*)this->insert(key, val, out);
        out->a = res->a;
        out->b = res->b;
        out->c = 1;
        return 1;
    }
    out->a = savedKey;
    out->b = saved;
    out->c = 0;
    return 0;
}
