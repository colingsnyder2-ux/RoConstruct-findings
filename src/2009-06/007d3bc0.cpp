// roc 2009-06 007d3bc0  unit: CXTPDockingPaneMiniWnd  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d3bc0
//
// 007d3bc0  56                   push esi
// 007d3bc1  8bf1                 mov esi, ecx
// 007d3bc3  e8d8ffffff           call 0x7d3ba0
// 007d3bc8  85c0                 test eax, eax
// 007d3bca  7409                 je 0x7d3bd5
// 007d3bcc  b801000000           mov eax, 1
// 007d3bd1  5e                   pop esi
// 007d3bd2  c20400               ret 4
// 007d3bd5  8b442408             mov eax, dword ptr [esp + 8]
// 007d3bd9  50                   push eax
// 007d3bda  8bce                 mov ecx, esi
// 007d3bdc  e8a78b0700           call 0x84c788
// 007d3be1  5e                   pop esi
// 007d3be2  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPDockingPaneMiniWnd@ns_ROCX000068@@QAEHH@Z)

namespace ns_ROCX000068 {
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
