// roc 2009-12 006be3d0  unit: CPropGrid::UpdateItemsJob  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006be3d0
//
// 006be3d0  6aff                 push -1
// 006be3d2  68583d9500           push 0x953d58
// 006be3d7  64a100000000         mov eax, dword ptr fs:[0]
// 006be3dd  50                   push eax
// 006be3de  64892500000000       mov dword ptr fs:[0], esp
// 006be3e5  51                   push ecx
// 006be3e6  8b4104               mov eax, dword ptr [ecx + 4]
// 006be3e9  83ec08               sub esp, 8
// 006be3ec  8bd4                 mov edx, esp
// 006be3ee  8902                 mov dword ptr [edx], eax
// 006be3f0  8b4108               mov eax, dword ptr [ecx + 8]
// 006be3f3  89642408             mov dword ptr [esp + 8], esp
// 006be3f7  894204               mov dword ptr [edx + 4], eax
// 006be3fa  85c0                 test eax, eax
// 006be3fc  740c                 je 0x6be40a
// 006be3fe  83c004               add eax, 4
// 006be401  ba01000000           mov edx, 1
// 006be406  f00fc110             lock xadd dword ptr [eax], edx
// 006be40a  8b01                 mov eax, dword ptr [ecx]
// 006be40c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006be410  50                   push eax
// 006be411  8b01                 mov eax, dword ptr [ecx]
// 006be413  83ec20               sub esp, 0x20
// 006be416  8bcc                 mov ecx, esp
// 006be418  c70100000000         mov dword ptr [ecx], 0
// 006be41e  8b10                 mov edx, dword ptr [eax]
// 006be420  c744243800000000     mov dword ptr [esp + 0x38], 0
// 006be428  89642448             mov dword ptr [esp + 0x48], esp
// 006be42c  85d2                 test edx, edx
// 006be42e  7415                 je 0x6be445
// 006be430  8911                 mov dword ptr [ecx], edx
// 006be432  8b10                 mov edx, dword ptr [eax]
// 006be434  6a00                 push 0
// 006be436  83c108               add ecx, 8
// 006be439  83c008               add eax, 8
// 006be43c  51                   push ecx
// 006be43d  50                   push eax
// 006be43e  8b02                 mov eax, dword ptr [edx]
// 006be440  ffd0                 call eax
// 006be442  83c40c               add esp, 0xc
// 006be445  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006be449  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 006be451  8b11                 mov edx, dword ptr [ecx]
// 006be453  ffd2                 call edx
// 006be455  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006be459  64890d00000000       mov dword ptr fs:[0], ecx
// 006be460  83c43c               add esp, 0x3c
// 006be463  c21000               ret 0x10
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