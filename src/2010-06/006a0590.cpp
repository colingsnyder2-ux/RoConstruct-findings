// roc 2010-06 006a0590  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a0590
//
// 006a0590  80790100             cmp byte ptr [ecx + 1], 0
// 006a0594  7404                 je 0x6a059a
// 006a0596  c6410100             mov byte ptr [ecx + 1], 0
// 006a059a  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0054b020@ns_ROCX000005@@QAEXXZ)

namespace ns_ROCX000005 {
struct S_func_0054b020
{
    char z0;
    char flag;
    void f();
};

void S_func_0054b020::f()
{
    if (flag)
        flag = 0;
}
}
