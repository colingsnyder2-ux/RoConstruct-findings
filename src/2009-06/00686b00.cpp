// roc 2009-06 00686b00  unit: VWinHttpRequest_source::?$stream_buffer  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00686b00
//
// 00686b00  56                   push esi
// 00686b01  8bf1                 mov esi, ecx
// 00686b03  807e5800             cmp byte ptr [esi + 0x58], 0
// 00686b07  7409                 je 0x686b12
// 00686b09  e812f2ffff           call 0x685d20
// 00686b0e  c6465800             mov byte ptr [esi + 0x58], 0
// 00686b12  5e                   pop esi
// 00686b13  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX00000f@@QAEXXZ)

namespace ns_ROCX00000f {
struct S {
    char pad[0x58];
    char flag;
    void sub_54b960();
    void f();
};

void S::f()
{
    if (flag != 0) {
        sub_54b960();
        flag = 0;
    }
}
}
