// from server: 60% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    void* p0;
    long ref;
};

struct Arg {
    void* p0;
    Inner* p1;
};

struct CRobloxTreeCtrlNode {
    void* vptr0;
    void* vptr1;
    void* vptr2;
    char pad[0x54 - 12];
    unsigned char flags;
    void init(Arg* a, int b);
};

void CRobloxTreeCtrlNode::init(Arg* a, int b) {
    Arg local;
    local.p0 = a->p0;
    local.p1 = a->p1;
    if (local.p1) {
        _InterlockedExchangeAdd(&local.p1->ref, 1);
    }
    init(&local, 0);
    flags |= 2;
    vptr0 = (void*)0x810060;
    vptr1 = (void*)0x810054;
    vptr2 = (void*)0x810048;
}
