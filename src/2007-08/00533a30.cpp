// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __stdcall sub_630D36(void*, void*, void*, int, int);
extern "C" void __stdcall sub_630B9E(void*, void*);
extern "C" void* __stdcall sub_56DC30(void*);
extern "C" void* __stdcall sub_77E710(void*);

struct RefCounted {
    void* vfptr;
    long refcount;
};

struct VSelectionBoundFuncDesc {
    void* vfptr;
    char pad[0x24];
    void* field28;
    void* field2c;
    void* field30;
    void* field34;
    void invoke(void* args, int count);
};

void VSelectionBoundFuncDesc::invoke(void* args, int count)
{
    void* local8;
    void* localc;
    void* local1c;
    void* local24;
    void* local2c;
    void* local30;

    local8 = field30;
    if (field34) {
        void** vt = *(void***)field34;
        typedef void* (__thiscall *Fn)(void*);
        Fn fn = (Fn)vt[2];
        localc = fn(field34);
    } else {
        localc = 0;
    }

    void** argvt = *(void***)args;
    typedef void (__thiscall *Fn2)(void*, void*, int);
    Fn2 fn2 = (Fn2)argvt[1];
    local24 = 0;
    fn2(args, &local8, 1);

    void* p = local2c;
    void* result = sub_630D36(p, (void*)0x88209C, (void*)0x8995B4, 0, 0);
    void* esi = result;
    if (esi == 0) {
        sub_77E710(&local1c);
        sub_630B9E(&local1c, (void*)0x841E0C);
    }

    void* obj = sub_56DC30(&local8);
    void* vptr = *(void**)obj;
    void* refobj = *(void**)((char*)obj + 4);
    void* sp[2];
    sp[0] = vptr;
    sp[1] = refobj;
    if (refobj) {
        _InterlockedExchangeAdd((volatile long*)((char*)refobj + 4), 1);
    }

    typedef void (__thiscall *Fn3)(void*, void*);
    Fn3 fn3 = (Fn3)field28;
    fn3(field2c, (void*)((char*)esi + (int)field2c));

    void* c = localc;
    local24 = (void*)-1;
    if (c) {
        void** cvt = *(void***)c;
        typedef void (__thiscall *Fn4)(void*, int);
        Fn4 fn4 = (Fn4)cvt[0];
        fn4(c, 1);
    }
}
