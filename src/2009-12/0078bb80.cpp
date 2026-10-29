// roc 2009-12 0078bb80  unit: RBX::Lua::VWeakThreadRef::?$sp_counted_impl_p  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078bb80
//
// 0078bb80  6aff                 push -1
// 0078bb82  68583d9500           push 0x953d58
// 0078bb87  64a100000000         mov eax, dword ptr fs:[0]
// 0078bb8d  50                   push eax
// 0078bb8e  64892500000000       mov dword ptr fs:[0], esp
// 0078bb95  51                   push ecx
// 0078bb96  56                   push esi
// 0078bb97  8bf1                 mov esi, ecx
// 0078bb99  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0078bb9d  8b01                 mov eax, dword ptr [ecx]
// 0078bb9f  8906                 mov dword ptr [esi], eax
// 0078bba1  8b4104               mov eax, dword ptr [ecx + 4]
// 0078bba4  89742404             mov dword ptr [esp + 4], esi
// 0078bba8  894604               mov dword ptr [esi + 4], eax
// 0078bbab  85c0                 test eax, eax
// 0078bbad  740c                 je 0x78bbbb
// 0078bbaf  83c004               add eax, 4
// 0078bbb2  ba01000000           mov edx, 1
// 0078bbb7  f00fc110             lock xadd dword ptr [eax], edx
// 0078bbbb  83c108               add ecx, 8
// 0078bbbe  51                   push ecx
// 0078bbbf  8d4e08               lea ecx, [esi + 8]
// 0078bbc2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0078bbca  ff155cb79800         call dword ptr [0x98b75c]
// 0078bbd0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0078bbd4  8bc6                 mov eax, esi
// 0078bbd6  5e                   pop esi
// 0078bbd7  64890d00000000       mov dword ptr fs:[0], ecx
// 0078bbde  83c410               add esp, 0x10
// 0078bbe1  c20400               ret 4
// copied from an identical function in another client (function ??0Holder@@QAE@ABU0@@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

inline void add_reference(volatile long* references)
{
    _InterlockedExchangeAdd(references, 1);
}

struct ControlBlock {
    unsigned long reserved;
    volatile long references;
};

struct Shared {
    void* object;
    ControlBlock* control;

    Shared(const Shared&);
    ~Shared();
};

struct String {
    unsigned long storage[7];

    String(const String&);
};

extern String* (__thiscall *string_copy)(String*, const String&);

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        add_reference(&control->references);
}

inline String::String(const String& other)
{
    string_copy(this, other);
}

struct Holder {
    Shared shared;
    String text;

    Holder(const Holder&);
};

Holder::Holder(const Holder& other)
    : shared(other.shared), text(other.text)
{
}