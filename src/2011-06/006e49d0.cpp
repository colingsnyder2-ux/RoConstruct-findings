// roc 2011-06 006e49d0  unit: VWinHttpRequest_source::?$stream_buffer  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e49d0
//
// 006e49d0  56                   push esi
// 006e49d1  8bf1                 mov esi, ecx
// 006e49d3  807e4800             cmp byte ptr [esi + 0x48], 0
// 006e49d7  7409                 je 0x6e49e2
// 006e49d9  e832e4ffff           call 0x6e2e10
// 006e49de  c6464800             mov byte ptr [esi + 0x48], 0
// 006e49e2  5e                   pop esi
// 006e49e3  c3                   ret 
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
