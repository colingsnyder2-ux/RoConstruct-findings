// from server: 35% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void** vptr;
    volatile long refCount;
    volatile long weakRefCount;
};

struct S {
    char pad[0x2001c];
    char str[0x10];
    char pad2[0x20030 - 0x2001c - 0x10];
    unsigned int strLen;
    void* m_func;

    void* update(void* arg);
};

extern "C" void* __cdecl sub_5973A0(void* out, void* arg);
extern "C" void __cdecl sub_541630(void* p, void* arg);
extern "C" void* __cdecl sub_77E698(void* p);
extern "C" void __cdecl sub_77E6AC(void* p);

void* S::update(void* arg) {
    void* tmp[2];
    sub_5973A0(tmp, arg);
    void* edi = tmp[0];
    RefCounted* esi = (RefCounted*)tmp[1];
    if (esi) {
        _InterlockedExchangeAdd(&esi->refCount, 1);
    }
    if (esi) {
        if (_InterlockedExchangeAdd(&esi->refCount, -1) == 1) {
            void** vt = esi->vptr;
            ((void (__thiscall*)(RefCounted*))vt[1])(esi);
            if (_InterlockedExchangeAdd(&esi->weakRefCount, -1) == 1) {
                void** vt2 = esi->vptr;
                ((void (__thiscall*)(RefCounted*))vt2[2])(esi);
            }
        }
    }
    char* str;
    if (strLen < 0x10) {
        str = (char*)this + 0x2001c;
    } else {
        str = *(char**)((char*)this + 0x2001c);
    }
    void* s = sub_77E698(str);
    void** vt = *(void***)edi;
    ((void (__thiscall*)(void*, void*))vt[2])(edi, s);
    sub_77E6AC(s);
    sub_541630(edi, arg);
    if (esi) {
        if (_InterlockedExchangeAdd(&esi->refCount, -1) == 1) {
            void** vt2 = esi->vptr;
            ((void (__thiscall*)(RefCounted*))vt2[1])(esi);
            if (_InterlockedExchangeAdd(&esi->weakRefCount, -1) == 1) {
                void** vt3 = esi->vptr;
                ((void (__thiscall*)(RefCounted*))vt3[2])(esi);
            }
        }
    }
    return edi;
}
