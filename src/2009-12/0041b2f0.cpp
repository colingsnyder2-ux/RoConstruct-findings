// roc 2009-12 0041b2f0  unit: rbx::signals::connection::slot  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041b2f0
//
// 0041b2f0  51                   push ecx
// 0041b2f1  83ec08               sub esp, 8
// 0041b2f4  8bc4                 mov eax, esp
// 0041b2f6  c70000000000         mov dword ptr [eax], 0
// 0041b2fc  c7400400000000       mov dword ptr [eax + 4], 0
// 0041b303  8b15f894b700         mov edx, dword ptr [0xb794f8]
// 0041b309  89642408             mov dword ptr [esp + 8], esp
// 0041b30d  83ec08               sub esp, 8
// 0041b310  8bc4                 mov eax, esp
// 0041b312  8910                 mov dword ptr [eax], edx
// 0041b314  8b15fc94b700         mov edx, dword ptr [0xb794fc]
// 0041b31a  895004               mov dword ptr [eax + 4], edx
// 0041b31d  8bc2                 mov eax, edx
// 0041b31f  89642410             mov dword ptr [esp + 0x10], esp
// 0041b323  85c0                 test eax, eax
// 0041b325  740c                 je 0x41b333
// 0041b327  83c004               add eax, 4
// 0041b32a  ba01000000           mov edx, 1
// 0041b32f  f00fc110             lock xadd dword ptr [eax], edx
// 0041b333  8b01                 mov eax, dword ptr [ecx]
// 0041b335  8b10                 mov edx, dword ptr [eax]
// 0041b337  ffd2                 call edx
// 0041b339  59                   pop ecx
// 0041b33a  c3                   ret 
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