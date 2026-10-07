// roc 2009-06 0081adec  unit: CXTIconHandle  size: 3 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081adec
//
// 0081adec  8bc1                 mov eax, ecx
// 0081adee  c3                   ret 
// auto-matched from its assembly shape

struct S_func_0081adec {

    void* f();
};
void* S_func_0081adec::f()
{
    return this;
}
