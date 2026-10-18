// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct FunctionTable {
    void (__cdecl *manager)(void*, void*, int);
};

struct Function {
    FunctionTable* table;
    unsigned int reserved;
    unsigned int storage[6];
    ~Function();
};

struct Allocator {
    void* (*alloc)(void*, unsigned int);
};

extern "C" void* __cdecl sub_618a40(void*, void*, void*);
extern "C" void __cdecl sub_419620(void*, void*, void*);
extern "C" void* __cdecl sub_41b090(void*);
extern "C" void __cdecl sub_41a530(void*);

struct DHTMLWindowService {
    void append();
};

void DHTMLWindowService::append()
{
    void* v1;
    void* v2;
    void* v3;
    void* v4;
    Control* ctrl;
    long old;

    sub_618a40(&v1, &v2, (void*)0x42b5f0);
    sub_419620(&v3, (void*)0x4185c0, 0);
    v4 = sub_41b090(&v3);

    ctrl = (Control*)v4;
    if (ctrl) {
        old = _InterlockedExchangeAdd(&ctrl->strong, -1);
        if (old == 1) {
            ctrl->dispose();
            old = _InterlockedExchangeAdd(&ctrl->weak, -1);
            if (old == 1) {
                ctrl->destroy();
            }
        }
    }

    sub_41a530(*(void**)0x96cc4c);
}
