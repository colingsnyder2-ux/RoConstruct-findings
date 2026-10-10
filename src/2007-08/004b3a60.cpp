// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
};

struct Inner {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    char g;
};

struct Outer {
    void* field0;
    void* field4;
    char field8[0x14];
    void* field1c;

    Outer(void* arg);
};

extern "C" void __stdcall sub_4b3030(void*);
extern "C" void* __cdecl sub_62fef6(unsigned int);
extern "C" void __stdcall sub_4181b0(void*, void*);
extern "C" void __stdcall sub_728830(void*);

Outer::Outer(void* arg)
{
    void** src = (void**)arg;
    void* p0 = src[0];
    void* p1 = src[1];

    this->field0 = 0;
    this->field4 = 0;

    void* local[2];
    local[0] = p0;
    local[1] = p1;

    if (p1 != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)p1 + 4), 1);
    }

    sub_4b3030(this->field8);

    Inner* inner = (Inner*)sub_62fef6(0x20);
    if (inner != 0) {
        inner->a = 0;
        inner->b = 0;
        inner->c = 0;
        inner->d = 0;
        inner->e = 0;
        inner->f = 0;
        inner->g = 0;
    } else {
        inner = 0;
    }

    sub_4181b0(this, inner);
    sub_728830(this);
}
