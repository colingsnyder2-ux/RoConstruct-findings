// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CreatorBase {
    int field0;
    void construct(int* a, int* b);
};

struct FactoryProduct {
    int field0;
    CreatorBase field4;
    int field8;

    FactoryProduct(int* a, int* b);
};

FactoryProduct::FactoryProduct(int* a, int* b)
{
    field0 = (int)a;
    field4.construct(a, b);

    if (a != 0) {
        int* p = (int*)((char*)a + 0xa4);
        if (p != 0) {
            p[0] = (int)a;
            int* old = (int*)field4.field0;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            int* cur = (int*)p[1];
            if (cur != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)cur + 8), -1) == 1) {
                    (*(void(**)(int*))(*(int*)cur + 8))((int*)cur);
                }
            }
            p[1] = (int)old;
        }
    }
}
