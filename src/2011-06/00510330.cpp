// roc 2011-06 00510330  unit: RBX::ExclusiveArbiter  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00510330
//
// 00510330  b001                 mov al, 1
// 00510332  c20800               ret 8
// auto-matched from its assembly shape

struct S_func_00510330 {

    bool f(int a1, int a2);
};
bool S_func_00510330::f(int a1, int a2)
{
    return true;
}
