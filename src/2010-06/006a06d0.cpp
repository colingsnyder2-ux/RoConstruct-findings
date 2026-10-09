// roc 2010-06 006a06d0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a06d0
//
// 006a06d0  80790400             cmp byte ptr [ecx + 4], 0
// 006a06d4  7404                 je 0x6a06da
// 006a06d6  c6410400             mov byte ptr [ecx + 4], 0
// 006a06da  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0054b1a0@ns_ROCX000006@@QAEXXZ)

namespace ns_ROCX000006 {
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
