// from server: 24% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall sub_77E6AC();
extern "C" void __cdecl sub_5402B0();

struct Inner {
    void (__stdcall *vtbl)(void);
    long ref1;
    long ref2;
};

struct S {
    void *vfptr0;
    void *vfptr4;
    char pad8[8];
    void *vfptr10;
    void *vfptr14;
    char pad18[0x14];
    void *vfptr2c;
    char pad30[0x14];
    void *vfptr44;
    char pad48[0x14];
    void *vfptr5c;
    char pad60[0x14];
    void *vfptr74;
    char pad78[0x14];
    void *vfptr8c;
    char pad90[0x5c];
    Inner *ptr_ec;
    char padf0[4];
    void *field_f0;
    void dtor();
};

void S::dtor()
{
    vfptr0 = (void*)0x7a5ef4;
    vfptr4 = (void*)0x7a5ee8;
    vfptr10 = (void*)0x7a5ee0;
    vfptr14 = (void*)0x7a5ed0;
    vfptr2c = (void*)0x7a5ec0;
    vfptr44 = (void*)0x7a5eb0;
    vfptr5c = (void*)0x7a5ea0;
    vfptr74 = (void*)0x7a5e90;
    vfptr8c = (void*)0x7a5e80;

    sub_77E6AC();

    Inner *p = ptr_ec;
    if (p != 0) {
        if (_InterlockedExchangeAdd(&p->ref1, -1) == 1) {
            p->vtbl();
            if (_InterlockedExchangeAdd(&p->ref2, -1) == 1) {
                p->vtbl();
            }
        }
    }

    vfptr0 = (void*)0x7a5df4;
    vfptr4 = (void*)0x7a5dec;
    vfptr10 = (void*)0x7a5de4;
    vfptr14 = (void*)0x7a5dd4;
    vfptr2c = (void*)0x7a5dc4;
    vfptr44 = (void*)0x7a5db4;
    vfptr5c = (void*)0x7a5da4;
    vfptr74 = (void*)0x7a5d94;
    vfptr8c = (void*)0x7a5d84;

    sub_5402B0();
}
