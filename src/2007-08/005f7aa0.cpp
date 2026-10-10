// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refcount;
};

struct Creator {
    void* vptr;
};

struct FactoryProduct {
    Creator* creator;
    RefCounted* value;
    FactoryProduct* ctor(void* arg);
};

extern "C" void __cdecl sub_5F7140(void* out, void* in);

FactoryProduct* FactoryProduct::ctor(void* arg)
{
    void* local8 = 0;
    void* local10 = 0;
    void* local14 = 0;
    void* local1c = 0;
    int local18 = 0;

    sub_5F7140(&local8, arg);

    this->creator = *(Creator**)&local8;
    this->value = *(RefCounted**)&local10;

    if (this->value) {
        _InterlockedExchangeAdd(&this->value->refcount, 1);
    }

    RefCounted* old = (RefCounted*)local10;
    local1c = 0;
    local18 = 1;

    if (old) {
        if (_InterlockedExchangeAdd(&old->refcount, -1) == 1) {
            void** vt = *(void***)old;
            ((void (__thiscall*)(RefCounted*))vt[1])(old);
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                void** vt2 = *(void***)old;
                ((void (__thiscall*)(RefCounted*))vt2[2])(old);
            }
        }
    }

    return this;
}
