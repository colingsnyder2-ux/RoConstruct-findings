// from server: 44% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    char pad0[0x1c];
    void* p1c;
    void* p20;
};

struct Sub {
    void* a;
    void* b;
};

struct S {
    char pad0[0x1c];
    Inner* p1c;
    void* p20;
    void f(Sub* s);
};

extern "C" void __stdcall sub_603b10(void*);
extern "C" void __stdcall sub_6241e0(void*, void*, void*);
extern "C" void __stdcall sub_62bea0(void*);
extern "C" void __stdcall sub_5ff5a0(void*);

void S::f(Sub* s)
{
    Inner* in = p1c;
    Sub tmp;
    tmp.a = in->p1c;
    tmp.b = in->p20;
    if (tmp.b) {
        _InterlockedExchangeAdd((volatile long*)((char*)tmp.b + 4), 1);
    }
    sub_603b10(&tmp);
    sub_6241e0(s, in->p1c, 0);
    Inner* in2 = p1c;
    void* q;
    if (in2) {
        q = *(void**)((char*)in2 + 0x20c);
    } else {
        q = 0;
    }
    sub_62bea0(q);
    sub_5ff5a0(&tmp);
}
