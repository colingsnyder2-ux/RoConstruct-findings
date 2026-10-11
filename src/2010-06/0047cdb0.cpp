// from server: 94% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl operator_new(unsigned int);

struct VValue {
    void* vptr;
    void* field4;
    void* field8;
    void* clone();
};

void* VValue::clone() {
    VValue* p = (VValue*)operator_new(0xc);
    if (p != 0) {
        p->vptr = (void*)0xa12d04;
        p->field4 = this->field4;
        p->field8 = this->field8;
        if (p->field8 != 0) {
            _InterlockedExchangeAdd((volatile long*)((char*)p->field8 + 4), 1);
        }
    } else {
        p = 0;
    }
    return p;
}
