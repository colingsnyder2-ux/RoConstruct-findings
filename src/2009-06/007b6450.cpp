// roc 2009-06 007b6450  unit: CXTPMenuBar  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b6450
//
// 007b6450  56                   push esi
// 007b6451  57                   push edi
// 007b6452  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007b6456  8bf1                 mov esi, ecx
// 007b6458  81ffbf2f0000         cmp edi, 0x2fbf
// 007b645e  7505                 jne 0x7b6465
// 007b6460  e8fbfdffff           call 0x7b6260
// 007b6465  57                   push edi
// 007b6466  8bce                 mov ecx, esi
// 007b6468  e8e37cf7ff           call 0x72e150
// 007b646d  5f                   pop edi
// 007b646e  5e                   pop esi
// 007b646f  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPMenuBar@ns_ROCX000011@@QAEXI@Z)

namespace ns_ROCX000011 {
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
