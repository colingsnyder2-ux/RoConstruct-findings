// from server: 23% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    void (__thiscall *vtbl)(void);
    void AddRef();
    void Release();
};

struct Obj {
    int refcount;
    void AddRef();
    void Release();
};

struct S {
    char pad[8];
    void* field8;
    void sub_48b270(Obj*);
    S* method(Obj*, Obj*);
};

void Obj::AddRef() {
    _InterlockedExchangeAdd((volatile long*)&refcount, 1);
}

void Obj::Release() {
    if (_InterlockedExchangeAdd((volatile long*)&refcount, -1) == 1) {
        Inner* p = (Inner*)((char*)this + 4);
        p->vtbl();
        if (_InterlockedExchangeAdd((volatile long*)((char*)this + 8), -1) == 1) {
            Inner* q = (Inner*)((char*)this + 4);
            q->vtbl();
        }
    }
}

S* S::method(Obj* a, Obj* b) {
    if (b) {
        b->AddRef();
    }
    sub_48b270(a);
    if (b) {
        b->Release();
    }
    return this;
}
