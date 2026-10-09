// roc 2009-06 007b0340  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b0340
//
// 007b0340  f644240410           test byte ptr [esp + 4], 0x10
// 007b0345  7417                 je 0x7b035e
// 007b0347  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 007b034d  8b01                 mov eax, dword ptr [ecx]
// 007b034f  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 007b0355  83ca04               or edx, 4
// 007b0358  89542404             mov dword ptr [esp + 4], edx
// 007b035c  ffe0                 jmp eax
// 007b035e  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 007b0364  8b11                 mov edx, dword ptr [ecx]
// 007b0366  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 007b036c  83e0fb               and eax, 0xfffffffb
// 007b036f  89442404             mov dword ptr [esp + 4], eax
// 007b0373  ffe2                 jmp edx
// copied from an identical function in another client (function ?SetStyle@CXTPCustomizeSheet_CCustomizeEdit@ns_ROCX00000a@@QAEXI@Z)

namespace ns_ROCX00000a {
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
