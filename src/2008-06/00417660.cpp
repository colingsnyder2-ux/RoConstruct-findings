// from server: 100% by king_originala
// roc 2008-06 00417660  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417660
//
// 00417660  6aff                 push -1
// 00417662  6838077d00           push 0x7d0738
// 00417667  64a100000000         mov eax, dword ptr fs:[0]
// 0041766d  50                   push eax
// 0041766e  64892500000000       mov dword ptr fs:[0], esp
// 00417675  51                   push ecx
// 00417676  56                   push esi
// 00417677  8bf1                 mov esi, ecx
// 00417679  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0041767d  8b01                 mov eax, dword ptr [ecx]
// 0041767f  8906                 mov dword ptr [esi], eax
// 00417681  8b4104               mov eax, dword ptr [ecx + 4]
// 00417684  89742404             mov dword ptr [esp + 4], esi
// 00417688  894604               mov dword ptr [esi + 4], eax
// 0041768b  85c0                 test eax, eax
// 0041768d  740c                 je 0x41769b
// 0041768f  83c004               add eax, 4
// 00417692  ba01000000           mov edx, 1
// 00417697  f00fc110             lock xadd dword ptr [eax], edx
// 0041769b  83c108               add ecx, 8
// 0041769e  51                   push ecx
// 0041769f  8d4e08               lea ecx, [esi + 8]
// 004176a2  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004176aa  ff155c248000         call dword ptr [0x80245c]
// 004176b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004176b4  8bc6                 mov eax, esi
// 004176b6  5e                   pop esi
// 004176b7  64890d00000000       mov dword ptr fs:[0], ecx
// 004176be  83c410               add esp, 0x10
// 004176c1  c20400               ret 4

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
