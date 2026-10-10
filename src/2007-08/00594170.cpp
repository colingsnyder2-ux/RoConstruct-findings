// from server: 39% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long refCount1;
    volatile long refCount2;
};

struct StringHolder {
    char pad[0x30];
    void* str;
};

struct Verb {
    char pad0[0x24];
    RefCounted* ptr24;
    char pad28[0x30 - 0x28];
    StringHolder str30;
    void destroy();
    ~Verb();
};

void Verb::destroy()
{
    if (str30.str) {
        extern void __stdcall freeString(void*);
        freeString(&str30);
    }
    if (ptr24) {
        if (_InterlockedExchangeAdd(&ptr24->refCount1, -1) == 1) {
            ptr24->unknown1();
            if (_InterlockedExchangeAdd(&ptr24->refCount2, -1) == 1) {
                ptr24->unknown2();
            }
        }
    }
    this->~Verb();
}
