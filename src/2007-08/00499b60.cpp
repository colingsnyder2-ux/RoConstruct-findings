// from server: 44% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Client {
    void* field0;
    void* field4;
    void construct(void* a, void* b);
};

struct RefCounted {
    void* vptr;
    char pad[4];
    volatile long refcount;
};

struct Holder {
    void* field0;
    void* field4;
};

void Client::construct(void* a, void* b)
{
    this->field0 = a;
    void* self = this;
    void* ebx = (char*)self + 4;
    ((Client*)((char*)self + 4))->construct(a, b);

    if (a != 0) {
        Holder* edi = (Holder*)((char*)a + 0xa4);
        if (edi != 0) {
            edi->field0 = a;
            void* esi = *(void**)((char*)self + 4);
            if (esi != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)esi + 8), 1);
            }
            void* ecx = edi->field4;
            if (ecx != 0) {
                long old = _InterlockedExchangeAdd((volatile long*)((char*)ecx + 8), -1);
                if (old == 1) {
                    void** vt = *(void***)ecx;
                    void (*fn)(void*) = (void (*)(void*))vt[2];
                    fn(ecx);
                }
            }
            edi->field4 = esi;
        }
    }
}
