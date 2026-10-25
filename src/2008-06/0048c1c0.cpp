// from server: 100% by colin
// roc 2008-06 0048c1c0  unit: G3D::VVector2int16::?$TypedPropertyDescriptor  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048c1c0
//
// 0048c1c0  51                   push ecx
// 0048c1c1  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0048c1c4  83ec08               sub esp, 8
// 0048c1c7  8bd4                 mov edx, esp
// 0048c1c9  8902                 mov dword ptr [edx], eax
// 0048c1cb  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0048c1ce  89642408             mov dword ptr [esp + 8], esp
// 0048c1d2  894204               mov dword ptr [edx + 4], eax
// 0048c1d5  85c0                 test eax, eax
// 0048c1d7  740c                 je 0x48c1e5
// 0048c1d9  83c004               add eax, 4
// 0048c1dc  ba01000000           mov edx, 1
// 0048c1e1  f00fc110             lock xadd dword ptr [eax], edx
// 0048c1e5  8b4104               mov eax, dword ptr [ecx + 4]
// 0048c1e8  83ec08               sub esp, 8
// 0048c1eb  8bd4                 mov edx, esp
// 0048c1ed  8902                 mov dword ptr [edx], eax
// 0048c1ef  8b4108               mov eax, dword ptr [ecx + 8]
// 0048c1f2  89642410             mov dword ptr [esp + 0x10], esp
// 0048c1f6  894204               mov dword ptr [edx + 4], eax
// 0048c1f9  85c0                 test eax, eax
// 0048c1fb  740c                 je 0x48c209
// 0048c1fd  83c004               add eax, 4
// 0048c200  ba01000000           mov edx, 1
// 0048c205  f00fc110             lock xadd dword ptr [eax], edx
// 0048c209  8b01                 mov eax, dword ptr [ecx]
// 0048c20b  ffd0                 call eax
// 0048c20d  83c414               add esp, 0x14
// 0048c210  c3                   ret 

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
