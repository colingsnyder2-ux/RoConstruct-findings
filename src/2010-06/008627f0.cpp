// roc 2010-06 008627f0  unit: CXTPDockingPaneMiniWnd  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008627f0
//
// 008627f0  56                   push esi
// 008627f1  8bf1                 mov esi, ecx
// 008627f3  e8d8ffffff           call 0x8627d0
// 008627f8  85c0                 test eax, eax
// 008627fa  7409                 je 0x862805
// 008627fc  b801000000           mov eax, 1
// 00862801  5e                   pop esi
// 00862802  c20400               ret 4
// 00862805  8b442408             mov eax, dword ptr [esp + 8]
// 00862809  50                   push eax
// 0086280a  8bce                 mov ecx, esi
// 0086280c  e825ae1100           call 0x97d636
// 00862811  5e                   pop esi
// 00862812  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPDockingPaneMiniWnd@ns_ROCX000072@@QAEHH@Z)

namespace ns_ROCX000072 {
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
