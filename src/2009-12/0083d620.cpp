// roc 2009-12 0083d620  unit: CXTPControlColorSelector  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083d620
//
// 0083d620  8b442408             mov eax, dword ptr [esp + 8]
// 0083d624  56                   push esi
// 0083d625  8bf1                 mov esi, ecx
// 0083d627  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0083d62b  50                   push eax
// 0083d62c  51                   push ecx
// 0083d62d  8bce                 mov ecx, esi
// 0083d62f  e8ecfdffff           call 0x83d420
// 0083d634  83f8ff               cmp eax, -1
// 0083d637  7408                 je 0x83d641
// 0083d639  50                   push eax
// 0083d63a  8bce                 mov ecx, esi
// 0083d63c  e81ff4ffff           call 0x83ca60
// 0083d641  5e                   pop esi
// 0083d642  c20800               ret 8
// copied from an identical function in another client (function ?func@CXTPControlColorSelector@ns_ROCX000018@@QAEXHH@Z)

namespace ns_ROCX000018 {
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
