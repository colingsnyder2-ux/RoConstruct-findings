// from server: 10% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct FactoryProduct {
    void* field0;
    void* field4;
    void ctor(void* a, void* b);
};

void FactoryProduct::ctor(void* a, void* b) {
    field0 = a;
    field4 = b;
}
