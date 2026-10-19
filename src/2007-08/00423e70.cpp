// from server: 66% by TrollStein
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct CRobloxTreeCtrlNode
{
    void* vptr0;
    void* vptr1;
    void* vptr2;
    char pad[0x20];
    unsigned char flags;

    void* construct(void* a, int b);
};

void* CRobloxTreeCtrlNode::construct(void* a, int b)
{
    void* src = a;
    void* p = *(void**)src;
    void* q = *(void**)((char*)src + 4);
    if (q != 0)
    {
        _InterlockedExchangeAdd((volatile long*)((char*)q + 4), 1);
    }
    void* local[2];
    local[0] = p;
    local[1] = q;
    void* arg = local;
    (*(void (__thiscall**)(CRobloxTreeCtrlNode*, void*, int))(*(void***)this))(
        this, arg, 0);
    flags |= 2;
    vptr0 = (void*)0x7887a8;
    vptr1 = (void*)0x78879c;
    vptr2 = (void*)0x788790;

    return this;
}
