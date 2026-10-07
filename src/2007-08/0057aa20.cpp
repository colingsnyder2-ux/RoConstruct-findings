// roc 2007-08 0057aa20  unit: RBX::Humanoid::State  size: 5 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 0057aa20
//
// 0057aa20  8bc1                 mov eax, ecx
// 0057aa22  c20400               ret 4
// auto-matched from its assembly shape

struct S_func_0057aa20 {

    void* f(int a1);
};
void* S_func_0057aa20::f(int a1)
{
    return this;
}
