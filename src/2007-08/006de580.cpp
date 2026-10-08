// from server: 100% by colin
// roc 2007-08 006de580  unit: CXTPDockingPaneMiniWnd  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006de580
//
// 006de580  56                   push esi
// 006de581  8bf1                 mov esi, ecx
// 006de583  e8d8ffffff           call 0x6de560
// 006de588  85c0                 test eax, eax
// 006de58a  7409                 je 0x6de595
// 006de58c  b801000000           mov eax, 1
// 006de591  5e                   pop esi
// 006de592  c20400               ret 4
// 006de595  8b442408             mov eax, dword ptr [esp + 8]
// 006de599  50                   push eax
// 006de59a  8bce                 mov ecx, esi
// 006de59c  e89fa60500           call 0x738c40
// 006de5a1  5e                   pop esi
// 006de5a2  c20400               ret 4

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
