// from server: 17% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCounted {
    void* vptr;
    long refcount;
    long weakrefcount;
};

struct ListBase {
    void* vptr;
    void* head;
    void* tail;
};

struct Inner {
    char pad[0x154];
    ListBase* list;
};

struct Node {
    Node* next;
    Node* prev;
};

struct VInstance {
    char pad[0x134];
    void* field134;
    void* field138;
    void* field13c;
};

extern "C" void* __cdecl func_00421cb0(void*);
extern "C" void __cdecl func_0055acc0(void*);
extern "C" void __cdecl func_00618a40(void*, void*, void*);
extern "C" void __cdecl func_004025b0(void*, void*);
extern "C" void __cdecl func_004213a0(void*, void*);
extern "C" void __cdecl func_00567180(void*, void*);

struct FilteredSelection {
    void method(void*);
};

void FilteredSelection::method(void* arg) {
    VInstance* self = (VInstance*)this;
    func_0055acc0(arg);
    if (self->field134 != 0) {
        return;
    }
    void* p = func_00421cb0(*(void**)((char*)arg + 8));
    void* tmp;
    func_00618a40(&tmp, p, 0);
    void* val = *(void**)tmp;
    tmp = (char*)tmp + 4;
    self->field134 = val;
    func_004025b0(&self->field138, &tmp);
    RefCounted* rc = (RefCounted*)tmp;
    if (rc != 0) {
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            void** vt = (void**)rc->vptr;
            void (*fn)(void*) = (void (*)(void*))vt[1];
            fn(rc);
            if (_InterlockedExchangeAdd(&rc->weakrefcount, -1) == 1) {
                void** vt2 = (void**)rc->vptr;
                void (*fn2)(void*) = (void (*)(void*))vt2[2];
                fn2(rc);
            }
        }
    }
    if (self->field134 == 0) {
        return;
    }
    Inner* inner = (Inner*)((char*)self->field134 + 0x154);
    ListBase* lb = inner->list;
    Node* first = (Node*)lb->head;
    Node* last = (Node*)lb->tail;
    if (first > last) {
        _invalid_parameter_noinfo();
    }
    Node* cur = first;
    while (true) {
        Inner* inner2 = (Inner*)((char*)self->field134 + 0x154);
        ListBase* lb2 = inner2->list;
        Node* end = (Node*)lb2->tail;
        if ((Node*)lb2->head > end) {
            _invalid_parameter_noinfo();
        }
        Node* next = (Node*)lb2->head;
        if (cur != 0 && cur == next) {
        } else {
            _invalid_parameter_noinfo();
        }
        if (first == end) {
            break;
        }
        Node* n;
        if (cur != 0) {
            n = cur;
        } else {
            _invalid_parameter_noinfo();
            n = 0;
            if (first < (Node*)0x10) {
                _invalid_parameter_noinfo();
            }
        }
        void* item = n->next;
        if (item != 0) {
            func_004213a0(&self->field13c, &item);
        }
        if (cur != 0) {
            cur = (Node*)cur->next;
        } else {
            _invalid_parameter_noinfo();
            if (first < (Node*)0x10) {
                _invalid_parameter_noinfo();
            }
            cur = (Node*)((char*)first + 8);
        }
    }
    func_00567180(&self->field134, self->field134);
}
