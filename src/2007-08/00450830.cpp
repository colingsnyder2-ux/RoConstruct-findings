// from server: 43% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    int field0;
    void Method(int, int);
};

struct Obj {
    int field0;
    Inner inner;
    void Init(int, int);
};

void Obj::Init(int a, int b)
{
    field0 = a;
    inner.Method(a, b);
    if (a != 0) {
        int* p = (int*)(a + 0xa4);
        if (p != 0) {
            *p = a;
            int* q = (int*)inner.field0;
            if (q != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)q + 8), 1);
            }
            int* r = (int*)p[1];
            if (r != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)r + 8), -1) == 1) {
                    (*(void(**)(void))((*(int**)r)[2]))();
                }
            }
            p[1] = (int)q;
        }
    }
}
