// roc 2008-06 006a6e00  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6e00
//
// 006a6e00  f644240410           test byte ptr [esp + 4], 0x10
// 006a6e05  7417                 je 0x6a6e1e
// 006a6e07  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 006a6e0d  8b01                 mov eax, dword ptr [ecx]
// 006a6e0f  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 006a6e15  83ca04               or edx, 4
// 006a6e18  89542404             mov dword ptr [esp + 4], edx
// 006a6e1c  ffe0                 jmp eax
// 006a6e1e  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 006a6e24  8b11                 mov edx, dword ptr [ecx]
// 006a6e26  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 006a6e2c  83e0fb               and eax, 0xfffffffb
// 006a6e2f  89442404             mov dword ptr [esp + 4], eax
// 006a6e33  ffe2                 jmp edx
// copied from an identical function in another client (function ?SetStyle@CXTPCustomizeSheet_CCustomizeEdit@ns_ROCX00000f@@QAEXI@Z)

namespace ns_ROCX00000f {
struct CXTPCustomizeSheet_CCustomizeEdit {
    void SetStyle(unsigned int flags);
};

void CXTPCustomizeSheet_CCustomizeEdit::SetStyle(unsigned int flags) {
    if (flags & 0x10) {
        unsigned int v = *(unsigned int*)((char*)this + 0xd0);
        void (__thiscall *fn)(void*, unsigned int) = *(void (__thiscall **)(void*, unsigned int))((*(char**)this) + 0x94);
        v |= 4;
        fn(this, v);
    } else {
        unsigned int v = *(unsigned int*)((char*)this + 0xd0);
        void (__thiscall *fn)(void*, unsigned int) = *(void (__thiscall **)(void*, unsigned int))((*(char**)this) + 0x94);
        v &= ~4u;
        fn(this, v);
    }
}
}
