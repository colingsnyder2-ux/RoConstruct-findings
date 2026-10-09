// roc 2010-06 006a3c60  unit: VWinHttpRequest_source::?$stream_buffer  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a3c60
//
// 006a3c60  56                   push esi
// 006a3c61  8bf1                 mov esi, ecx
// 006a3c63  807e5800             cmp byte ptr [esi + 0x58], 0
// 006a3c67  7409                 je 0x6a3c72
// 006a3c69  e8b2e2ffff           call 0x6a1f20
// 006a3c6e  c6465800             mov byte ptr [esi + 0x58], 0
// 006a3c72  5e                   pop esi
// 006a3c73  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000019@@QAEXXZ)

namespace ns_ROCX000019 {
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
