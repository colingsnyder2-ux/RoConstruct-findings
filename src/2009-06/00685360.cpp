// roc 2009-06 00685360  unit: boost::iostreams::Uinput::V?$chain::?$chain_client  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00685360
//
// 00685360  80790400             cmp byte ptr [ecx + 4], 0
// 00685364  7404                 je 0x68536a
// 00685366  c6410400             mov byte ptr [ecx + 4], 0
// 0068536a  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0054b1a0@ns_ROCX000003@@QAEXXZ)

namespace ns_ROCX000003 {
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
