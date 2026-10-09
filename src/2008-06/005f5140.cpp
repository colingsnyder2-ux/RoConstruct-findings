// roc 2008-06 005f5140  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f5140
//
// 005f5140  56                   push esi
// 005f5141  8bf1                 mov esi, ecx
// 005f5143  807e5800             cmp byte ptr [esi + 0x58], 0
// 005f5147  7409                 je 0x5f5152
// 005f5149  e8f2e5ffff           call 0x5f3740
// 005f514e  c6465800             mov byte ptr [esi + 0x58], 0
// 005f5152  5e                   pop esi
// 005f5153  c3                   ret 
// copied from an identical function in another client (function ?f@S@ns_ROCX000011@@QAEXXZ)

namespace ns_ROCX000011 {
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
