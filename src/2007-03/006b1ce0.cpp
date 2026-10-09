// roc 2007-03 006b1ce0  unit: seg_006b0000  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006b1ce0
//
// 006b1ce0  f644240410           test byte ptr [esp + 4], 0x10
// 006b1ce5  7417                 je 0x6b1cfe
// 006b1ce7  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 006b1ced  8b01                 mov eax, dword ptr [ecx]
// 006b1cef  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 006b1cf5  83ca04               or edx, 4
// 006b1cf8  89542404             mov dword ptr [esp + 4], edx
// 006b1cfc  ffe0                 jmp eax
// 006b1cfe  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 006b1d04  8b11                 mov edx, dword ptr [ecx]
// 006b1d06  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 006b1d0c  83e0fb               and eax, 0xfffffffb
// 006b1d0f  89442404             mov dword ptr [esp + 4], eax
// 006b1d13  ffe2                 jmp edx
// copied from an identical function in another client (function ?SetStyle@CXTPCustomizeSheet_CCustomizeEdit@ns_ROCX000013@@QAEXI@Z)

namespace ns_ROCX000013 {
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
