// from server: 24% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();
extern "C" void __cdecl operator_delete(void*);

struct Node {
    Node* next;
    Node* prev;
    int refcount;
    void* data;
};

struct List {
    Node* head;
    int count;
};

struct Peer {
    char pad0[4];
    List* list;
    int count;
    void erase(List* owner, Node* n, Node** out);
};

void Peer::erase(List* owner, Node* n, Node** out) {
    if (owner == 0) {
        _invalid_parameter_noinfo();
    }
    if (n == owner->head) {
        _invalid_parameter_noinfo();
    }
    if (n == this->list->head) {
        *out = n;
        return;
    }
    Node* next = n->next;
    Node* prev = n->prev;
    prev->next = next;
    next->prev = prev;
    Node* d = (Node*)n->data;
    if (d != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)d + 4), -1) == 1) {
            (*(void(__thiscall**)(void*))(*(int*)d + 4))(d);
            if (_InterlockedExchangeAdd((volatile long*)((char*)d + 8), -1) == 1) {
                (*(void(__thiscall**)(void*))(*(int*)d + 8))(d);
            }
        }
    }
    operator_delete(n);
    this->count--;
    *out = n;
}
