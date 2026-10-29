// roc 2010-06 006ab190  unit: boost::Vthread::?$sp_counted_impl_p  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006ab190
//
// 006ab190  51                   push ecx
// 006ab191  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006ab194  83ec08               sub esp, 8
// 006ab197  8bd4                 mov edx, esp
// 006ab199  8902                 mov dword ptr [edx], eax
// 006ab19b  8b4110               mov eax, dword ptr [ecx + 0x10]
// 006ab19e  89642408             mov dword ptr [esp + 8], esp
// 006ab1a2  894204               mov dword ptr [edx + 4], eax
// 006ab1a5  85c0                 test eax, eax
// 006ab1a7  740c                 je 0x6ab1b5
// 006ab1a9  83c004               add eax, 4
// 006ab1ac  ba01000000           mov edx, 1
// 006ab1b1  f00fc110             lock xadd dword ptr [eax], edx
// 006ab1b5  8b4104               mov eax, dword ptr [ecx + 4]
// 006ab1b8  83ec08               sub esp, 8
// 006ab1bb  8bd4                 mov edx, esp
// 006ab1bd  8902                 mov dword ptr [edx], eax
// 006ab1bf  8b4108               mov eax, dword ptr [ecx + 8]
// 006ab1c2  89642410             mov dword ptr [esp + 0x10], esp
// 006ab1c6  894204               mov dword ptr [edx + 4], eax
// 006ab1c9  85c0                 test eax, eax
// 006ab1cb  740c                 je 0x6ab1d9
// 006ab1cd  83c004               add eax, 4
// 006ab1d0  ba01000000           mov edx, 1
// 006ab1d5  f00fc110             lock xadd dword ptr [eax], edx
// 006ab1d9  8b01                 mov eax, dword ptr [ecx]
// 006ab1db  ffd0                 call eax
// 006ab1dd  83c414               add esp, 0x14
// 006ab1e0  c3                   ret 
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