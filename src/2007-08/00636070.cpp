// from server: 100% by colin
// roc 2007-08 00636070  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00636070
//
// 00636070  f644240410           test byte ptr [esp + 4], 0x10
// 00636075  7417                 je 0x63608e
// 00636077  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 0063607d  8b01                 mov eax, dword ptr [ecx]
// 0063607f  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00636085  83ca04               or edx, 4
// 00636088  89542404             mov dword ptr [esp + 4], edx
// 0063608c  ffe0                 jmp eax
// 0063608e  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 00636094  8b11                 mov edx, dword ptr [ecx]
// 00636096  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 0063609c  83e0fb               and eax, 0xfffffffb
// 0063609f  89442404             mov dword ptr [esp + 4], eax
// 006360a3  ffe2                 jmp edx

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
