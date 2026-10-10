// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall func_007285a0();
extern "C" void __stdcall func_005d9e60();

struct Sub {
    void (__stdcall *vtbl)(void);
    long refcount;
};

struct Obj {
    void* vtbl0;
    void* vtbl4;
    char pad8[8];
    void* vtbl10;
    void* vtbl14;
    char pad18[0x14];
    void* vtbl2c;
    char pad30[0x14];
    void* vtbl44;
    char pad48[0x14];
    void* vtbl5c;
    char pad60[0x14];
    void* vtbl74;
    char pad78[0x14];
    void* vtbl8c;
    char pad90[0x58];
    void* vtble8;
    char padec[0x14];
    Sub* ptr100;
    char pad104[0x100];
    void* field204;

    void destroy();
};

void Obj::destroy()
{
    this->vtbl0 = (void*)0x7bc29c;
    this->vtbl4 = (void*)0x7bc290;
    this->vtbl10 = (void*)0x7bc288;
    this->vtbl14 = (void*)0x7bc278;
    this->vtbl2c = (void*)0x7bc268;
    this->vtbl44 = (void*)0x7bc258;
    this->vtbl5c = (void*)0x7bc248;
    this->vtbl74 = (void*)0x7bc238;
    this->vtbl8c = (void*)0x7bc228;
    this->vtble8 = (void*)0x7bc210;

    func_007285a0();

    Sub* p = this->ptr100;
    if (p != 0) {
        if (_InterlockedExchangeAdd(&p->refcount, -1) == 1) {
            p->vtbl();
            if (_InterlockedExchangeAdd(&p->refcount, -1) == 1) {
                p->vtbl();
            }
        }
    }

    func_005d9e60();
}
