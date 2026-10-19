// from server: 93% by colin
// from server: 87% by king_originala
// roc 2008-06 004306c0  unit: VCMDIFrameWnd::?$CXTPCommandBarsSiteBase  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004306c0
//
// 004306c0  51                   push ecx
// 004306c1  8b0d5cc29600         mov ecx, dword ptr [0x96c25c]
// 004306c7  8b442408             mov eax, dword ptr [esp + 8]
// 004306cb  8908                 mov dword ptr [eax], ecx
// 004306cd  8b1560c29600         mov edx, dword ptr [0x96c260]
// 004306d3  8bca                 mov ecx, edx
// 004306d5  c7042400000000       mov dword ptr [esp], 0
// 004306dc  895004               mov dword ptr [eax + 4], edx
// 004306df  85c9                 test ecx, ecx
// 004306e1  740c                 je 0x4306ef
// 004306e3  83c104               add ecx, 4
// 004306e6  ba01000000           mov edx, 1
// 004306eb  f00fc111             lock xadd dword ptr [ecx], edx
// 004306ef  59                   pop ecx
// 004306f0  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    long reserved;
    volatile long references;
};

struct Pair
{
    void* object;
    Control* control;

    Pair(const Pair& other);
    ~Pair();
};

inline Pair::Pair(const Pair& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->references);
}

extern Pair global_pair;

Pair __cdecl func_004306c0()
{
    return global_pair;
}
