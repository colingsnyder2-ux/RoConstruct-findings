// roc 2012-06 008646d0  unit: VWiniInetRequest_source::?$stream_buffer  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008646d0
//
// 008646d0  51                   push ecx
// 008646d1  8b410c               mov eax, dword ptr [ecx + 0xc]
// 008646d4  83ec08               sub esp, 8
// 008646d7  8bd4                 mov edx, esp
// 008646d9  8902                 mov dword ptr [edx], eax
// 008646db  8b4110               mov eax, dword ptr [ecx + 0x10]
// 008646de  89642408             mov dword ptr [esp + 8], esp
// 008646e2  894204               mov dword ptr [edx + 4], eax
// 008646e5  85c0                 test eax, eax
// 008646e7  740c                 je 0x8646f5
// 008646e9  83c004               add eax, 4
// 008646ec  ba01000000           mov edx, 1
// 008646f1  f00fc110             lock xadd dword ptr [eax], edx
// 008646f5  8b4104               mov eax, dword ptr [ecx + 4]
// 008646f8  83ec08               sub esp, 8
// 008646fb  8bd4                 mov edx, esp
// 008646fd  8902                 mov dword ptr [edx], eax
// 008646ff  8b4108               mov eax, dword ptr [ecx + 8]
// 00864702  89642410             mov dword ptr [esp + 0x10], esp
// 00864706  894204               mov dword ptr [edx + 4], eax
// 00864709  85c0                 test eax, eax
// 0086470b  740c                 je 0x864719
// 0086470d  83c004               add eax, 4
// 00864710  ba01000000           mov edx, 1
// 00864715  f00fc110             lock xadd dword ptr [eax], edx
// 00864719  8b01                 mov eax, dword ptr [ecx]
// 0086471b  ffd0                 call eax
// 0086471d  83c414               add esp, 0x14
// 00864720  c3                   ret 
// copied from an identical function in another client (function ?f@S@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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