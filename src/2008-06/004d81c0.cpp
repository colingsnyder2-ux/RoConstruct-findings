// from server: 21% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long ref1;
    volatile long ref2;
    void Release();
};

void RefCounted::Release()
{
    if (_InterlockedExchangeAdd(&ref1, -1) == 1) {
        void** vt = *(void***)this;
        ((void (__thiscall*)(void*))vt[1])(this);
        if (_InterlockedExchangeAdd(&ref2, -1) == 1) {
            void** vt2 = *(void***)this;
            ((void (__thiscall*)(void*))vt2[2])(this);
        }
    }
}

struct Inner {
    char pad0[8];
};

struct Arg1 {
    void* vptr;
    char pad4[0x1c];
};

struct Arg2 {
    char pad0[4];
    void* p4;
    void* p8;
    char c0c;
};

struct Arg3 {
    void* p0;
};

struct Arg4 {
    void* p0;
};

struct Arg5 {
    void* p0;
};

struct S {
    void* field0;
    void func(Arg1* a1, Arg2* a2, Arg3* a3, Arg4* a4, Arg5* a5);
};

void func_0042a800();
void func_0047d410();
void func_004915b0();
void func_004d7d50();
void func_0056a900();
void* __cdecl func_006a0920(unsigned int);

void S::func(Arg1* a1, Arg2* a2, Arg3* a3, Arg4* a4, Arg5* a5)
{
    void* eax = *(void**)a1;
    eax = *(void**)((char*)eax + 0x1c);
    if (eax == 0 || *(void**)((char*)eax + 8) == 0) {
        a2->p4 = 0;
        a2->p8 = 0;
        a2->c0c = 0;
        return;
    }

    void* mem = func_006a0920(4);
    void* esi = 0;
    if (mem != 0) {
        *(void**)mem = *(void**)a3;
        esi = mem;
    }

    func_0042a800();
    func_0047d410();

    char local[8];
    func_004d7d50();

    void* edi = *(void**)((char*)a2 + 8);
    void* ecx = *(void**)this;
    func_0056a900();

    void* ecx2 = *(void**)((char*)a2 + 4);
    if (ecx2 != 0) {
        void** vt = *(void***)ecx2;
        ((void (__thiscall*)(void*, int))vt[0])(ecx2, 1);
    }

    if (esi != 0) {
        RefCounted* rc = (RefCounted*)esi;
        rc->Release();
    }
}
