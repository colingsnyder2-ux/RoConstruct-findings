// roc 2008-06 005c72e0  unit: RBX::ArrowTool  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c72e0
//
// 005c72e0  8bc1                 mov eax, ecx
// 005c72e2  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_005c72e0 {

    void* f(int a1);
};
void* S_func_005c72e0::f(int a1)
{
    return this;
}
