// roc 2009-06 00626ef0  unit: RBX::ToolMouseCommand  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00626ef0
//
// 00626ef0  8bc1                 mov eax, ecx
// 00626ef2  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_00626ef0 {

    void* f(int a1);
};
void* S_func_00626ef0::f(int a1)
{
    return this;
}
