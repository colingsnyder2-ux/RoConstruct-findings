// from server: 53% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl sub_62FF02();
extern "C" void* __cdecl sub_42F710(void*);
extern "C" void __cdecl sub_40D550(void*);
extern "C" void __cdecl sub_5595A0(void*);
extern "C" void* __cdecl sub_564B50(void*);
extern "C" void __cdecl sub_77E698(void*, const char*);

struct RefCounted {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    int ref1;
    int ref2;
};

struct DxUserInput {
    bool check();
};

bool DxUserInput::check()
{
    void* a = sub_62FF02();
    unsigned char* b = *(unsigned char**)((char*)a + 4);
    unsigned char* c = *(unsigned char**)(b + 0x20);
    if (*(unsigned char*)(c + 0xec) == 0)
        return false;

    void* tmp;
    sub_42F710(&tmp);
    RefCounted* p = *(RefCounted**)((char*)&tmp + 8);
    bool flag = (*(int*)tmp != 0);
    if (p) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            void** vt = *(void***)p;
            ((void (__thiscall*)(void*))vt[1])(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                void** vt2 = *(void***)p;
                ((void (__thiscall*)(void*))vt2[2])(p);
            }
        }
    }
    if (!flag)
        return false;

    void* tmp2;
    sub_42F710(&tmp2);
    int v = *(int*)tmp2;
    RefCounted* p2 = *(RefCounted**)((char*)tmp2 + 4);
    void* local = 0;
    if (p2) {
        _InterlockedExchangeAdd((volatile long*)((char*)p2 + 4), 1);
    }
    sub_40D550(&local);
    RefCounted* p3 = *(RefCounted**)((char*)&local + 4);
    if (p3) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p3 + 4), -1) == 1) {
            void** vt = *(void***)p3;
            ((void (__thiscall*)(void*))vt[1])(p3);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p3 + 8), -1) == 1) {
                void** vt2 = *(void***)p3;
                ((void (__thiscall*)(void*))vt2[2])(p3);
            }
        }
    }

    char buf[28];
    sub_77E698(buf, "ToggleToolbox");

    void* tmp3;
    sub_42F710(&tmp3);
    int* q = *(int**)tmp3;
    void* r = sub_564B50((char*)q + 0x14c);
    void* edi = r;

    RefCounted* p4 = *(RefCounted**)((char*)&local + 4);
    if (p4) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p4 + 4), -1) == 1) {
            void** vt = *(void***)p4;
            ((void (__thiscall*)(void*))vt[1])(p4);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p4 + 8), -1) == 1) {
                void** vt2 = *(void***)p4;
                ((void (__thiscall*)(void*))vt2[2])(p4);
            }
        }
    }

    if (edi) {
        void** vt = *(void***)edi;
        bool res = ((bool (__thiscall*)(void*))vt[3])(edi);
        sub_5595A0(&local);
        return !res;
    }
    sub_5595A0(&local);
    return false;
}
