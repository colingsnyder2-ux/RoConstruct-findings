// from server: 42% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CreatorBase {
    void construct(int* a, int* b);
};

struct FactoryProduct {
    int* field0;
    CreatorBase field4;
    int* field8;

    FactoryProduct(int* a, int* b);
};

FactoryProduct::FactoryProduct(int* a, int* b)
{
    field0 = a;
    field4.construct(a, b);
    field8 = 0;
    if (a != 0) {
        int* p = (int*)((char*)a + 0xa4);
        if (p != 0) {
            *p = (int)a;
            int* old = field8;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            int* prev = *(int**)((char*)p + 4);
            if (prev != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)prev + 8), -1) == 1) {
                    (*(void(**)(int*))(*(int*)prev + 8))(prev);
                }
            }
            *(int**)((char*)p + 4) = old;
        }
    }
}
