// from server: 49% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __stdcall sub_b22644(void*, const void*);

struct Inner {
    char pad0[0x40];
    int f40;
    char pad44[4];
    int f48;
    int f4c;
    int f50;
};

struct Outer {
    int f0;
    int* f4;
    char pad8[0x1c];
    char s24[0x1c];
    int f40;
    char pad44[4];
    int f48;
    int f4c;
    int f50;
};

struct S {
    int f0;
    int* f4;
    char pad8[0x1c];
    char s24[0x1c];
    int f40;
    char pad44[4];
    int f48;
    int f4c;
    int f50;
    S* ctor(const Outer* other);
};

S* S::ctor(const Outer* other)
{
    f0 = other->f0;
    f4 = other->f4;
    if (f4)
        _InterlockedExchangeAdd((volatile long*)((char*)f4 + 4), 1);
    sub_b22644(s24, other->s24);
    sub_b22644((char*)this + 0x24, (char*)other + 0x24);
    f40 = other->f40;
    f48 = other->f48;
    f4c = other->f4c;
    f50 = other->f50;
    return this;
}
