// from server: 61% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct FactoryProduct {
    char pad0[4];
    int field4;
    void* field8;
    void construct(void* arg1, void* arg2);
};

extern "C" void __cdecl sub_55D3D0();
extern "C" void* __cdecl sub_62FEF6(unsigned int size);

void FactoryProduct::construct(void* arg1, void* arg2)
{
    sub_55D3D0();
    void* p = sub_62FEF6(8);
    if (p) {
        *(void**)p = arg1;
        *((void**)p + 1) = arg2;
        if (arg2) {
            _InterlockedExchangeAdd((volatile long*)((char*)arg2 + 4), 1);
        }
    } else {
        p = 0;
    }
    this->field8 = p;
    this->field4 = 8;
    if (arg2) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)arg2 + 4), -1) == 1) {
            void** vt = *(void***)arg2;
            ((void (__thiscall*)(void*))vt[1])(arg2);
            if (_InterlockedExchangeAdd((volatile long*)((char*)arg2 + 8), -1) == 1) {
                void** vt2 = *(void***)arg2;
                ((void (__thiscall*)(void*))vt2[2])(arg2);
            }
        }
    }
}
