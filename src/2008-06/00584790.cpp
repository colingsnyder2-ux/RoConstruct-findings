// from server: 44% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long refCount;
    volatile long weakRefCount;
    virtual void destroy();
    virtual void destroyWeak();
};

struct Sub {
    void* vptr;
};

struct Base {
    unsigned long words[77];
    int* table;
    void f();
    void cleanup();
};

void func_0047d410();

struct Target {
    char pad0[0x10];
    void* vptr10;
    char pad14[0x0c];
    void* vptr20;
    void* vptr24;
    char pad28[0x1c];
    void* vptr44;
    char pad48[0x1c];
    void* vptr64;
    char pad68[0x1c];
    void* vptr84;
    char pad88[0x1c];
    void* vptrA4;
    char padA8[0x1c];
    void* vptrC4;
    char padC8[0x68];
    void* vptr130;
    void* vptr134;
    char pad138[0x68];
    void* vptr1A0;
    char pad1A4[0x44];
    RefCounted* ref1E8;
    void* ptr1EC;
    char pad1F0[0x08];
    void* ptr1F8;
    void* ptr1FC;
    void* ptr200;

    void destroy();
};

void Target::destroy()
{
    vptr10 = (void*)0x830db8;
    vptr20 = (void*)0x830da8;
    vptr24 = (void*)0x830d98;
    vptr44 = (void*)0x830d88;
    vptr64 = (void*)0x830d78;
    vptr84 = (void*)0x830d68;
    vptrA4 = (void*)0x830d58;
    vptrC4 = (void*)0x830d48;
    vptr130 = (void*)0x830d3c;
    vptr1A0 = (void*)0x830d24;

    void** p134 = (void**)vptr134;
    void* a = p134[1];
    *(void**)((char*)a + (unsigned long)this + 0x134) = (void*)0x830d18;
    void* b = p134[2];
    *(void**)((char*)b + (unsigned long)this + 0x134) = (void*)0x830d10;
    void* c = p134[3];
    *(void**)((char*)c + (unsigned long)this + 0x134) = (void*)0x830cf4;

    void* a2 = p134[1];
    *(void**)((char*)a2 + (unsigned long)this + 0x130) = (char*)a2 - 0x158;
    void* b2 = p134[2];
    *(void**)((char*)b2 + (unsigned long)this + 0x130) = (char*)b2 - 0x160;
    void* c2 = p134[3];
    *(void**)((char*)c2 + (unsigned long)this + 0x130) = (char*)c2 - 0x168;

    if (ptr1F8) {
        ((Base*)ptr1F8)->cleanup();
    }
    ptr1F8 = 0;
    ptr1FC = 0;
    ptr200 = 0;
    ((Base*)ptr1EC)->cleanup();

    RefCounted* r = ref1E8;
    if (r) {
        if (_InterlockedExchangeAdd(&r->refCount, -1) == 1) {
            r->destroy();
            if (_InterlockedExchangeAdd(&r->weakRefCount, -1) == 1) {
                r->destroyWeak();
            }
        }
    }

    func_0047d410();
    ((Base*)this)->f();
}
