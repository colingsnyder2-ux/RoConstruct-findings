// roc 2010-06 006014c0  unit: RBX::ArrowTool  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006014c0
//
// 006014c0  8bc1                 mov eax, ecx
// 006014c2  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_006014c0 {

    void* f(int a1);
};
void* S_func_006014c0::f(int a1)
{
    return this;
}
