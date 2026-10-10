// from server: 61% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CreatorBase {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
};

struct Creator : CreatorBase {
    void* field4;
};

struct FactoryProduct {
    Creator* creator;
    void* field4;
    FactoryProduct* ctor(void* arg);
};

extern "C" void* __cdecl sub_58C640(void* out);

FactoryProduct* FactoryProduct::ctor(void* arg)
{
    void* tmp[3];
    tmp[0] = 0;
    void* result = sub_58C640(tmp);
    this->creator = *(Creator**)result;
    void* p = *(void**)((char*)result + 4);
    this->field4 = p;
    if (p != 0) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }
    void* esi = tmp[1];
    if (esi != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)esi + 4), -1) == 1) {
            void** vt = *(void***)esi;
            ((void (__thiscall*)(void*))vt[1])(esi);
            if (_InterlockedExchangeAdd((volatile long*)((char*)esi + 8), -1) == 1) {
                void** vt2 = *(void***)esi;
                ((void (__thiscall*)(void*))vt2[2])(esi);
            }
        }
    }
    return this;
}
