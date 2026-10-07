// roc 2010-06 0070b5e0  unit: RBX::Kernel  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0070b5e0
//
// 0070b5e0  8bc1                 mov eax, ecx
// 0070b5e2  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0070b5e0 {

    void* f();
};
void* S_func_0070b5e0::f()
{
    return this;
}
