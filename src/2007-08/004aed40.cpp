// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Name;

struct ICreator {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    virtual void unknown3();
};

struct CreatorImpl {
    void construct(Name* name, void* arg);
};

struct FactoryProduct {
    Name* name;
    CreatorImpl impl;
    void FactoryProductCtor(Name* name, void* arg);
};

void FactoryProduct::FactoryProductCtor(Name* name, void* arg) {
    this->name = name;
    this->impl.construct(name, arg);
    if (name != 0) {
        char* p = (char*)name + 0xa4;
        if (p != 0) {
            *(Name**)p = name;
            Name* old = this->name;
            if (old != 0) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            Name* prev = *(Name**)(p + 4);
            if (prev != 0) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)prev + 8), -1) == 1) {
                    void** vtbl = *(void***)prev;
                    void (*dtor)(void*) = (void (*)(void*))vtbl[2];
                    dtor(prev);
                }
            }
            *(Name**)(p + 4) = old;
        }
    }
}
