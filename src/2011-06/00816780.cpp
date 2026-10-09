// roc 2011-06 00816780  unit: CXTPControlEdit  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816780
//
// 00816780  f644240410           test byte ptr [esp + 4], 0x10
// 00816785  7417                 je 0x81679e
// 00816787  8b91d0000000         mov edx, dword ptr [ecx + 0xd0]
// 0081678d  8b01                 mov eax, dword ptr [ecx]
// 0081678f  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00816795  83ca04               or edx, 4
// 00816798  89542404             mov dword ptr [esp + 4], edx
// 0081679c  ffe0                 jmp eax
// 0081679e  8b81d0000000         mov eax, dword ptr [ecx + 0xd0]
// 008167a4  8b11                 mov edx, dword ptr [ecx]
// 008167a6  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 008167ac  83e0fb               and eax, 0xfffffffb
// 008167af  89442404             mov dword ptr [esp + 4], eax
// 008167b3  ffe2                 jmp edx
// copied from an identical function in another client (function ?SetStyle@CXTPCustomizeSheet_CCustomizeEdit@ns_ROCX000001@@QAEXI@Z)

namespace ns_ROCX000001 {
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
