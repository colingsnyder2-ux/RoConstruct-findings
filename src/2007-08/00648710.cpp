// from server: 100% by colin
// roc 2007-08 00648710  unit: CXTPCommandBar  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00648710
//
// 00648710  56                   push esi
// 00648711  8bf1                 mov esi, ecx
// 00648713  8d4e40               lea ecx, [esi + 0x40]
// 00648716  e825ffffff           call 0x648640
// 0064871b  8d4e50               lea ecx, [esi + 0x50]
// 0064871e  e81dffffff           call 0x648640
// 00648723  8d8ea0000000         lea ecx, [esi + 0xa0]
// 00648729  5e                   pop esi
// 0064872a  e911ffffff           jmp 0x648640

struct CXTPCommandBar {
    char pad0[0x40];
    char field40[0x10];
    char field50[0x50];
    char fieldA0[0x10];
    void sub_648640();
    void func_648710();
};

void CXTPCommandBar::func_648710() {
    ((CXTPCommandBar*)((char*)this + 0x40))->sub_648640();
    ((CXTPCommandBar*)((char*)this + 0x50))->sub_648640();
    ((CXTPCommandBar*)((char*)this + 0xa0))->sub_648640();
}
