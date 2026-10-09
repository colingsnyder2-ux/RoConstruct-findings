// roc 2009-12 007257c0  unit: VWinHttpRequest_source::?$stream_buffer  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007257c0
//
// 007257c0  56                   push esi
// 007257c1  8bf1                 mov esi, ecx
// 007257c3  807e5800             cmp byte ptr [esi + 0x58], 0
// 007257c7  7409                 je 0x7257d2
// 007257c9  e8c2e3ffff           call 0x723b90
// 007257ce  c6465800             mov byte ptr [esi + 0x58], 0
// 007257d2  5e                   pop esi
// 007257d3  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX00001d@@QAEXXZ)

namespace ns_ROCX00001d {
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
