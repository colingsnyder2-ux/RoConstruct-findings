// roc 2010-06 008477e0  unit: CXTPMenuBar  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008477e0
//
// 008477e0  56                   push esi
// 008477e1  57                   push edi
// 008477e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008477e6  8bf1                 mov esi, ecx
// 008477e8  81ffbf2f0000         cmp edi, 0x2fbf
// 008477ee  7505                 jne 0x8477f5
// 008477f0  e8fbfdffff           call 0x8475f0
// 008477f5  57                   push edi
// 008477f6  8bce                 mov ecx, esi
// 008477f8  e8031cf7ff           call 0x7b9400
// 008477fd  5f                   pop edi
// 008477fe  5e                   pop esi
// 008477ff  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPMenuBar@ns_ROCX00001b@@QAEXI@Z)

namespace ns_ROCX00001b {
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
