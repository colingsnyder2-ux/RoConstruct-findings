// roc 2012-06 00846b30  unit: seg_00840000  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00846b30
//
// 00846b30  6aff                 push -1
// 00846b32  6898dea900           push 0xa9de98
// 00846b37  64a100000000         mov eax, dword ptr fs:[0]
// 00846b3d  50                   push eax
// 00846b3e  64892500000000       mov dword ptr fs:[0], esp
// 00846b45  51                   push ecx
// 00846b46  56                   push esi
// 00846b47  8bf1                 mov esi, ecx
// 00846b49  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00846b4d  8b01                 mov eax, dword ptr [ecx]
// 00846b4f  8906                 mov dword ptr [esi], eax
// 00846b51  8b4104               mov eax, dword ptr [ecx + 4]
// 00846b54  89742404             mov dword ptr [esp + 4], esi
// 00846b58  894604               mov dword ptr [esi + 4], eax
// 00846b5b  85c0                 test eax, eax
// 00846b5d  740c                 je 0x846b6b
// 00846b5f  83c004               add eax, 4
// 00846b62  ba01000000           mov edx, 1
// 00846b67  f00fc110             lock xadd dword ptr [eax], edx
// 00846b6b  83c108               add ecx, 8
// 00846b6e  51                   push ecx
// 00846b6f  8d4e08               lea ecx, [esi + 8]
// 00846b72  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00846b7a  ff154426b200         call dword ptr [0xb22644]
// 00846b80  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00846b84  8bc6                 mov eax, esi
// 00846b86  5e                   pop esi
// 00846b87  64890d00000000       mov dword ptr fs:[0], ecx
// 00846b8e  83c410               add esp, 0x10
// 00846b91  c20400               ret 4
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