// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RBXName {
    void* rep;
};

struct RefCounted {
    void* vptr;
    long refcount;
    long weakcount;
};

struct CreatorBase {
    void* vptr;
};

struct FactoryProduct {
    char pad[0x180];
    RBXName name180;
    void* ptr184;
    void* ptr188;
    void* ptr18c;
    void* ptr190;
    void* ptr194;
    void* ptr198;
    void* ptr19c;
    void* ptr1a0;
    void* ptr1a4;
    void* ptr1a8;
    void* ptr1ac;

    void sub_55a830();
    void sub_55a920();
    void sub_4b0720();
    void sub_450ec0();
    void sub_4b0820();
    void sub_541630_helper();
};

extern "C" void __cdecl sub_541630(void* p, void* q);
extern "C" void __cdecl sub_5e49e0(void* out, void* in);
extern "C" void __cdecl sub_402a60(void* dst, void* src);
extern "C" void __cdecl sub_49d670(void* out, void* in);
extern "C" void __cdecl sub_57ce80(void* p);
extern "C" void __cdecl sub_564800(void* p, void* q);
extern "C" void __cdecl sub_52ef30(void* p);
extern "C" void __cdecl sub_423240(void* p, void* q);

void FactoryProduct::sub_55a830() {}
void FactoryProduct::sub_55a920() {}
void FactoryProduct::sub_4b0720() {}
void FactoryProduct::sub_450ec0() {}
void FactoryProduct::sub_4b0820() {}

void FactoryProduct::sub_541630_helper()
{
    sub_541630(*(void**)((char*)this + 0x188), this);
    sub_541630(*(void**)((char*)this + 0x1a0), this);
    sub_541630(*(void**)((char*)this + 0x1a8), this);

    sub_55a830();

    {
        char tmp[8];
        sub_5e49e0(tmp, (void*)0);
        *(void**)((char*)this + 0x180) = *(void**)tmp;
        sub_402a60((char*)this + 0x184, tmp + 4);
        RefCounted* rc = *(RefCounted**)tmp;
        if (rc) {
            if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
                void** vt = *(void***)rc;
                ((void(__thiscall*)(void*))vt[1])(rc);
                if (_InterlockedExchangeAdd(&rc->weakcount, -1) == 1) {
                    void** vt2 = *(void***)rc;
                    ((void(__thiscall*)(void*))vt2[2])(rc);
                }
            }
        }
    }

    sub_4b0720();

    {
        char tmp[8];
        sub_5e49e0(tmp, (void*)0);
        *(void**)((char*)this + 0x198) = *(void**)tmp;
        sub_402a60((char*)this + 0x19c, tmp + 4);
        RefCounted* rc = *(RefCounted**)tmp;
        if (rc) {
            if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
                void** vt = *(void***)rc;
                ((void(__thiscall*)(void*))vt[1])(rc);
                if (_InterlockedExchangeAdd(&rc->weakcount, -1) == 1) {
                    void** vt2 = *(void***)rc;
                    ((void(__thiscall*)(void*))vt2[2])(rc);
                }
            }
        }
    }

    sub_450ec0();

    {
        char tmp[8];
        sub_49d670(tmp, (void*)0);
        *(void**)((char*)this + 0x190) = *(void**)tmp;
        sub_402a60((char*)this + 0x194, tmp + 4);
        RefCounted* rc = *(RefCounted**)tmp;
        if (rc) {
            if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
                void** vt = *(void***)rc;
                ((void(__thiscall*)(void*))vt[1])(rc);
                if (_InterlockedExchangeAdd(&rc->weakcount, -1) == 1) {
                    void** vt2 = *(void***)rc;
                    ((void(__thiscall*)(void*))vt2[2])(rc);
                }
            }
        }
    }

    sub_55a920();

    sub_57ce80(*(void**)((char*)this + 0x188));
    sub_564800((char*)*(void**)((char*)this + 0x188) + 0x284, (char*)this + 0x14c);
    sub_52ef30(*(void**)((char*)this + 0x190));

    void* p = *(void**)((char*)this + 0x190);
    if (p) {
        sub_423240((char*)p + 0x118, (char*)this + 0x17c);
    }

    sub_4b0820();
}
