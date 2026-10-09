// roc 2008-06 007209f0  unit: CXTPMenuBar  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007209f0
//
// 007209f0  56                   push esi
// 007209f1  57                   push edi
// 007209f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007209f6  8bf1                 mov esi, ecx
// 007209f8  81ffbf2f0000         cmp edi, 0x2fbf
// 007209fe  7505                 jne 0x720a05
// 00720a00  e8fbfdffff           call 0x720800
// 00720a05  57                   push edi
// 00720a06  8bce                 mov ecx, esi
// 00720a08  e8d351f9ff           call 0x6b5be0
// 00720a0d  5f                   pop edi
// 00720a0e  5e                   pop esi
// 00720a0f  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPMenuBar@ns_ROCX000024@@QAEXI@Z)

namespace ns_ROCX000024 {
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
