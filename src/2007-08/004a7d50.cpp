// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void AddRef();
    void Release();
};

struct ChangePropertyItem {
    int f(int, int);
};

int ChangePropertyItem::f(int a, int b)
{
    int* self = (int*)this;
    int* other = (int*)a;
    int* val = (int*)b;

    self[0] = a;

    // call 0x4a7270 with ecx = this+4, args b, a
    // declared as a member-like helper
    extern void helper(int*, int, int);
    helper(self + 1, b, a);

    if (a != 0) {
        int* p = (int*)(a + 0xa4);
        if (p != 0) {
            p[0] = a;
            int* old = (int*)self[1];
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            int* cur = (int*)p[1];
            if (cur != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)cur + 8), -1) == 1) {
                    void** vt = (void**)cur[0];
                    void (*fn)() = (void (*)())vt[2];
                    fn();
                }
            }
            p[1] = (int)old;
        }
    }

    return (int)this;
}
