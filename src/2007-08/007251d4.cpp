// roc 2007-08 007251d4  unit: CXTIconHandle  size: 3 bytes
// roc-flags: /O2 /GS- /EHsc /MD
// Make this compile to the exact bytes below, then: roc check 2007-08 007251d4
//
// 007251d4  8bc1                 mov eax, ecx
// 007251d6  c3                   ret 
// auto-matched from its assembly shape

struct S_func_007251d4 {

    void* f();
};
void* S_func_007251d4::f()
{
    return this;
}
