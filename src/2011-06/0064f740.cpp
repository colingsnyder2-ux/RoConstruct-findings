// roc 2011-06 0064f740  unit: RBX::ArrowToolBase  size: 5 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0064f740
//
// 0064f740  8bc1                 mov eax, ecx
// 0064f742  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0064f740 {

    void* f(int a1);
};
void* S_func_0064f740::f(int a1)
{
    return this;
}
