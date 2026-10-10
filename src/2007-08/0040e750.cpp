// from server: 39% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall _invalid_parameter_noinfo();

struct Obj {
    char pad0[0x134];
    void* begin;
    void* end;
};

struct Inner {
    void* p0;
    volatile long ref1;
    volatile long ref2;
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

extern "C" int __cdecl sub_40e590(void*);
extern "C" void __cdecl sub_40da20(void*);
extern "C" void __cdecl sub_725520(void*, void*, void*);
extern "C" void* __cdecl sub_40ce80();
extern "C" void __cdecl sub_402a60(void*, void*);
extern "C" void __cdecl sub_541630(void*, void*);
extern "C" void __cdecl sub_77e6d8();

struct S {
    void* f(void* arg);
};

void* S::f(void* arg) {
    void* result = 0;
    if (sub_40e590(this) == 0) {
        void* local10 = 0;
        sub_40da20(&local10);
        void* ebx = local10;
        sub_725520((void*)0x8baf8c, (void*)0x40d330, 0);
        void* eax = sub_40ce80();
        void* edi = eax;
        Obj* self = (Obj*)this;
        void* ecx = self->begin;
        if (ecx == 0) {
            sub_77e6d8();
        } else {
            unsigned int cnt = (unsigned int)((char*)self->end - (char*)ecx) >> 3;
            if ((unsigned int)edi >= cnt) {
                sub_77e6d8();
            }
        }
        void* base = self->begin;
        void* slot = (char*)base + (int)edi * 8;
        *(void**)slot = local10;
        void* p4 = (char*)slot + 4;
        sub_402a60(p4, &local10);
        sub_541630(ebx, this);
        Inner* inner = (Inner*)local10;
        if (inner != 0) {
            if (_InterlockedExchangeAdd(&inner->ref1, -1) == 1) {
                void** vt = *(void***)inner;
                void (*fn)(void*) = (void (*)(void*))vt[1];
                fn(inner);
                if (_InterlockedExchangeAdd(&inner->ref2, -1) == 1) {
                    void** vt2 = *(void***)inner;
                    void (*fn2)(void*) = (void (*)(void*))vt2[2];
                    fn2(inner);
                }
            }
        }
        result = ebx;
    }
    return result;
}
