// roc 2009-12 00632680  unit: RBX::StarterGuiService  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00632680
//
// 00632680  32c0                 xor al, al
// 00632682  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_005f2390@ns_ROCX000045@@QAE_NH@Z)

namespace ns_ROCX000045 {
struct S_func_005f2390 {

    bool f(int a1);
};
bool S_func_005f2390::f(int a1)
{
    return false;
}
}
