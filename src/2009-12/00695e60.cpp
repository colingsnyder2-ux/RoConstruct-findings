// roc 2009-12 00695e60  unit: RBX::ArrowTool  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00695e60
//
// 00695e60  8bc1                 mov eax, ecx
// 00695e62  c20400               ret 4
// copied from an identical function in another client (function ?f@S_func_00626ef0@ns_ROCX00007e@@QAEPAXH@Z)

namespace ns_ROCX00007e {
struct S_func_00626ef0 {

    void* f(int a1);
};
void* S_func_00626ef0::f(int a1)
{
    return this;
}
}
