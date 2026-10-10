// from server: 44% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CValueItem {
    void* ptr0;
    void* ptr4;
    void sub_4539a0(void* a, void* b);
    CValueItem* construct(void* a, void* b);
};

CValueItem* CValueItem::construct(void* a, void* b) {
    this->ptr0 = a;
    this->sub_4539a0(a, b);
    if (a != 0) {
        void** edi = (void**)((char*)a + 0xa4);
        if (edi != 0) {
            edi[0] = a;
            void* esi = this->ptr4;
            if (esi != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)esi + 8), 1);
            }
            void* ecx = edi[1];
            if (ecx != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)ecx + 8), -1) == 1) {
                    void** eax = *(void***)ecx;
                    void (*edx)(void) = (void (*)(void))eax[2];
                    edx();
                }
            }
            edi[1] = esi;
        }
    }
    return this;
}
