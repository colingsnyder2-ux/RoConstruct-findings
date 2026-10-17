// from server: 4% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Replicator {
    char pad0[0x2b88];
    void* stats;
    char pad1[0x58];
    void* vecBegin;
    void* vecEnd;
    void* vecCap;
    char pad2[0x60];
    void* lastId;
    char pad3[0x8];
    void* lastClass;
    void* lastProp;
    void* lastValue;
};

struct ChangePropertyItem {
    int process(void*);
};

extern "C" void __cdecl sub_4a70b0(void*, void*, void*);
extern "C" void __cdecl sub_4a5210(void*, void*, void*, int);
extern "C" void __cdecl sub_49e890();
extern "C" void __cdecl throw_bad_alloc();

int ChangePropertyItem::process(void* arg)
{
    Replicator* rep = (Replicator*)this;
    void* item = arg;
    char buf[0x20];
    sub_4a70b0(rep, item, buf);
    int idx = 0;
    sub_4a5210(item, buf, rep->lastId, 1);
    int count = ((char*)rep->vecEnd - (char*)rep->vecBegin) >> 2;
    if ((unsigned)idx >= (unsigned)count)
        throw_bad_alloc();
    void* entry = ((void**)rep->vecBegin)[idx];
    sub_49e890();
    return 0;
}
