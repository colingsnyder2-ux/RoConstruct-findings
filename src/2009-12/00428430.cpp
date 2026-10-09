// roc 2009-12 00428430  unit: CXTPControl  size: 6 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00428430
//
// 00428430  83c8ff               or eax, 0xffffffff
// 00428433  c20c00               ret 0xc
// copied from an identical function in another client (function ?f@S_func_00427800@ns_ROCX000060@@QAEHHHH@Z)

namespace ns_ROCX000060 {
struct S_func_00427800 {

    int f(int a1, int a2, int a3);
};
int S_func_00427800::f(int a1, int a2, int a3)
{
    return -1;
}
}
