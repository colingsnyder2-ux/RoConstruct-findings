// roc 2008-06 007188c0  unit: RBX::Kernel  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007188c0
//
// 007188c0  8bc1                 mov eax, ecx
// 007188c2  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007188c0 {

    void* f();
};
void* S_func_007188c0::f()
{
    return this;
}
