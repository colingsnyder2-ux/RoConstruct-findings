// from server: 57% by tester
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S
{
    int a;
    int *b;
    int c;
    double d;
    int e;
    int f;
    char buf[0x4c];
    S(const S&);
};

extern "C" void __cdecl sub_6A1598(void*, int, int, void*, void*);

S::S(const S& other)
{
    a = other.a;
    b = other.b;
    if (b != 0)
    {
        _InterlockedExchangeAdd((volatile long*)(b + 1), 1);
    }
    d = 0.0;
    e = 0;
    f = 0;
    sub_6A1598(buf, 0x4c, 8, (void*)0x4c76a0, (void*)0x4ae910);
}
