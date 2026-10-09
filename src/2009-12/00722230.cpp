// roc 2009-12 00722230  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00722230
//
// 00722230  80790100             cmp byte ptr [ecx + 1], 0
// 00722234  7404                 je 0x72223a
// 00722236  c6410100             mov byte ptr [ecx + 1], 0
// 0072223a  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0054b020@ns_ROCX000001@@QAEXXZ)

namespace ns_ROCX000001 {
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
