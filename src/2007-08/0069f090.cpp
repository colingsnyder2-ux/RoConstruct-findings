// roc 2007-08 0069f090  unit: RBX::Kernel  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069f090
//
// 0069f090  8bc1                 mov eax, ecx
// 0069f092  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0069f090 {

    void* f();
};
void* S_func_0069f090::f()
{
    return this;
}
