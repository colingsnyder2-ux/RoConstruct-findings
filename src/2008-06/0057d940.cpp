// from server: 28% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Instance;

struct ChildEntry
{
    Instance* object;
    void* control;
};

struct Children
{
    char padding[12];
    ChildEntry* first;
    ChildEntry* last;
};

struct RefCounted
{
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
    volatile long refCount1;
    volatile long refCount2;
};

struct AllCanSelectCommand
{
    void doIt(Instance* dataState);
};

extern "C" unsigned int __cdecl childCount(Instance* instance);

void AllCanSelectCommand::doIt(Instance* dataState)
{
    childCount(dataState);
    RefCounted* rc = (RefCounted*)dataState;
    if (rc)
    {
        if (_InterlockedExchangeAdd(&rc->refCount1, -1) == 1)
        {
            rc->unknown1();
            if (_InterlockedExchangeAdd(&rc->refCount2, -1) == 1)
            {
                rc->unknown2();
            }
        }
    }
}
