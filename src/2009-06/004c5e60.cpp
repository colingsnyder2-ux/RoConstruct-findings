// roc 2009-06 004c5e60  unit: RakNet::VBitStream::?$sp_counted_impl_p  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c5e60
//
// 004c5e60  6aff                 push -1
// 004c5e62  68f89c8500           push 0x859cf8
// 004c5e67  64a100000000         mov eax, dword ptr fs:[0]
// 004c5e6d  50                   push eax
// 004c5e6e  64892500000000       mov dword ptr fs:[0], esp
// 004c5e75  51                   push ecx
// 004c5e76  56                   push esi
// 004c5e77  8bf1                 mov esi, ecx
// 004c5e79  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004c5e7d  8b01                 mov eax, dword ptr [ecx]
// 004c5e7f  8906                 mov dword ptr [esi], eax
// 004c5e81  8b4104               mov eax, dword ptr [ecx + 4]
// 004c5e84  89742404             mov dword ptr [esp + 4], esi
// 004c5e88  894604               mov dword ptr [esi + 4], eax
// 004c5e8b  85c0                 test eax, eax
// 004c5e8d  740c                 je 0x4c5e9b
// 004c5e8f  83c004               add eax, 4
// 004c5e92  ba01000000           mov edx, 1
// 004c5e97  f00fc110             lock xadd dword ptr [eax], edx
// 004c5e9b  83c108               add ecx, 8
// 004c5e9e  51                   push ecx
// 004c5e9f  8d4e08               lea ecx, [esi + 8]
// 004c5ea2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004c5eaa  ff15b8e48900         call dword ptr [0x89e4b8]
// 004c5eb0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c5eb4  8bc6                 mov eax, esi
// 004c5eb6  5e                   pop esi
// 004c5eb7  64890d00000000       mov dword ptr fs:[0], ecx
// 004c5ebe  83c410               add esp, 0x10
// 004c5ec1  c20400               ret 4
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