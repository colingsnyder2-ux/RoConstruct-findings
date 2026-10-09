// roc 2009-06 00615760  unit: UString_sink::?$stream_buffer  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00615760
//
// 00615760  56                   push esi
// 00615761  8bf1                 mov esi, ecx
// 00615763  807e4800             cmp byte ptr [esi + 0x48], 0
// 00615767  7409                 je 0x615772
// 00615769  e8b2050700           call 0x685d20
// 0061576e  c6464800             mov byte ptr [esi + 0x48], 0
// 00615772  5e                   pop esi
// 00615773  c3                   ret 
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
