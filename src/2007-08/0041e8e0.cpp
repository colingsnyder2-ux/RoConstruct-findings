// from server: 39% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    long refcount;
    long weakcount;
};

struct Sub44 {
    char pad[0x44];
};

struct Sub5c {
    char pad[0x5c];
};

struct Inner304 {
    char pad0[0x44];
    char pad1[0x18];
};

struct Obj {
    void* vptr;
    char pad0[0x2cc - 4];
    char field2cc[0x1c];
    char field2e8[0x1c];
    char field304[4];
    char field308[4];
    char field30c;

    void method(int arg);
};

extern "C" {
    void __stdcall sub_432530(void*);
    void __stdcall sub_423240(void*);
    void __stdcall sub_402a60(void*);
    void* __stdcall sub_49d670(void*, void*);
    void __stdcall sub_6617e0(void*);
}

struct Vtbl {
    char pad[0x18c];
    void* (__stdcall *fn18c)(Obj*);
};

void Obj::method(int arg) {
    char saved = field30c;
    field30c = 1;
    void* p304 = *(void**)field304;
    if (p304) {
        sub_432530((char*)p304 + 0x44);
    }
    p304 = *(void**)field304;
    if (p304) {
        sub_432530((char*)p304 + 0x5c);
    }
    Vtbl* vt = *(Vtbl**)this;
    void* r = vt->fn18c(this);
    sub_6617e0(*(void**)((char*)r + 0xa8));
    void* tmp = 0;
    void* res = sub_49d670(&tmp, &arg);
    *(void**)field304 = *(void**)res;
    sub_402a60(field308);
    if (tmp) {
        RefCounted* rc = (RefCounted*)tmp;
        if (_InterlockedExchangeAdd(&rc->refcount, -1) == 1) {
            void** v = *(void***)rc;
            ((void(__stdcall*)(void*))v[1])(rc);
            if (_InterlockedExchangeAdd(&rc->weakcount, -1) == 1) {
                void** v2 = *(void***)rc;
                ((void(__stdcall*)(void*))v2[2])(rc);
            }
        }
    }
    p304 = *(void**)field304;
    if (p304) {
        sub_423240((char*)p304 + 0x44);
    }
    p304 = *(void**)field304;
    if (p304) {
        sub_423240((char*)p304 + 0x5c);
    }
    Vtbl* vt2 = *(Vtbl**)this;
    void* r2 = vt2->fn18c(this);
    void** v3 = *(void***)r2;
    ((void(__stdcall*)(void*))v3[0x150/4])(r2);
    field30c = saved;
}
