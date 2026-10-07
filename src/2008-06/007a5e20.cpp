// roc 2008-06 007a5e20  unit: CXTIconHandle  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a5e20
//
// 007a5e20  8bc1                 mov eax, ecx
// 007a5e22  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007a5e20 {

    void* f();
};
void* S_func_007a5e20::f()
{
    return this;
}
