// roc 2007-03 00625060  unit: seg_00620000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00625060
//
// 00625060  56                   push esi
// 00625061  8bf1                 mov esi, ecx
// 00625063  8d4e40               lea ecx, [esi + 0x40]
// 00625066  e815ffffff           call 0x624f80
// 0062506b  8d4e50               lea ecx, [esi + 0x50]
// 0062506e  e80dffffff           call 0x624f80
// 00625073  8d8ea0000000         lea ecx, [esi + 0xa0]
// 00625079  5e                   pop esi
// 0062507a  e901ffffff           jmp 0x624f80
// copied from an identical function in another client (function ?func_648710@CXTPCommandBar@ns_ROCX00000b@@QAEXXZ)

namespace ns_ROCX00000b {
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
}
