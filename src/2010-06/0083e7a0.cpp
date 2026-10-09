// roc 2010-06 0083e7a0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0083e7a0
//
// 0083e7a0  f644240410           test byte ptr [esp + 4], 0x10
// 0083e7a5  7417                 je 0x83e7be
// 0083e7a7  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 0083e7ad  8b01                 mov eax, dword ptr [ecx]
// 0083e7af  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 0083e7b5  83ca04               or edx, 4
// 0083e7b8  89542404             mov dword ptr [esp + 4], edx
// 0083e7bc  ffe0                 jmp eax
// 0083e7be  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 0083e7c4  8b11                 mov edx, dword ptr [ecx]
// 0083e7c6  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 0083e7cc  83e0fb               and eax, 0xfffffffb
// 0083e7cf  89442404             mov dword ptr [esp + 4], eax
// 0083e7d3  ffe2                 jmp edx
// copied from an identical function in another client (function ?SetStyle@CXTPCustomizeSheet_CCustomizeEdit@ns_ROCX000004@@QAEXI@Z)

namespace ns_ROCX000004 {
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
