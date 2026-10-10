// from server: 46% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Name;

struct Creator {
    virtual void destroy();
    virtual void unknown();
};

struct FactoryProduct {
    Creator* creator;
    FactoryProduct(Creator** out);
};

extern "C" Name* __cdecl getClassNameUnconstructed();
extern "C" void* __cdecl getCreators();

FactoryProduct::FactoryProduct(Creator** out)
{
    Name* name = getClassNameUnconstructed();
    Creator* c = *(Creator**)&name;
    *out = c;
    Creator* tmp = *(Creator**)((char*)&name + 4);
    if (tmp) {
        _InterlockedExchangeAdd((volatile long*)((char*)tmp + 4), 1);
    }
    Creator* old = this->creator;
    this->creator = 0;
    if (old) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)old + 4), -1) == 1) {
            old->destroy();
            if (_InterlockedExchangeAdd((volatile long*)((char*)old + 8), -1) == 1) {
                old->unknown();
            }
        }
    }
}
