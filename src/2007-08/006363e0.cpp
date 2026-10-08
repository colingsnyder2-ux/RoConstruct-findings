// from server: 100% by colin
// roc 2007-08 006363e0  unit: CXTPControlComboBoxList  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006363e0
//
// 006363e0  56                   push esi
// 006363e1  8bf1                 mov esi, ecx
// 006363e3  8b465c               mov eax, dword ptr [esi + 0x5c]
// 006363e6  05bc010000           add eax, 0x1bc
// 006363eb  50                   push eax
// 006363ec  e8fff6ffff           call 0x635af0
// 006363f1  8bce                 mov ecx, esi
// 006363f3  5e                   pop esi
// 006363f4  e953a5ffff           jmp 0x63094c

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
