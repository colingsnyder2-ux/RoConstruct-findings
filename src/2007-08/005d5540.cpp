// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* ptr;
    long* ref;
};

struct S {
    void* field0;
    void* field4;
    void construct(void* a, void* b, void* c, void* d, void* e);
};

extern "C" void* __cdecl sub_630d36(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_402a60(void*);

void S::construct(void* a, void* b, void* c, void* d, void* e)
{
    void* v = sub_630d36(*(void**)a, e, c, b, d);
    field0 = v;
    void* p = *(void**)((char*)a + 4);
    field4 = p;
    if (p != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }
    if (field0 == 0) {
        void* tmp = 0;
        sub_402a60(&tmp);
    }
}
