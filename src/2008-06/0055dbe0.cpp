// from server: 100% by king_originala
// roc 2008-06 0055dbe0  unit: std::D::DU?$char_traits::V?$basic_string::?$sp_counted_impl_p  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0055dbe0
//
// 0055dbe0  6aff                 push -1
// 0055dbe2  6838077d00           push 0x7d0738
// 0055dbe7  64a100000000         mov eax, dword ptr fs:[0]
// 0055dbed  50                   push eax
// 0055dbee  64892500000000       mov dword ptr fs:[0], esp
// 0055dbf5  51                   push ecx
// 0055dbf6  8b4104               mov eax, dword ptr [ecx + 4]
// 0055dbf9  83ec08               sub esp, 8
// 0055dbfc  8bd4                 mov edx, esp
// 0055dbfe  8902                 mov dword ptr [edx], eax
// 0055dc00  8b4108               mov eax, dword ptr [ecx + 8]
// 0055dc03  89642408             mov dword ptr [esp + 8], esp
// 0055dc07  894204               mov dword ptr [edx + 4], eax
// 0055dc0a  85c0                 test eax, eax
// 0055dc0c  740c                 je 0x55dc1a
// 0055dc0e  83c004               add eax, 4
// 0055dc11  ba01000000           mov edx, 1
// 0055dc16  f00fc110             lock xadd dword ptr [eax], edx
// 0055dc1a  8b01                 mov eax, dword ptr [ecx]
// 0055dc1c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0055dc20  50                   push eax
// 0055dc21  8b01                 mov eax, dword ptr [ecx]
// 0055dc23  83ec20               sub esp, 0x20
// 0055dc26  8bcc                 mov ecx, esp
// 0055dc28  c70100000000         mov dword ptr [ecx], 0
// 0055dc2e  8b10                 mov edx, dword ptr [eax]
// 0055dc30  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0055dc38  89642448             mov dword ptr [esp + 0x48], esp
// 0055dc3c  85d2                 test edx, edx
// 0055dc3e  7415                 je 0x55dc55
// 0055dc40  8911                 mov dword ptr [ecx], edx
// 0055dc42  8b10                 mov edx, dword ptr [eax]
// 0055dc44  6a00                 push 0
// 0055dc46  83c108               add ecx, 8
// 0055dc49  83c008               add eax, 8
// 0055dc4c  51                   push ecx
// 0055dc4d  50                   push eax
// 0055dc4e  8b02                 mov eax, dword ptr [edx]
// 0055dc50  ffd0                 call eax
// 0055dc52  83c40c               add esp, 0xc
// 0055dc55  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0055dc59  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0055dc61  8b11                 mov edx, dword ptr [ecx]
// 0055dc63  ffd2                 call edx
// 0055dc65  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0055dc69  64890d00000000       mov dword ptr fs:[0], ecx
// 0055dc70  83c43c               add esp, 0x3c
// 0055dc73  c21000               ret 0x10

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
