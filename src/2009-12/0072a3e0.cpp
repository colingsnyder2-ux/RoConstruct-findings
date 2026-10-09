// roc 2009-12 0072a3e0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0072a3e0
//
// 0072a3e0  80790400             cmp byte ptr [ecx + 4], 0
// 0072a3e4  7404                 je 0x72a3ea
// 0072a3e6  c6410400             mov byte ptr [ecx + 4], 0
// 0072a3ea  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0054b1a0@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
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
