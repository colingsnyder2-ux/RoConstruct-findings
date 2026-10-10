// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Node {
    char pad0[4];
    Node* left;
    Node* parent;
    char pad12[0x25 - 0x0C];
    char color;
};

struct Pair {
    void* a;
    void* b;
    long* c;
};

struct Conn {
    char pad0[0x18];
    Node* header;
    int method(void* arg);
};

int Conn::method(void* arg) {
    Node* header = this->header;
    Node* node = header->parent;
    Node* cur = header;
    if (node->color != 0) {
        return (int)cur;
    }
    do {
        Pair* p = (Pair*)arg;
        Pair tmp1;
        tmp1.a = p->a;
        tmp1.b = p->b;
        tmp1.c = p->c;
        if (tmp1.c != 0) {
            _InterlockedExchangeAdd(tmp1.c + 1, 1);
        }
        Pair tmp2;
        tmp2.a = *(void**)((char*)node + 0x0C);
        tmp2.b = *(void**)((char*)node + 0x10);
        tmp2.c = *(long**)((char*)node + 0x14);
        if (tmp2.c != 0) {
            _InterlockedExchangeAdd(tmp2.c + 1, 1);
        }
        if (this->method(arg)) {
            node = node->left;
        } else {
            cur = node;
            node = node->parent;
        }
    } while (node->color == 0);
    return (int)cur;
}
