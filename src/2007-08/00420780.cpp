// from server: 39% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
    long weakrefcount;
};

struct Inner {
    char pad[0xc];
    RefCounted* ptr;
};

struct Arg {
    char pad0[4];
    int field4;
    char pad8[0x1c];
    Inner* field24;
};

struct CRobloxTreeCtrl {
    void func(Arg* arg);
};

extern "C" void __cdecl sub_40d550();
extern "C" void __cdecl sub_492360();
extern "C" void __cdecl sub_532f50();
extern "C" void __cdecl sub_533650();
extern "C" void __cdecl sub_5595a0();

void CRobloxTreeCtrl::func(Arg* arg)
{
    if (arg->field4 == 0)
        return;
    Inner* inner = arg->field24;
    if (inner == 0)
        return;

    RefCounted* p = inner->ptr;
    RefCounted* saved = p;
    if (p != 0)
        _InterlockedExchangeAdd(&p->refcount, 1);

    if (saved != 0)
    {
        // call virtual at vtable+0x14c
        void* tmp;
        typedef void* (__thiscall *Fn1)(void*, void**);
        Fn1 f1 = *(Fn1*)(*(char**)this + 0x14c);
        f1(this, &tmp);

        // copy tmp (a smart pointer) into local
        void* local[2];
        local[0] = *(void**)tmp;
        void* p2 = *(void**)((char*)tmp + 4);
        local[1] = p2;
        if (p2 != 0)
            _InterlockedExchangeAdd((volatile long*)((char*)p2 + 4), 1);

        sub_40d550();
        sub_492360();

        // call virtual at vtable+0x148
        typedef void* (__thiscall *Fn2)(void*);
        Fn2 f2 = *(Fn2*)(*(char**)this + 0x148);
        void* r = f2(this);

        char old = *(char*)((char*)this + 0xca);
        *(char*)((char*)this + 0xca) = 1;

        if (*(char*)((char*)&arg + 0x4c) != 0)
            sub_532f50();
        else
            sub_533650();

        *(char*)((char*)this + 0xca) = old;
        sub_5595a0();
    }

    if (saved != 0)
    {
        if (_InterlockedExchangeAdd(&saved->refcount, -1) == 1)
        {
            typedef void (__thiscall *Fn3)(void*);
            Fn3 f3 = *(Fn3*)(*(char**)saved + 4);
            f3(saved);
            if (_InterlockedExchangeAdd(&saved->weakrefcount, -1) == 1)
            {
                Fn3 f4 = *(Fn3*)(*(char**)saved + 8);
                f4(saved);
            }
        }
    }
}
