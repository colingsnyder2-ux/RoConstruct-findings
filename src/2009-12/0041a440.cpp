// from server: 15% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct RefCounted {
    void* vptr;
    long refcount;
    long weakcount;
};

struct Node {
    char pad0[0x10];
    void* ptr10;
    char pad14[4];
    Node* next18;
};

struct Iter {
    Node* node;
};

struct Container {
    char pad0[0x18];
    Node* head;
};

struct Result {
    void* a;
    void* b;
};

extern "C" void* __cdecl sub_401980(void*, void*);
extern "C" void __cdecl sub_41efd0(void*, void*);
extern "C" void __cdecl sub_41a1c0(void*, void*, void*);

void* g_98b760;

void CInsertObjectDialog_method(void* self, Iter* it, Result* out)
{
    void* local0 = 0;
    void* local4 = 0;
    void* local8 = 0;
    void* localc = 0;
    void* local10 = 0;

    sub_401980(&localc, it);
    sub_41efd0(&localc, 0);
    sub_401980(&local4, it);

    Node* node = *(Node**)&local4;
    Node* head = *(Node**)((char*)node + 0x18);
    Node* first = *(Node**)node;

    if (node != 0 && node != first) {
        _invalid_parameter_noinfo();
    }

    Node* cur = *(Node**)&local8;
    if (cur == head) {
        out->a = 0;
        out->b = 0;
        return;
    }

    if (node == 0) {
        _invalid_parameter_noinfo();
        if (cur == *(Node**)((char*)node + 0x18)) {
            _invalid_parameter_noinfo();
        }
        void* p = *(void**)((char*)cur + 0x10);
        void* vt = *(void**)p;
        void* fn = *(void**)vt;
        void* tmp = 0;
        ((void (__thiscall*)(void*, void**))fn)(p, &tmp);
        sub_41a1c0(out, &tmp, 0);
        void* rc = *(void**)&local10;
        if (rc != 0) {
            RefCounted* r = (RefCounted*)rc;
            if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
                void* vt2 = *(void**)r;
                ((void (__thiscall*)(void*))*(void**)((char*)vt2 + 4))(r);
                if (_InterlockedExchangeAdd(&r->weakcount, -1) == 1) {
                    void* vt3 = *(void**)r;
                    ((void (__thiscall*)(void*))*(void**)((char*)vt3 + 8))(r);
                }
            }
        }
        return;
    }

    node = *(Node**)node;
    if (cur == *(Node**)((char*)node + 0x18)) {
        _invalid_parameter_noinfo();
    }
    void* p = *(void**)((char*)cur + 0x10);
    void* vt = *(void**)p;
    void* fn = *(void**)vt;
    void* tmp = 0;
    ((void (__thiscall*)(void*, void**))fn)(p, &tmp);
    sub_41a1c0(out, &tmp, 0);
    void* rc = *(void**)&local10;
    if (rc != 0) {
        RefCounted* r = (RefCounted*)rc;
        if (_InterlockedExchangeAdd(&r->refcount, -1) == 1) {
            void* vt2 = *(void**)r;
            ((void (__thiscall*)(void*))*(void**)((char*)vt2 + 4))(r);
            if (_InterlockedExchangeAdd(&r->weakcount, -1) == 1) {
                void* vt3 = *(void**)r;
                ((void (__thiscall*)(void*))*(void**)((char*)vt3 + 8))(r);
            }
        }
    }
}
