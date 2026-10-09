// roc 2011-06 006e1750  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e1750
//
// 006e1750  80790400             cmp byte ptr [ecx + 4], 0
// 006e1754  7404                 je 0x6e175a
// 006e1756  c6410400             mov byte ptr [ecx + 4], 0
// 006e175a  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0054b1a0@ns_ROCX000007@@QAEXXZ)

namespace ns_ROCX000007 {
struct S_func_0054b1a0
{
    int z0;
    char flag;
    void f();
};

void S_func_0054b1a0::f()
{
    if (flag)
        flag = 0;
}
}
