// roc 2007-03 00620b40  unit: seg_00620000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00620b40
//
// 00620b40  56                   push esi
// 00620b41  8bf1                 mov esi, ecx
// 00620b43  8b465c               mov eax, dword ptr [esi + 0x5c]
// 00620b46  05bc010000           add eax, 0x1bc
// 00620b4b  50                   push eax
// 00620b4c  e88ff5ffff           call 0x6200e0
// 00620b51  8bce                 mov ecx, esi
// 00620b53  5e                   pop esi
// 00620b54  e95de2ffff           jmp 0x61edb6
// copied from an identical function in another client (function ?func@CXTPControlComboBoxList@ns_ROCX000020@@QAEXXZ)

namespace ns_ROCX000020 {
struct CXTPControlComboBoxList {
    char pad[0x5c];
    int field_5c;
    void sub_635af0(int);
    void sub_63094c();
    void func();
};

void CXTPControlComboBoxList::func() {
    sub_635af0(field_5c + 0x1bc);
    sub_63094c();
}
}
