// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CRefCounted
{
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    long refCount;
    long refCount2;
};

struct CComObject
{
    int f(int a, int b, int c);
};

extern "C" void* __cdecl sub_6A1520(int);
extern "C" void* __cdecl sub_6A0968();
extern "C" void* __cdecl sub_6A0962(void*, void*);
extern "C" void* __cdecl sub_569620(void*);
extern "C" void* __cdecl sub_5693A0(void*, void*, void*, void*, void*);
extern "C" void __cdecl sub_6A095C(void*, int);
extern "C" void* __cdecl sub_4060D0(void*);
extern "C" void __cdecl sub_68B7E0(void*);
extern "C" void __cdecl sub_4097A0(void*, void*);
extern "C" void __cdecl sub_4097C0(void*, void*, void*, void*);
extern "C" int __cdecl sub_408960(void*, void*);
extern "C" void __cdecl sub_406650(void*);

extern void* (__thiscall *p_803ED8)(void*);
extern void* (__stdcall *p_803EE0)(void*);
extern void (__stdcall *p_803F14)(void*);
extern void* (__stdcall *p_802468)(void*);
extern void* (__stdcall *p_8028B8)(void*, void*, int, void*, int);
extern void* (__stdcall *p_401680)(int);

extern void* g_80B370;
extern char g_80B648[];

int CComObject::f(int a, int b, int c)
{
    void* mem = sub_6A1520(0x12a0);
    void* v1 = sub_6A0968();
    void* v2 = sub_6A0962(v1, 0);

    void* s1 = p_803ED8((void*)c);
    void* s2 = p_803ED8((void*)b);

    void* tmp = sub_569620(0);
    void* v3 = *(void**)tmp;

    void* e1 = p_803EE0(s1);
    void* e2 = p_803EE0(s2);

    sub_5693A0(v3, (void*)1, g_80B648, e2, e1);

    CRefCounted* rc = (CRefCounted*)0;
    if (rc)
    {
        if (_InterlockedExchangeAdd(&rc->refCount, -1) == 1)
        {
            rc->unknown1();
            if (_InterlockedExchangeAdd(&rc->refCount2, -1) == 1)
            {
                rc->unknown2();
            }
        }
    }

    p_803F14(s2);
    p_803F14(s1);

    char buf[0x1220];
    sub_406650(buf);

    *(short*)(buf + 0x1226) = 0x50;
    *(int*)(buf + 0x1228) = 2;
    *(int*)(buf + 0x122c) = 4;

    void* r = p_8028B8(g_80B370, buf, 0x21, (void*)4, 0);
    p_401680((int)r);

    void* ex = sub_4060D0(0);
    void* str = p_803EE0(ex);
    sub_408960(buf, str);
    p_803F14(ex);

    char buf2[0x40];
    sub_4097A0(buf2, buf + 0x1221);

    void* s3 = p_803ED8((void*)c);
    void* s4 = p_803ED8((void*)b);

    void* e3 = p_803EE0(s3);
    void* e4 = p_803EE0(s4);

    char buf3[0x40];
    sub_4097C0(buf2, buf3, e4, e3);

    p_802468(buf3);

    p_803F14(s4);
    p_803F14(s3);

    sub_68B7E0(buf2);

    return 0;
}
