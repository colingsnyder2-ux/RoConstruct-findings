// roc 2007-03 006c7580  unit: seg_006c0000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c7580
//
// 006c7580  56                   push esi
// 006c7581  8bf1                 mov esi, ecx
// 006c7583  e8d8ffffff           call 0x6c7560
// 006c7588  85c0                 test eax, eax
// 006c758a  7409                 je 0x6c7595
// 006c758c  b801000000           mov eax, 1
// 006c7591  5e                   pop esi
// 006c7592  c20400               ret 4
// 006c7595  8b442408             mov eax, dword ptr [esp + 8]
// 006c7599  50                   push eax
// 006c759a  8bce                 mov ecx, esi
// 006c759c  e80f3e0700           call 0x73b3b0
// 006c75a1  5e                   pop esi
// 006c75a2  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPDockingPaneMiniWnd@ns_ROCX00007c@@QAEHH@Z)

namespace ns_ROCX00007c {
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
