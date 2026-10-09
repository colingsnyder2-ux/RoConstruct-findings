// roc 2010-06 006a3c40  unit: VWinHttpRequest_source::?$stream_buffer  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a3c40
//
// 006a3c40  56                   push esi
// 006a3c41  8bf1                 mov esi, ecx
// 006a3c43  807e4800             cmp byte ptr [esi + 0x48], 0
// 006a3c47  7409                 je 0x6a3c52
// 006a3c49  e8d2e2ffff           call 0x6a1f20
// 006a3c4e  c6464800             mov byte ptr [esi + 0x48], 0
// 006a3c52  5e                   pop esi
// 006a3c53  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000000@@QAEXXZ)

namespace ns_ROCX000000 {
struct S {
    char pad[0x48];
    char flag;
    void f();
};

extern "C" void __cdecl helper();

void S::f() {
    if (flag != 0) {
        helper();
        flag = 0;
    }
}
}
