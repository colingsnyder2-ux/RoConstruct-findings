// roc 2011-06 0042c120  unit: RBX::Kernel  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0042c120
//
// 0042c120  8bc1                 mov eax, ecx
// 0042c122  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0042c120 {

    void* f();
};
void* S_func_0042c120::f()
{
    return this;
}
