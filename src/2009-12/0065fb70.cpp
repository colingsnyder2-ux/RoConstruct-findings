// roc 2009-12 0065fb70  unit: RBX::SpanningTree  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0065fb70
//
// 0065fb70  b001                 mov al, 1
// 0065fb72  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_004f2a00@ns_ROCX000001@@QAE_NH@Z)

namespace ns_ROCX000001 {
struct S_func_004f2a00 {

    bool f(int a1);
};
bool S_func_004f2a00::f(int a1)
{
    return true;
}
}
