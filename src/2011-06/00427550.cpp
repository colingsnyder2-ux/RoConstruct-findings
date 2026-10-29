// roc 2011-06 00427550  unit: CRobloxTreeCtrl  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00427550
//
// 00427550  51                   push ecx
// 00427551  83ec08               sub esp, 8
// 00427554  8bc4                 mov eax, esp
// 00427556  c70000000000         mov dword ptr [eax], 0
// 0042755c  c7400400000000       mov dword ptr [eax + 4], 0
// 00427563  8b15ac15cb00         mov edx, dword ptr [0xcb15ac]
// 00427569  89642408             mov dword ptr [esp + 8], esp
// 0042756d  83ec08               sub esp, 8
// 00427570  8bc4                 mov eax, esp
// 00427572  8910                 mov dword ptr [eax], edx
// 00427574  8b15b015cb00         mov edx, dword ptr [0xcb15b0]
// 0042757a  895004               mov dword ptr [eax + 4], edx
// 0042757d  8bc2                 mov eax, edx
// 0042757f  89642410             mov dword ptr [esp + 0x10], esp
// 00427583  85c0                 test eax, eax
// 00427585  740c                 je 0x427593
// 00427587  83c004               add eax, 4
// 0042758a  ba01000000           mov edx, 1
// 0042758f  f00fc110             lock xadd dword ptr [eax], edx
// 00427593  8b01                 mov eax, dword ptr [ecx]
// 00427595  8b10                 mov edx, dword ptr [eax]
// 00427597  ffd2                 call edx
// 00427599  59                   pop ecx
// 0042759a  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000013@@QAEXXZ)

namespace ns_ROCX000013 {
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)

struct ControlBlock {
    void* vtable;
    volatile long references;
};

struct Pointer {
    void* object;
    ControlBlock* control;

    Pointer() throw();
    Pointer(const Pointer&) throw();
    ~Pointer() throw();
};

inline Pointer::Pointer() throw()
    : object(0), control(0)
{
}

inline Pointer::Pointer(const Pointer& other) throw()
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->references);
}

extern Pointer globalPointer;

struct S {
    virtual void set(Pointer, Pointer);
    void f();
};

void S::f()
{
    set(globalPointer, Pointer());
}
}
