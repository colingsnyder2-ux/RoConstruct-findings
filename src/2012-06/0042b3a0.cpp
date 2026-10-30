// roc 2012-06 0042b3a0  unit: CRobloxTreeCtrl  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0042b3a0
//
// 0042b3a0  51                   push ecx
// 0042b3a1  83ec08               sub esp, 8
// 0042b3a4  8bc4                 mov eax, esp
// 0042b3a6  c70000000000         mov dword ptr [eax], 0
// 0042b3ac  c7400400000000       mov dword ptr [eax + 4], 0
// 0042b3b3  8b15bc63e100         mov edx, dword ptr [0xe163bc]
// 0042b3b9  89642408             mov dword ptr [esp + 8], esp
// 0042b3bd  83ec08               sub esp, 8
// 0042b3c0  8bc4                 mov eax, esp
// 0042b3c2  8910                 mov dword ptr [eax], edx
// 0042b3c4  8b15c063e100         mov edx, dword ptr [0xe163c0]
// 0042b3ca  895004               mov dword ptr [eax + 4], edx
// 0042b3cd  8bc2                 mov eax, edx
// 0042b3cf  89642410             mov dword ptr [esp + 0x10], esp
// 0042b3d3  85c0                 test eax, eax
// 0042b3d5  740c                 je 0x42b3e3
// 0042b3d7  83c004               add eax, 4
// 0042b3da  ba01000000           mov edx, 1
// 0042b3df  f00fc110             lock xadd dword ptr [eax], edx
// 0042b3e3  8b01                 mov eax, dword ptr [ecx]
// 0042b3e5  8b10                 mov edx, dword ptr [eax]
// 0042b3e7  ffd2                 call edx
// 0042b3e9  59                   pop ecx
// 0042b3ea  c3                   ret 
// copied from an identical function in another client (function ?f@S@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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