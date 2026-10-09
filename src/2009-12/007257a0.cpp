// roc 2009-12 007257a0  unit: VWinHttpRequest_source::?$stream_buffer  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007257a0
//
// 007257a0  56                   push esi
// 007257a1  8bf1                 mov esi, ecx
// 007257a3  807e4800             cmp byte ptr [esi + 0x48], 0
// 007257a7  7409                 je 0x7257b2
// 007257a9  e8e2e3ffff           call 0x723b90
// 007257ae  c6464800             mov byte ptr [esi + 0x48], 0
// 007257b2  5e                   pop esi
// 007257b3  c3                   ret 
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
