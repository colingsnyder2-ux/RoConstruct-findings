// roc 2009-12 00422b70  unit: RBX::Kernel  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00422b70
//
// 00422b70  8bc1                 mov eax, ecx
// 00422b72  c3                   ret 
// copied from an identical function in another client (function ?f@S_func_0071b640@ns_ROCX000024@@QAEPAXXZ)

namespace ns_ROCX000024 {
struct S_func_0071b640 {

    void* f();
};
void* S_func_0071b640::f()
{
    return this;
}
}
