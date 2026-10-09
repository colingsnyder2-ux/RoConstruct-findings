// roc 2007-03 00698fc0  unit: seg_00690000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00698fc0
//
// 00698fc0  56                   push esi
// 00698fc1  57                   push edi
// 00698fc2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00698fc6  81ffbf2f0000         cmp edi, 0x2fbf
// 00698fcc  8bf1                 mov esi, ecx
// 00698fce  7505                 jne 0x698fd5
// 00698fd0  e8bbffffff           call 0x698f90
// 00698fd5  57                   push edi
// 00698fd6  8bce                 mov ecx, esi
// 00698fd8  e8230bfaff           call 0x639b00
// 00698fdd  5f                   pop edi
// 00698fde  5e                   pop esi
// 00698fdf  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPMenuBar@ns_ROCX000025@@QAEXI@Z)

namespace ns_ROCX000025 {
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
