// from server: 51% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refCount;
    long weakRefCount;
};

struct SharedPtr {
    void* px;
    RefCounted* pi;
};

struct CRobloxView {
    char pad0[0x78];
    SharedPtr sp78;
    SharedPtr sp7c;
    char pad2[0x130 - 0x84];
    RefCounted* ptr130;
    RefCounted* ptr134;
    char pad3[0x19c - 0x138];
    RefCounted* ptr19c;
    RefCounted* ptr1a0;
    RefCounted* ptr1a4;
    RefCounted* ptr1a8;
    RefCounted* ptr1ac;

    void sub_4562a0(SharedPtr* out);
    void sub_40d550(SharedPtr* out);
    void sub_432530(void* arg);
    void sub_40e590();
    void sub_5595a0();
    void func();
};

void CRobloxView::func() {
    SharedPtr local;
    local.px = ptr130;
    local.pi = ptr134;
    if (local.pi) {
        _InterlockedExchangeAdd(&local.pi->refCount, 1);
    }
    sub_40d550(&local);

    if (ptr19c) {
        RefCounted* p = ptr19c;
        ptr19c = 0;
        ((void (__thiscall*)(RefCounted*, int))((void**)p->vptr)[1])(p, 1);
    } else {
        ptr19c = 0;
    }

    if (ptr1a0) {
        RefCounted* p = ptr1a0;
        ptr1a0 = 0;
        ((void (__thiscall*)(RefCounted*, int))((void**)p->vptr)[1])(p, 1);
    } else {
        ptr1a0 = 0;
    }

    if (ptr1a4) {
        RefCounted* p = ptr1a4;
        ptr1a4 = 0;
        ((void (__thiscall*)(RefCounted*, int))((void**)p->vptr)[1])(p, 1);
    } else {
        ptr1a4 = 0;
    }

    if (ptr1a8) {
        RefCounted* p = ptr1a8;
        ptr1a8 = 0;
        ((void (__thiscall*)(RefCounted*, int))((void**)p->vptr)[1])(p, 1);
    } else {
        ptr1a8 = 0;
    }

    if (ptr1ac) {
        RefCounted* p = ptr1ac;
        ptr1ac = 0;
        ((void (__thiscall*)(RefCounted*, int))((void**)p->vptr)[1])(p, 1);
    } else {
        ptr1ac = 0;
    }

    if (ptr130) {
        sub_432530(&sp78);
    }

    if (ptr130) {
        sub_432530(&sp7c);
    }

    SharedPtr tmp;
    sub_4562a0(&tmp);

    RefCounted* pi = tmp.pi;
    if (pi) {
        if (_InterlockedExchangeAdd(&pi->refCount, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))((void**)pi->vptr)[1])(pi);
            if (_InterlockedExchangeAdd(&pi->weakRefCount, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)pi->vptr)[2])(pi);
            }
        }
    }

    if (tmp.px) {
        sub_432530(&sp78);
    }

    sub_5595a0();
}
