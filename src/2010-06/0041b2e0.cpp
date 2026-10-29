// roc 2010-06 0041b2e0  unit: rbx::signals::connection::slot  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041b2e0
//
// 0041b2e0  51                   push ecx
// 0041b2e1  83ec08               sub esp, 8
// 0041b2e4  8bc4                 mov eax, esp
// 0041b2e6  c70000000000         mov dword ptr [eax], 0
// 0041b2ec  c7400400000000       mov dword ptr [eax + 4], 0
// 0041b2f3  8b15a8fabf00         mov edx, dword ptr [0xbffaa8]
// 0041b2f9  89642408             mov dword ptr [esp + 8], esp
// 0041b2fd  83ec08               sub esp, 8
// 0041b300  8bc4                 mov eax, esp
// 0041b302  8910                 mov dword ptr [eax], edx
// 0041b304  8b15acfabf00         mov edx, dword ptr [0xbffaac]
// 0041b30a  895004               mov dword ptr [eax + 4], edx
// 0041b30d  8bc2                 mov eax, edx
// 0041b30f  89642410             mov dword ptr [esp + 0x10], esp
// 0041b313  85c0                 test eax, eax
// 0041b315  740c                 je 0x41b323
// 0041b317  83c004               add eax, 4
// 0041b31a  ba01000000           mov edx, 1
// 0041b31f  f00fc110             lock xadd dword ptr [eax], edx
// 0041b323  8b01                 mov eax, dword ptr [ecx]
// 0041b325  8b10                 mov edx, dword ptr [eax]
// 0041b327  ffd2                 call edx
// 0041b329  59                   pop ecx
// 0041b32a  c3                   ret 
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