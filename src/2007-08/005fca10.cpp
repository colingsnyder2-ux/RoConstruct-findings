// from server: 32% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct ResizeTool {
    char pad[0x18];
    void* field18;
    char pad2[0x8];
    void* field24;
    void* field28;
    void* field30;
    void func(int);
};

struct RefCounted {
    virtual void vfunc0();
    virtual void vfunc1();
    virtual void vfunc2();
    volatile long refCount4;
    volatile long refCount8;
};

extern "C" void __cdecl sub_561B10();
extern "C" void __cdecl sub_573D60();
extern "C" void __cdecl sub_573D80();
extern "C" bool __cdecl sub_5786D0();
extern "C" void __cdecl sub_58C810();
extern "C" void* __cdecl sub_5FC7F0();

void ResizeTool::func(int arg)
{
    if (field28 != 0)
        return;
    if (*(int*)((char*)field28 + 4) == 0)
        return;

    void* local = 0;
    void* result = sub_5FC7F0();
    void* esi = local;
    void* ebx = *(void**)result;

    if (esi != 0) {
        RefCounted* rc = (RefCounted*)esi;
        if (_InterlockedExchangeAdd(&rc->refCount4, -1) == 1) {
            rc->vfunc1();
            if (_InterlockedExchangeAdd(&rc->refCount8, -1) == 1) {
                rc->vfunc2();
            }
        }
    }

    sub_573D60();
    sub_5786D0();
    if (sub_5786D0()) {
        sub_561B10();
        sub_58C810();
    }
    sub_573D80();
}
