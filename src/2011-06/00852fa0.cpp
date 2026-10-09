// roc 2011-06 00852fa0  unit: CXTPControlColorSelector  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00852fa0
//
// 00852fa0  8b442408             mov eax, dword ptr [esp + 8]
// 00852fa4  56                   push esi
// 00852fa5  8bf1                 mov esi, ecx
// 00852fa7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00852fab  50                   push eax
// 00852fac  51                   push ecx
// 00852fad  8bce                 mov ecx, esi
// 00852faf  e8ecfdffff           call 0x852da0
// 00852fb4  83f8ff               cmp eax, -1
// 00852fb7  7408                 je 0x852fc1
// 00852fb9  50                   push eax
// 00852fba  8bce                 mov ecx, esi
// 00852fbc  e83ff4ffff           call 0x852400
// 00852fc1  5e                   pop esi
// 00852fc2  c20800               ret 8
// copied from an identical function in another client (function ?func@CXTPControlColorSelector@ns_ROCX000000@@QAEXHH@Z)

namespace ns_ROCX000000 {
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
