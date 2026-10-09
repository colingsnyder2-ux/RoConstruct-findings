// roc 2007-03 0065ef80  unit: seg_00650000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065ef80
//
// 0065ef80  8b442408             mov eax, dword ptr [esp + 8]
// 0065ef84  56                   push esi
// 0065ef85  8bf1                 mov esi, ecx
// 0065ef87  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0065ef8b  50                   push eax
// 0065ef8c  51                   push ecx
// 0065ef8d  8bce                 mov ecx, esi
// 0065ef8f  e8ecfdffff           call 0x65ed80
// 0065ef94  83f8ff               cmp eax, -1
// 0065ef97  7408                 je 0x65efa1
// 0065ef99  50                   push eax
// 0065ef9a  8bce                 mov ecx, esi
// 0065ef9c  e8dff5ffff           call 0x65e580
// 0065efa1  5e                   pop esi
// 0065efa2  c20800               ret 8
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
