// roc 2008-06 005f5120  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f5120
//
// 005f5120  56                   push esi
// 005f5121  8bf1                 mov esi, ecx
// 005f5123  807e4800             cmp byte ptr [esi + 0x48], 0
// 005f5127  7409                 je 0x5f5132
// 005f5129  e812e6ffff           call 0x5f3740
// 005f512e  c6464800             mov byte ptr [esi + 0x48], 0
// 005f5132  5e                   pop esi
// 005f5133  c3                   ret 
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
