// roc 2010-06 007f1720  unit: CXTPControlColorSelector  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f1720
//
// 007f1720  8b442408             mov eax, dword ptr [esp + 8]
// 007f1724  56                   push esi
// 007f1725  8bf1                 mov esi, ecx
// 007f1727  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f172b  50                   push eax
// 007f172c  51                   push ecx
// 007f172d  8bce                 mov ecx, esi
// 007f172f  e8ecfdffff           call 0x7f1520
// 007f1734  83f8ff               cmp eax, -1
// 007f1737  7408                 je 0x7f1741
// 007f1739  50                   push eax
// 007f173a  8bce                 mov ecx, esi
// 007f173c  e86ff4ffff           call 0x7f0bb0
// 007f1741  5e                   pop esi
// 007f1742  c20800               ret 8
// copied from an identical function in another client (function ?func@CXTPControlColorSelector@ns_ROCX000014@@QAEXHH@Z)

namespace ns_ROCX000014 {
struct CXTPControlColorSelector {
    int sub_672E50(int, int);
    void sub_672460(int);
    void func(int, int);
};

void CXTPControlColorSelector::func(int a, int b) {
    int r = sub_672E50(a, b);
    if (r != -1) {
        sub_672460(r);
    }
}
}
