// from server: 36% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

typedef unsigned int size_t;
void * __cdecl operator new(size_t);
void __cdecl operator delete(void *) throw();

extern "C" long __stdcall RegOpenKeyExA(void*, const char*, unsigned long, unsigned long, void**);
extern "C" long __stdcall RegQueryValueExA(void*, const char*, unsigned long*, unsigned long*, unsigned char*, unsigned long*);
extern "C" long __stdcall RegCloseKey(void*);

struct RefCounted {
    volatile long ref1;
    volatile long ref2;
    virtual void destroy1();
    virtual void destroy2();
};

struct App {
    char pad0[0x44];
    void* field44;
    char pad1[0xa4 - 0x48];
    void* fieldA4;
    char pad2[0xf0 - 0xa8];
    void* fieldF0;
    char pad3[0x10c - 0xf4];
    void* field10c;
    int InitInstance();
};

extern void __cdecl sub_569910(int);
extern void* __cdecl sub_569620(void*);
extern void __cdecl sub_5693a0(void*, int, const char*);
extern void __cdecl sub_42bc10(void*, int);
extern void* __cdecl sub_6a0920(size_t);
extern void __cdecl sub_44d610(void*);
extern void __cdecl sub_44a830(void*);
extern void __cdecl sub_6a067a(void*);
extern void* __cdecl sub_6a1352(void*);
extern void __cdecl sub_46a200(void*);
extern void __cdecl sub_46a220(void*, void*);
extern void* __cdecl sub_46a440(void*, void*);
extern void __cdecl sub_46a4b0(void*);
extern void __cdecl sub_6a093e(void*, void*);
extern int __cdecl sub_6a134c();
extern void __cdecl sub_6a1160(int, int, int);
extern void* __cdecl sub_42bbb0();
extern void* __cdecl sub_5a7570(void*);
extern void __cdecl sub_5a76b0(void*, void*);
extern void __cdecl sub_5a6ff0(void*, void*);
extern void __cdecl sub_428180(void*);

extern void* (__stdcall *p_803ee0)(void*);
extern void* (__stdcall *p_80244c)(void*, void*);
extern void (__stdcall *p_803f04)(void*);
extern void (__stdcall *p_803f14)(void*);
extern void (__stdcall *p_802048)();
extern long (__stdcall *p_802010)(void*, const char*, unsigned long, unsigned long, void**);
extern long (__stdcall *p_802020)(void*, const char*, unsigned long*, unsigned long*, unsigned char*, unsigned long*);
extern long (__stdcall *p_802008)(void*);
extern void (__stdcall *p_803380)(int, int);

int App::InitInstance()
{
    sub_569910(0);
    void* tmp = sub_569620((char*)this - 0x10);
    void* v = *(void**)tmp;
    sub_5693a0(v, 1, "ROBLOX InitInstance");

    RefCounted* rc = *(RefCounted**)((char*)tmp + 4);
    if (rc) {
        if (_InterlockedExchangeAdd(&rc->ref1, -1) == 1) {
            rc->destroy1();
            if (_InterlockedExchangeAdd(&rc->ref2, -1) == 1) {
                rc->destroy2();
            }
        }
    }

    char local14[8];
    sub_42bc10(local14, 1);

    void* obj = sub_6a0920(0x1c);
    void* newObj;
    if (obj) {
        sub_44d610(obj);
        newObj = obj;
    } else {
        newObj = 0;
    }

    void* old = this->field10c;
    this->field10c = newObj;
    if (old) {
        sub_44a830(old);
        sub_6a067a(old);
    }

    p_802048();
    void* r = sub_6a1352(this);
    if (r) {
        char local44[0x2c];
        sub_46a200(local44);

        char local18[8];
        p_803f04(local18);

        void* f44 = this->field44;
        sub_6a093e(local18, f44);

        sub_46a220(local44, local18);

        char local1c[8];
        void* r2 = sub_46a440(local44, local1c);
        void* s = p_803ee0(r2);
        p_80244c(this->fieldF0, s);

        p_803f14(local1c);
        p_803f14(local18);
        sub_46a4b0(local44);

        void* reg = 0;
        long res = p_802010((void*)0x80000001, "Software\\ROBLOX Corporation\\Roblox", 0, 0x20019, &reg);
        if (res == 0) {
            unsigned long type = 1;
            unsigned long size = 4;
            unsigned char buf[4];
            p_802020(reg, "CrashReport", 0, &type, buf, &size);
            p_803380(-1, 0x96dcf0);
            if (type != 0) {
                sub_428180((char*)this + 0xa4);
            }
            if (reg) {
                p_802008(reg);
            }
        } else {
            sub_428180((char*)this + 0xa4);
        }

        if (sub_6a134c() == 0) {
            sub_6a1160(0x64, 0, -1);
        }
    }

    void* a = sub_42bbb0();
    void* b = sub_5a7570(a);
    if (b != *(void**)local14) {
        sub_5a76b0(a, *(void**)local14);
        if (b) {
            sub_5a6ff0(a, b);
        }
    }

    return 1;
}
