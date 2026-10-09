// roc 2009-12 008ae720  unit: CXTPDockingPaneMiniWnd  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ae720
//
// 008ae720  56                   push esi
// 008ae721  8bf1                 mov esi, ecx
// 008ae723  e8d8ffffff           call 0x8ae700
// 008ae728  85c0                 test eax, eax
// 008ae72a  7409                 je 0x8ae735
// 008ae72c  b801000000           mov eax, 1
// 008ae731  5e                   pop esi
// 008ae732  c20400               ret 4
// 008ae735  8b442408             mov eax, dword ptr [esp + 8]
// 008ae739  50                   push eax
// 008ae73a  8bce                 mov ecx, esi
// 008ae73c  e8b3850700           call 0x926cf4
// 008ae741  5e                   pop esi
// 008ae742  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPDockingPaneMiniWnd@ns_ROCX000076@@QAEHH@Z)

namespace ns_ROCX000076 {
struct CXTPDockingPaneMiniWnd {
    int sub_6de560();
    int sub_738c40(int);
    int func(int);
};

int CXTPDockingPaneMiniWnd::func(int a) {
    if (this->sub_6de560() != 0)
        return 1;
    return this->sub_738c40(a);
}
}
