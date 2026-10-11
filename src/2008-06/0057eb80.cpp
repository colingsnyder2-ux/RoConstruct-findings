// from server: 2% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S_func_00598de0 {
    char pad0[500];
    int m_x;
    int* f();
};

struct S_005ecc00 {
    int f(int);
};

struct S_005f1290 {
    int f();
};

struct S_005f13e0 {
    int f(int, int);
};

struct S_0057e4d0 {
    int f(int*, int, int, int, int, int, int);
};

struct S_006a17c6 {
    int f(int, int, int, int, int);
};

struct S_0057eb80 {
    int f();
};

int* S_func_00598de0::f()
{
    return &m_x;
}
