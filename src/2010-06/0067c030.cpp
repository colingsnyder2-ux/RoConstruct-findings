// roc 2010-06 0067c030  unit: std::D::DU?$char_traits::V?$basic_string::$$CBV?$map::V?$shared_ptr::?$holder  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0067c030
//
// 0067c030  6aff                 push -1
// 0067c032  6878879a00           push 0x9a8778
// 0067c037  64a100000000         mov eax, dword ptr fs:[0]
// 0067c03d  50                   push eax
// 0067c03e  64892500000000       mov dword ptr fs:[0], esp
// 0067c045  51                   push ecx
// 0067c046  56                   push esi
// 0067c047  8bf1                 mov esi, ecx
// 0067c049  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0067c04d  8b01                 mov eax, dword ptr [ecx]
// 0067c04f  8906                 mov dword ptr [esi], eax
// 0067c051  8b4104               mov eax, dword ptr [ecx + 4]
// 0067c054  89742404             mov dword ptr [esp + 4], esi
// 0067c058  894604               mov dword ptr [esi + 4], eax
// 0067c05b  85c0                 test eax, eax
// 0067c05d  740c                 je 0x67c06b
// 0067c05f  83c004               add eax, 4
// 0067c062  ba01000000           mov edx, 1
// 0067c067  f00fc110             lock xadd dword ptr [eax], edx
// 0067c06b  83c108               add ecx, 8
// 0067c06e  51                   push ecx
// 0067c06f  8d4e08               lea ecx, [esi + 8]
// 0067c072  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0067c07a  ff150ca49e00         call dword ptr [0x9ea40c]
// 0067c080  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067c084  8bc6                 mov eax, esi
// 0067c086  5e                   pop esi
// 0067c087  64890d00000000       mov dword ptr fs:[0], ecx
// 0067c08e  83c410               add esp, 0x10
// 0067c091  c20400               ret 4
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