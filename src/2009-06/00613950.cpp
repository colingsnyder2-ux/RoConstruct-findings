// roc 2009-06 00613950  unit: boost::iostreams::Uoutput::V?$chain::?$chain_client  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00613950
//
// 00613950  80790100             cmp byte ptr [ecx + 1], 0
// 00613954  7404                 je 0x61395a
// 00613956  c6410100             mov byte ptr [ecx + 1], 0
// 0061395a  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0054b020@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
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
