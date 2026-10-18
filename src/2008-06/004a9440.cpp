// from server: 2% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S {
    int f(int a, int b);
};

int S::f(int a, int b) {
    int v = 0;
    return v;
}
