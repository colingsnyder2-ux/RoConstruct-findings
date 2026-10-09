// roc 2009-12 00893630  unit: CXTPMenuBar  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00893630
//
// 00893630  56                   push esi
// 00893631  57                   push edi
// 00893632  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00893636  8bf1                 mov esi, ecx
// 00893638  81ffbf2f0000         cmp edi, 0x2fbf
// 0089363e  7505                 jne 0x893645
// 00893640  e8fbfdffff           call 0x893440
// 00893645  57                   push edi
// 00893646  8bce                 mov ecx, esi
// 00893648  e8431cf7ff           call 0x805290
// 0089364d  5f                   pop edi
// 0089364e  5e                   pop esi
// 0089364f  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPMenuBar@ns_ROCX00001f@@QAEXI@Z)

namespace ns_ROCX00001f {
struct CXTPMenuBar {
    void sub_6A6BD0();
    void sub_644750(unsigned int);
    void func(unsigned int);
};

void CXTPMenuBar::func(unsigned int arg) {
    if (arg == 0x2fbf) {
        sub_6A6BD0();
    }
    sub_644750(arg);
}
}
