// from server: 22% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct BoundFuncDesc {
    void* vfptr;
    void* function;
    void* signature;
    void* boundArg;
    BoundFuncDesc* ctor(void* function, void* arg1, void* arg2, void* arg3);
};

extern "C" int __cdecl sub_4879D0(void*);
extern "C" void* __cdecl sub_62FEF6(unsigned int);

BoundFuncDesc* BoundFuncDesc::ctor(void* function, void* arg1, void* arg2, void* arg3)
{
    void* local14 = 0;
    void* local18 = 0;

    if (!sub_4879D0(&local14)) {
        this->signature = (void*)0x52EF10;
        this->vfptr = (void*)0x52E7F0;
        void* p = sub_62FEF6(8);
        if (p) {
            *(void**)p = local14;
            *(void**)((char*)p + 4) = local18;
            if (local18) {
                _InterlockedExchangeAdd((volatile long*)((char*)local18 + 4), 1);
            }
        }
        this->function = p;
    }

    if (local18) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)local18 + 4), -1) == 1) {
            void** vt = *(void***)local18;
            ((void (__thiscall*)(void*))vt[1])(local18);
            if (_InterlockedExchangeAdd((volatile long*)((char*)local18 + 8), -1) == 1) {
                void** vt2 = *(void***)local18;
                ((void (__thiscall*)(void*))vt2[2])(local18);
            }
        }
    }

    return this;
}
