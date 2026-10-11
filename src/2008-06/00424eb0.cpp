// from server: 15% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Node {
    int key;
    int value;
};

struct NodeList {
    Node* begin;
    Node* end;
    Node* capacity;
};

struct RefCounted {
    void* vptr;
    volatile long refcount;
    volatile long weakrefcount;
};

struct CRobloxTreeCtrlNode {
    char pad[0x154];
    NodeList* list;
    bool find(int* key);
};

bool CRobloxTreeCtrlNode::find(int* key) {
    Node* first;
    Node* last;
    Node* it;
    Node* found;
    RefCounted* rc;
    bool result;

    first = this->list->begin;
    last = this->list->end;

    if (this->list->capacity < last) {
        _invalid_parameter_noinfo();
    }

    it = first;
    while (it != last) {
        if (it->key == *key) {
            break;
        }
        it += 1;
    }

    found = it;
    result = (found != last);

    rc = (RefCounted*)0;
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))rc->vptr)(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)rc->vptr)[2])(rc);
            }
        }
    }

    return result;
}
