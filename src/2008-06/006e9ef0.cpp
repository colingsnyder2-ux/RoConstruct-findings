// roc 2008-06 006e9ef0  unit: CXTPControlColorSelector  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e9ef0
//
// 006e9ef0  8b442408             mov eax, dword ptr [esp + 8]
// 006e9ef4  56                   push esi
// 006e9ef5  8bf1                 mov esi, ecx
// 006e9ef7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e9efb  50                   push eax
// 006e9efc  51                   push ecx
// 006e9efd  8bce                 mov ecx, esi
// 006e9eff  e8ecfdffff           call 0x6e9cf0
// 006e9f04  83f8ff               cmp eax, -1
// 006e9f07  7408                 je 0x6e9f11
// 006e9f09  50                   push eax
// 006e9f0a  8bce                 mov ecx, esi
// 006e9f0c  e86ff4ffff           call 0x6e9380
// 006e9f11  5e                   pop esi
// 006e9f12  c20800               ret 8
// copied from an identical function in another client (function ?func@CXTPControlColorSelector@ns_ROCX00000e@@QAEXHH@Z)

namespace ns_ROCX00000e {
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
