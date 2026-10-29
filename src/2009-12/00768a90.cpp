// roc 2009-12 00768a90  unit: RBX::VInstance::?$NonFactoryProduct  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00768a90
//
// 00768a90  6aff                 push -1
// 00768a92  68583d9500           push 0x953d58
// 00768a97  64a100000000         mov eax, dword ptr fs:[0]
// 00768a9d  50                   push eax
// 00768a9e  64892500000000       mov dword ptr fs:[0], esp
// 00768aa5  51                   push ecx
// 00768aa6  56                   push esi
// 00768aa7  8bf1                 mov esi, ecx
// 00768aa9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00768aad  8b01                 mov eax, dword ptr [ecx]
// 00768aaf  8906                 mov dword ptr [esi], eax
// 00768ab1  8b4104               mov eax, dword ptr [ecx + 4]
// 00768ab4  89742404             mov dword ptr [esp + 4], esi
// 00768ab8  894604               mov dword ptr [esi + 4], eax
// 00768abb  85c0                 test eax, eax
// 00768abd  740c                 je 0x768acb
// 00768abf  83c004               add eax, 4
// 00768ac2  ba01000000           mov edx, 1
// 00768ac7  f00fc110             lock xadd dword ptr [eax], edx
// 00768acb  83c108               add ecx, 8
// 00768ace  51                   push ecx
// 00768acf  8d4e08               lea ecx, [esi + 8]
// 00768ad2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00768ada  ff15f0b69800         call dword ptr [0x98b6f0]
// 00768ae0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00768ae4  8bc6                 mov eax, esi
// 00768ae6  5e                   pop esi
// 00768ae7  64890d00000000       mov dword ptr fs:[0], ecx
// 00768aee  83c410               add esp, 0x10
// 00768af1  c20400               ret 4
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