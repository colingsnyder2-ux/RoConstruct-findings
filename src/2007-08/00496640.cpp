// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
};

struct SharedPtr {
    void* ptr;
    RefCounted* ctrl;
};

struct ArgList {
    void* data[4];
};

struct FuncDesc {
    char pad[0x28];
    void* (__thiscall *fn)(void*, ArgList*);
    int offset;
};

struct BoundFuncDesc {
    char pad[0x28];
    void* (__thiscall *fn)(void*, ArgList*);
    int offset;
    int invoke(int a, int b, int c);
};

extern "C" void* __cdecl sub_56FA60(int);
extern "C" void* __cdecl sub_56D6F0();
extern "C" void __cdecl sub_419D20(void*, void*);

int BoundFuncDesc::invoke(int a, int b, int c)
{
    void* r = sub_56FA60(a);
    SharedPtr sp;
    sp.ptr = *(void**)r;
    RefCounted* rc = *(RefCounted**)((char*)r + 4);
    sp.ctrl = rc;
    if (rc) {
        _InterlockedExchangeAdd(&rc->refcount, 1);
    }
    ArgList args;
    args.data[0] = sp.ptr;
    args.data[1] = sp.ctrl;
    void* result = this->fn((char*)this + this->offset, &args);
    int* out = (int*)b;
    *out = 0;
    void* v = sub_56D6F0();
    *out = (int)v;
    sub_419D20(out + 1, result);
    if (sp.ctrl) {
        RefCounted* r2 = sp.ctrl;
        if (_InterlockedExchangeAdd(&r2->refcount, -1) == 1) {
            void** vt = (void**)r2->vptr;
            ((void(__thiscall*)(RefCounted*))vt[1])(r2);
            if (_InterlockedExchangeAdd(&r2->refcount, -1) == 1) {
                void** vt2 = (void**)r2->vptr;
                ((void(__thiscall*)(RefCounted*))vt2[2])(r2);
            }
        }
    }
    return (int)out;
}
