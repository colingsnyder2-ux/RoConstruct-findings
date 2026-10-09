// roc 2009-12 004a0980  unit: RBX::BrickBuilder  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004a0980
//
// 004a0980  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@S_func_006fc7d0@ns_ROCX00001c@@QAEXHHH@Z)

namespace ns_ROCX00001c {
struct S_func_006fc7d0 {

    void f(int a1, int a2, int a3);
};
void S_func_006fc7d0::f(int a1, int a2, int a3)
{
}
}
