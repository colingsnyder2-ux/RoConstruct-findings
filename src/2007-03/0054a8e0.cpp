// roc 2007-03 0054a8e0  unit: seg_00540000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a8e0
//
// 0054a8e0  80790400             cmp byte ptr [ecx + 4], 0
// 0054a8e4  7404                 je 0x54a8ea
// 0054a8e6  c6410400             mov byte ptr [ecx + 4], 0
// 0054a8ea  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0054b1a0@ns_ROCX00000c@@QAEXXZ)

namespace ns_ROCX00000c {
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
