// roc 2008-06 0075b380  unit: CXTPDockingPaneMiniWnd  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075b380
//
// 0075b380  56                   push esi
// 0075b381  8bf1                 mov esi, ecx
// 0075b383  e8d8ffffff           call 0x75b360
// 0075b388  85c0                 test eax, eax
// 0075b38a  7409                 je 0x75b395
// 0075b38c  b801000000           mov eax, 1
// 0075b391  5e                   pop esi
// 0075b392  c20400               ret 4
// 0075b395  8b442408             mov eax, dword ptr [esp + 8]
// 0075b399  50                   push eax
// 0075b39a  8bce                 mov ecx, esi
// 0075b39c  e839150600           call 0x7bc8da
// 0075b3a1  5e                   pop esi
// 0075b3a2  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPDockingPaneMiniWnd@ns_ROCX000085@@QAEHH@Z)

namespace ns_ROCX000085 {
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
