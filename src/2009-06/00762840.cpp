// roc 2009-06 00762840  unit: CXTPControlColorSelector  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00762840
//
// 00762840  8b442408             mov eax, dword ptr [esp + 8]
// 00762844  56                   push esi
// 00762845  8bf1                 mov esi, ecx
// 00762847  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0076284b  50                   push eax
// 0076284c  51                   push ecx
// 0076284d  8bce                 mov ecx, esi
// 0076284f  e8ecfdffff           call 0x762640
// 00762854  83f8ff               cmp eax, -1
// 00762857  7408                 je 0x762861
// 00762859  50                   push eax
// 0076285a  8bce                 mov ecx, esi
// 0076285c  e81ff4ffff           call 0x761c80
// 00762861  5e                   pop esi
// 00762862  c20800               ret 8
// copied from an identical function in another client (function ?func@CXTPControlColorSelector@ns_ROCX00000a@@QAEXHH@Z)

namespace ns_ROCX00000a {
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
