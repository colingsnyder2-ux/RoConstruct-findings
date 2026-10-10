// from server: 49% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct CRobloxDoc;

struct Inner {
    void* vptr;
    long ref1;
    long ref2;
    virtual void f1();
    virtual void f2();
};

struct Vec {
    Inner** begin;
    Inner** end;
};

extern "C" int __cdecl func_00450d00();
extern "C" void __cdecl func_00407620(void**);
extern "C" void __cdecl func_0044d0f0();
extern "C" void __cdecl func_00402a60(void*, void*);
extern "C" void __cdecl func_00541630(void*, void*);
extern "C" void* __cdecl func_00725520(void*, void*, void*);

extern void* g_8bbee8;
extern void* g_44de10;

struct CRobloxDoc {
    char pad[0x134];
    Inner** vec_begin;
    Inner** vec_end;
    void* method();
};

void* CRobloxDoc::method()
{
    int r = func_00450d00();
    if (r != 0)
        return (void*)r;

    void* local10 = 0;
    func_00407620(&local10);
    void* ebx = local10;

    func_00725520(&g_8bbee8, (void*)&g_44de10, 0);
    func_0044d0f0();
    void* edi = (void*)0;

    Inner** begin = this->vec_begin;
    if (begin == 0) {
        _invalid_parameter_noinfo();
    } else {
        unsigned int count = (unsigned int)((char*)this->vec_end - (char*)begin) >> 3;
        if ((unsigned int)edi >= count)
            _invalid_parameter_noinfo();
    }

    Inner** slot = this->vec_begin + (int)edi;
    *slot = (Inner*)local10;
    func_00402a60(&slot[1], &local10);

    func_00541630(ebx, this);

    Inner* obj = (Inner*)local10;
    if (obj != 0) {
        if (_InterlockedExchangeAdd(&obj->ref1, -1) == 1) {
            obj->f1();
            if (_InterlockedExchangeAdd(&obj->ref2, -1) == 1) {
                obj->f2();
            }
        }
    }

    return ebx;
}
