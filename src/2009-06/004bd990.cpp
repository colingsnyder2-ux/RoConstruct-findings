// from server: 87% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl operator_new(unsigned int);

struct VHolder {
    void* vptr;
    void* field4;
    void* field8;
};

struct VInstance {
    void* field0;
    void* field4;
    void* field8;
    VHolder* makeHolder();
};

VHolder* VInstance::makeHolder() {
    VHolder* p = (VHolder*)operator_new(0xc);
    if (p != 0) {
        p->vptr = (void*)0x8c496c;
        p->field4 = this->field4;
        p->field8 = this->field8;
        if (p->field8 != 0) {
            _InterlockedExchangeAdd((volatile long*)((char*)p->field8 + 4), 1);
        }
    }
    return p;
}
