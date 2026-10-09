// roc 2007-03 0054a760  unit: seg_00540000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a760
//
// 0054a760  80790100             cmp byte ptr [ecx + 1], 0
// 0054a764  7404                 je 0x54a76a
// 0054a766  c6410100             mov byte ptr [ecx + 1], 0
// 0054a76a  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0054b020@ns_ROCX00000b@@QAEXXZ)

namespace ns_ROCX00000b {
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
