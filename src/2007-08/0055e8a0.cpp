// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long refCount1;
    volatile long refCount2;
};

struct SelectAllCommand {
    void doIt(void* dataState);
};

extern "C" void __cdecl sub_578380(void* dataState, int flag);

void SelectAllCommand::doIt(void* dataState)
{
    sub_578380(dataState, 1);

    RefCounted* p = *(RefCounted**)((char*)&dataState + 12);
    if (p) {
        if (_InterlockedExchangeAdd(&p->refCount1, -1) == 1) {
            p->unknown1();
            if (_InterlockedExchangeAdd(&p->refCount2, -1) == 1) {
                p->unknown2();
            }
        }
    }
}
