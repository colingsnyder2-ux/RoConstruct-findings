// roc 2011-06 006e49f0  unit: VWinHttpRequest_source::?$stream_buffer  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e49f0
//
// 006e49f0  56                   push esi
// 006e49f1  8bf1                 mov esi, ecx
// 006e49f3  807e5800             cmp byte ptr [esi + 0x58], 0
// 006e49f7  7409                 je 0x6e4a02
// 006e49f9  e812e4ffff           call 0x6e2e10
// 006e49fe  c6465800             mov byte ptr [esi + 0x58], 0
// 006e4a02  5e                   pop esi
// 006e4a03  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000003@@QAEXXZ)

namespace ns_ROCX000003 {
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
