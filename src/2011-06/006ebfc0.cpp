// roc 2011-06 006ebfc0  unit: VWiniInetRequest_source::?$stream_buffer  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ebfc0
//
// 006ebfc0  51                   push ecx
// 006ebfc1  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006ebfc4  83ec08               sub esp, 8
// 006ebfc7  8bd4                 mov edx, esp
// 006ebfc9  8902                 mov dword ptr [edx], eax
// 006ebfcb  8b4110               mov eax, dword ptr [ecx + 0x10]
// 006ebfce  89642408             mov dword ptr [esp + 8], esp
// 006ebfd2  894204               mov dword ptr [edx + 4], eax
// 006ebfd5  85c0                 test eax, eax
// 006ebfd7  740c                 je 0x6ebfe5
// 006ebfd9  83c004               add eax, 4
// 006ebfdc  ba01000000           mov edx, 1
// 006ebfe1  f00fc110             lock xadd dword ptr [eax], edx
// 006ebfe5  8b4104               mov eax, dword ptr [ecx + 4]
// 006ebfe8  83ec08               sub esp, 8
// 006ebfeb  8bd4                 mov edx, esp
// 006ebfed  8902                 mov dword ptr [edx], eax
// 006ebfef  8b4108               mov eax, dword ptr [ecx + 8]
// 006ebff2  89642410             mov dword ptr [esp + 0x10], esp
// 006ebff6  894204               mov dword ptr [edx + 4], eax
// 006ebff9  85c0                 test eax, eax
// 006ebffb  740c                 je 0x6ec009
// 006ebffd  83c004               add eax, 4
// 006ec000  ba01000000           mov edx, 1
// 006ec005  f00fc110             lock xadd dword ptr [eax], edx
// 006ec009  8b01                 mov eax, dword ptr [ecx]
// 006ec00b  ffd0                 call eax
// 006ec00d  83c414               add esp, 0x14
// 006ec010  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000004@@QAEXXZ)

namespace ns_ROCX000004 {
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)

inline void increment(volatile long* count)
{
    _InterlockedIncrement(count);
}

struct Control {
    void* reserved;
    volatile long references;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        increment(&control->references);
}

struct S {
    void (__cdecl *callback)(Shared, Shared);
    Shared first;
    Shared second;

    void f();
};

void S::f()
{
    callback(first, second);
}
}
