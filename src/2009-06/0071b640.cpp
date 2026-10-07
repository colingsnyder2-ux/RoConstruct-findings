// roc 2009-06 0071b640  unit: RBX::Kernel  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0071b640
//
// 0071b640  8bc1                 mov eax, ecx
// 0071b642  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0071b640 {

    void* f();
};
void* S_func_0071b640::f()
{
    return this;
}
