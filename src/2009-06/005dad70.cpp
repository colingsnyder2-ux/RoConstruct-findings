// roc 2009-06 005dad70  unit: std::D::DU?$char_traits::V?$basic_string::?$sp_counted_impl_p  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005dad70
//
// 005dad70  6aff                 push -1
// 005dad72  68f89c8500           push 0x859cf8
// 005dad77  64a100000000         mov eax, dword ptr fs:[0]
// 005dad7d  50                   push eax
// 005dad7e  64892500000000       mov dword ptr fs:[0], esp
// 005dad85  51                   push ecx
// 005dad86  8b4104               mov eax, dword ptr [ecx + 4]
// 005dad89  83ec08               sub esp, 8
// 005dad8c  8bd4                 mov edx, esp
// 005dad8e  8902                 mov dword ptr [edx], eax
// 005dad90  8b4108               mov eax, dword ptr [ecx + 8]
// 005dad93  89642408             mov dword ptr [esp + 8], esp
// 005dad97  894204               mov dword ptr [edx + 4], eax
// 005dad9a  85c0                 test eax, eax
// 005dad9c  740c                 je 0x5dadaa
// 005dad9e  83c004               add eax, 4
// 005dada1  ba01000000           mov edx, 1
// 005dada6  f00fc110             lock xadd dword ptr [eax], edx
// 005dadaa  8b01                 mov eax, dword ptr [ecx]
// 005dadac  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005dadb0  50                   push eax
// 005dadb1  8b01                 mov eax, dword ptr [ecx]
// 005dadb3  83ec20               sub esp, 0x20
// 005dadb6  8bcc                 mov ecx, esp
// 005dadb8  c70100000000         mov dword ptr [ecx], 0
// 005dadbe  8b10                 mov edx, dword ptr [eax]
// 005dadc0  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005dadc8  89642448             mov dword ptr [esp + 0x48], esp
// 005dadcc  85d2                 test edx, edx
// 005dadce  7415                 je 0x5dade5
// 005dadd0  8911                 mov dword ptr [ecx], edx
// 005dadd2  8b10                 mov edx, dword ptr [eax]
// 005dadd4  6a00                 push 0
// 005dadd6  83c108               add ecx, 8
// 005dadd9  83c008               add eax, 8
// 005daddc  51                   push ecx
// 005daddd  50                   push eax
// 005dadde  8b02                 mov eax, dword ptr [edx]
// 005dade0  ffd0                 call eax
// 005dade2  83c40c               add esp, 0xc
// 005dade5  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 005dade9  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 005dadf1  8b11                 mov edx, dword ptr [ecx]
// 005dadf3  ffd2                 call edx
// 005dadf5  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005dadf9  64890d00000000       mov dword ptr fs:[0], ecx
// 005dae00  83c43c               add esp, 0x3c
// 005dae03  c21000               ret 0x10
// copied from an identical function in another client (function ?f@S@@QAEXKPAP6AXUFunction@@PAXUShared@@@ZPBQAU2@K@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

inline void add_ref(volatile long* count)
{
    _InterlockedExchangeAdd(count, 1);
}

struct Control {
    void* vtable;
    volatile long count;
};

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        add_ref(&control->count);
}

struct FunctionTable {
    void (__cdecl *manage)(const void*, void*, int);
};

struct Function {
    FunctionTable* table;
    unsigned long padding;
    unsigned char storage[24];

    Function(const Function&);
    ~Function();
};

inline Function::Function(const Function& other)
    : table(0)
{
    if (other.table) {
        table = other.table;
        other.table->manage(other.storage, storage, 0);
    }
}

typedef void (__cdecl *Callback)(Function, void*, Shared);

struct S {
    void* object;
    Shared shared;

    void f(unsigned long, Callback*, Function* const*, unsigned long);
};

void S::f(unsigned long, Callback* callback,
          Function* const* function, unsigned long)
{
    (*callback)(**function, object, shared);
}