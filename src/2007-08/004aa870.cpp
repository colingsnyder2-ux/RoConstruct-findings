// from server: 33% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Peer {
    void* vptr;          // 0
    void* field4;        // 4
    void* field8;        // 8
    void* fieldC;        // 0xc
    void construct(void* a, void* b);
};

struct Helper {
    void method(void* a, void* b);
};

void Peer::construct(void* a, void* b)
{
    field4 = a;
    vptr = (void*)0x79d74c;
    field8 = *(void**)b;
    void* p = *(void**)((char*)b + 4);
    fieldC = p;
    if (p == 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }
    void* q = *(void**)b;
    ((Helper*)((char*)a + 0x1da8))->method(&q, &field8);
}
