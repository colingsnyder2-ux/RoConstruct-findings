// roc 2011-06 008bfc40  unit: CXTPDockingPaneMiniWnd  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008bfc40
//
// 008bfc40  56                   push esi
// 008bfc41  8bf1                 mov esi, ecx
// 008bfc43  e8d8ffffff           call 0x8bfc20
// 008bfc48  85c0                 test eax, eax
// 008bfc4a  7409                 je 0x8bfc55
// 008bfc4c  b801000000           mov eax, 1
// 008bfc51  5e                   pop esi
// 008bfc52  c20400               ret 4
// 008bfc55  8b442408             mov eax, dword ptr [esp + 8]
// 008bfc59  50                   push eax
// 008bfc5a  8bce                 mov ecx, esi
// 008bfc5c  e819d11000           call 0x9ccd7a
// 008bfc61  5e                   pop esi
// 008bfc62  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPDockingPaneMiniWnd@ns_ROCX000039@@QAEHH@Z)

namespace ns_ROCX000039 {
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
